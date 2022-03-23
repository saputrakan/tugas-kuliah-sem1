#include <stdio.h>
#include <stdlib.h>
int Cn (int x) ;
int Sn (int y) ;
int main()
{
    int batas, hh1, hh2 ;
    printf("Masukkan batas : ") ;
    scanf("%d", &batas) ;
    hh1 = Cn (batas) ;
    hh2 = Sn (batas) ;
    return 0 ;
}
int Cn (x){
    int i, h1 = 0 ;
    for(i = 0; i <= x; i++){
        h1 = h1 * 2 + 1 ;
    }
    printf("Hasil dari fungsi Cn adalah : %d\n", h1) ;
    return h1 ;
}
int Sn (y){
    int i, j, k = 0 ;
    for(i = 1; i <= y; i++){
        k= k + i - 1;
    }
    printf("Hasil dari fungsi Sn adalah : %d", k) ;
    return k;
}

