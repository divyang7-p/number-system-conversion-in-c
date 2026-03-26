#include <stdio.h>
#include <math.h>
void main()
{
    int choice, n, rem = 0, i = 1, base, decimal = 0, j = 0, octal = 0;
    int binary = 0;
    char hexadecimal[10];

    char value;
    printf("--- HERE ARE SOME MESSAGES ---  \n");
    printf("Enter 1 for decimal to binary.\n");
    printf("Enter 2 for binary to decimal.\n");
    printf("Enter 3 for decimal to octal.\n");
    printf("Enter 4 for octal to decimal.\n");
    printf("Enter 5 for decimal to hexadecimal.\n");
    printf("Enter 6 for hexadecimal to decimal.\n");
    printf("Enter 7 for binary to octal.\n");
    printf("Enter 8 for octal to binary.\n");
    printf("Enter 9 for binary to hexadecimal.\n");
    printf("Enter 10 for hexadecimal to binary.\n");
    printf("Enter 11 for hexadecimal to octal.\n");
    printf("Enter 12 for octal to hexadecimal\n");
    printf("Enter choice : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter a decimal number : ");
        scanf("%d", &n);
        while (n != 0)
        {
            rem = n % 2;
            binary = binary + rem * i;
            n = n / 2;
            i = i * 10;
        }
        printf("Binary=%d", binary);
        break;
    case 2:
        printf("Enter a binary number : ");
        scanf("%d", &base);
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(2, j);
            base = base / 10;
            j = j + 1;
        }
        printf("Decimal=%d", decimal);
        break;
    case 3:
        printf("Enter a decimal number : ");
        scanf("%d", &n);
        while (n != 0)
        {
            rem = n % 8;
            octal = octal + rem * i;
            n = n / 8;
            i = i * 10;
        }
        printf("Octal=%d", octal);
        break;

    case 4:
        printf("Enter octal number : ");
        scanf("%d", &base);
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(8, j);
            base = base / 10;
            j = j + 1;
        }
        printf("Decimal=%d", decimal);
        break;

    case 5:
        printf("Enter decimal number : ");
        scanf("%d", &n);
        int k = 0;
        char hex[10];
        while (n != 0)
        {
            rem = n % 16;
            if (rem < 10)
            {
                hex[k] = rem + '0';
            }

            if (rem >= 10)
            {
                switch (rem)
                {
                case 10:
                    hex[k] = 'A';
                    break;
                case 11:
                    hex[k] = 'B';
                    break;
                case 12:
                    hex[k] = 'C';
                    break;
                case 13:
                    hex[k] = 'D';
                    break;
                case 14:
                    hex[k] = 'E';
                    break;
                case 15:
                    hex[k] = 'F';
                    break;
                default:
                    break;
                }
            }
            n = n / 16;
            k = k + 1;
        }
        printf("Hexadecimal=");
        for (int j = k - 1; j >= 0; j--)
        {
            printf("%c", hex[j]);
        }
        break;

    case 6:

        printf("Enter Hexadecimal number : ");
        scanf("%s", hexadecimal);
        while (hexadecimal[j] != '\0')
        {
            if (hexadecimal[j] >= '0' && hexadecimal[j] <= '9')
            {
                value = hexadecimal[j] - '0';
            }
            else if (hexadecimal[j] >= 'A' && hexadecimal[j] <= 'F')
            {
                value = hexadecimal[j] - 'A' + 10;
            }
            else if (hexadecimal[j] >= 'a' && hexadecimal[j] <= 'f')
            {
                value = hexadecimal[j] - 'a' + 10;
            }
            else
            {
                printf("Invalid hexadecimal digit..%c", hexadecimal[j]);
                return;
            }
            decimal = decimal * 16 + value;
            j++;
        }
        printf("Decimal=%d", decimal);
        break;

    case 7:
        printf("Enter binary number : ");
        scanf("%d", &base);
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(2, j);
            base = base / 10;
            j = j + 1;
        }
        while (decimal != 0)
        {
            rem = decimal % 8;
            octal = octal + rem * i;
            decimal = decimal / 8;
            i = i * 10;
        }
        printf("octal=%d", octal);
        break;

    case 8:
        printf("Enter octal number : ");
        scanf("%d", &base);
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(8, j);
            base = base / 10;
            j = j + 1;
        }
        while (decimal != 0)
        {
            rem = decimal % 2;
            binary = binary + rem * i;
            decimal = decimal / 2;
            i = i * 10;
        }
        printf("binary=%d", binary);
        break;
    case 9:
        printf("Enter binary number : ");
        scanf("%d", &base);

        decimal = 0;
        j = 0;
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(2, j);
            base = base / 10;
            j = j + 1;
        }

        char hexa[20];
        int l = 0;

        while (decimal != 0)
        {
            rem = decimal % 16;

            if (rem < 10)
                hexa[l] = rem + '0';
            else
                hexa[l] = 'A' + (rem - 10);

            decimal = decimal / 16;
            l++;
        }

        printf("Hexadecimal = ");
        for (int x = l - 1; x >= 0; x--)
            printf("%c", hexa[x]);

        break;

        break;
    case 10:
        printf("Enter hexadecimal number : ");
        scanf("%s", hexadecimal);
        while (hexadecimal[j] != 0)
        {
            if (hexadecimal[j] >= '0' && hexadecimal[j] <= '9')
            {
                value = hexadecimal[j] - '0';
            }
            else if (hexadecimal[j] >= 'A' && hexadecimal[j] <= 'Z')
            {
                value = hexadecimal[j] - 'A' + 10;
            }
            else if (hexadecimal[j] >= 'a' && hexadecimal[j] <= 'z')
            {
                value = hexadecimal[j] - 'a' + 10;
            }
            else
            {
                printf("Invalid hexadecimal digit..%c", hexadecimal[j]);
                return;
            }
            decimal = decimal * 16 + value;
            j++;
        }
        while (decimal != 0)
        {
            rem = decimal % 2;
            binary = binary + rem * i;
            decimal = decimal / 2;
            i = i * 10;
        }
        printf("binary=%d", binary);
        break;

    case 11:
        printf("Enter hexadecimal number : ");
        scanf("%s", hexadecimal);
        while (hexadecimal[j] != 0)
        {
            if (hexadecimal[j] >= '0' && hexadecimal[j] <= '9')
            {
                value = hexadecimal[j] - '0';
            }
            else if (hexadecimal[j] >= 'A' && hexadecimal[j] <= 'Z')
            {
                value = hexadecimal[j] - 'A' + 10;
            }
            else if (hexadecimal[j] >= 'a' && hexadecimal[j] <= 'z')
            {
                value = hexadecimal[j] - 'a' + 10;
            }
            else
            {
                printf("Invalid hexadecimal digit..%c", hexadecimal[j]);
                return;
            }
            decimal = decimal * 16 + value;
            j++;
        }
        while (decimal != 0)
        {
            rem = decimal % 8;
            octal = octal + rem * i;
            decimal = decimal / 8;
            i = i * 10;
        }
        printf("octal=%d", octal);
        break;

    case 12:
        printf("Enter octal number : ");
        scanf("%d", &base);
        while (base != 0)
        {
            rem = base % 10;
            decimal = decimal + rem * pow(8, j);
            base = base / 10;
            j = j + 1;
        }
        int m = 0;
        char hexad[10];
        while (decimal != 0)
        {
            rem = decimal % 16;
            if (rem < 10)
            {
                hexad[m] = rem + '0';
            }

            if (rem >= 10)
            {
                switch (rem)
                {
                case 10:
                    hexad[m] = 'A';
                    break;
                case 11:
                    hexad[m] = 'B';
                    break;
                case 12:
                    hexad[m] = 'C';
                    break;
                case 13:
                    hexad[m] = 'D';
                    break;
                case 14:
                    hexad[m] = 'E';
                    break;
                case 15:
                    hexad[m] = 'F';
                    break;
                default:
                    break;
                }
            }
            decimal = decimal / 16;
            m = m + 1;
        }
        printf("Hexadecimal=");
        for (int j = m - 1; j >= 0; j--)
        {
            printf("%c", hexad[j]);
        }
    }
}
