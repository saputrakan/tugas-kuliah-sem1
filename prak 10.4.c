#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, j  = 0, k = 0, angka ;
    printf("Masukkan berapa angka : ") ;
    scanf("%d", &angka) ;
    fflush(stdin) ;
    while ( i <= angka ){
        j = j + 1 ;
        k = k + j ;
        i++ ;
            printf(" %d", k) ;
    }

    return 0;
}
