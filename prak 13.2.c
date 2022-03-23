#include <stdio.h>
#include <stdlib.h>
void triangular(int x) ;
int main()
{
    int angka ;
    printf("Masukkan Angka : ") ;
    scanf("%d", &angka) ;
    triangular (angka) ;
    return 0;
}
void triangular (int x){
    int i, jumlah = 0;
    for(i = x; i >=1; i--){
        if(i!=1)
            printf("%d + ", i) ;
        else
            printf("%d = ", i) ;
        jumlah = jumlah + i ;
    }
    printf("%d", jumlah) ;
}
