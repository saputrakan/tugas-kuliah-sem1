#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, angka, jumlah = 0;
    printf("Masukkan Angka : ") ;
    scanf("%d", &angka) ;
    for(i = angka; i >=1; i--){
        if(i!=1)
            printf("%d + ", i) ;
        else
            printf("%d = ", i) ;
        jumlah = jumlah + i ;
    }
    printf("%d", jumlah) ;
    return 0;
}
