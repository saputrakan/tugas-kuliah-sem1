#include <stdio.h>
#include <stdlib.h>
float permutasi (int x, int y) ;
float kombinasi (int x, int y) ;
int main()
{
    int n, r ;
    float a, b ;
    printf("Masukkan nilai n : ") ;
    scanf("%d", &n) ;
    printf("Masukkan nilai r : ") ;
    scanf("%d", &r) ;
    a = permutasi(n, r) ;
    b = kombinasi(n, r) ;
    printf("Permutasinya : %.3f\n", a) ;
    printf("Kombinasinya : %.3f", b) ;
    return 0;
}
float permutasi (int x, int y){
    int i ;
    float a, total = 1.0;
    for(i = x; i > 0; i--){
        total = total * i ;
    }
    a = total / (x - y) ;
    return a ;
}

float kombinasi (int x, int y){
    int i, j ;
    float a, totalx = 1.0, totaly = 1.0 ;
    for(i = x; i > 0; i--){
        totalx = totalx * i ;
    }
    for(j = y; j > 0; j--){
        totaly = totaly * j ;
    }
    a = totalx / ( totaly * (x - y) ) ;
    return a ;
}
