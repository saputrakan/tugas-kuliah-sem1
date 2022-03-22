#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Masukkan angka pertama : ");
    scanf("%d", &num1);
    printf("Masukkan angka kedua : ");
    scanf("%d", &num2);

   if (num1 % num2 == 0)
        printf("%d adalah kelipatan persekutuan %d", num1, num2);
   else
        printf("%d adalah bukan kelipatan persekutuan %d", num1, num2);

    return 0;
}
