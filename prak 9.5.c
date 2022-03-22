#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, angka, k = 0;
    printf("Masukkan angka: ");
    scanf("%d", &angka);
    for (i = 1; i <= angka; i++ ){
       if ( angka % i == 0 )
            k++;
    }
    if (k==2)
        printf("Bilangan prima");
    else
        printf ("Bukan bilangan prima");
    return 0;
}
