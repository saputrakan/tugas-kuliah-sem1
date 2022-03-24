#include <stdio.h>
#include <stdlib.h>
#define MAKS 25

int main()
{
    int angka [MAKS] ;
    int i, max = 0, batas ;
    printf("Masukkan berapa data yang ingin di input : ") ;
    scanf("%d", &batas) ;
    for(i = 0; i <= batas -1; i++){
        printf("Masukkan Indeks ke-%d : ",i);
        scanf("%d", &angka[i]) ;
        fflush(stdin) ;
        if(max < angka[i])
            max = angka [i] ;
    }
    printf("%d", max) ;
    return 0;
}
