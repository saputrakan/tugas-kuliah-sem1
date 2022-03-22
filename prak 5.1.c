#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;
    printf("Masukkan angka : ");
    scanf("%d", &nilai);

    if (nilai>=0)
        printf("%d adalah bilangan positif", nilai);
    else
         printf("%d adalah bilangan negatif", nilai);


    return 0;
}
