#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Masukkan angka : ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d adalah bilangan genap", num);
    else
        printf("%d adalah bilangan ganjil", num);


    return 0;
}
