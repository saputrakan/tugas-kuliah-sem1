#include <stdio.h>
#include <stdlib.h>
float masukan (int x) ;
float average (int x, float y) ;

int main()
{
    int batas ;
    float a, b ;
    printf("Berapa jumlah data yang ingin dimasukkan : ") ;
    scanf("%d", &batas) ;
    fflush(stdin) ;
    a = masukan(batas) ;
    b = average(batas, a) ;
    printf("Nilai rata - ratanya adalah : %.3f", b) ;
    return 0;
}
float masukan (int x){
    int i, angka, total = 0;
    for(i = 1; i <= x; i++){
        printf("Masukkan angka ke-%d : ", i) ;
        scanf("%d", &angka) ;
        total = total + angka ;
    }
    return total ;
}
float average (int x, float y){
    float rata ;
    rata = y / x ;
    return rata ;
}
