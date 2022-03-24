#include <stdio.h>
#include <stdlib.h>
#define MAKS 50
int batas ;
void input(int x[MAKS]) ;
void findMax(int x[MAKS]) ;

int main()
{
    int nilai[MAKS] ;
    input(nilai) ;
    findMax(nilai) ;
    return 0;
}
void input(int x[]){
    int i ;
    printf("Berapa jumlah data (Maksimal 50) : ") ;
    scanf("%d", &batas) ;
    fflush(stdin) ;
    for(i = 0; i <= batas - 1; i++){
        printf("Masukkan index ke-%d : ", i) ;
        scanf("%d", &x[i]) ;
        fflush(stdin) ;
    }
}
void findMax(int x[]){
    int i, max = 0 ;
    for(i = 0; i <= batas -1; i++){
        if(max < x[i])
            max = x[i] ;
    }
    printf("Nilai terbesar pada array adalah : %d", max) ;
}
