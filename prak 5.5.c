#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;

    printf("Masukkan angka pertama : ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua : ");
    scanf("%f", &num2);

    if (num2 != 0)
        printf("%f / %f = %.3f", num1, num2, num1/num2);
    else
        printf("Tidak bisa dibagi 0");

    return 0;
}
