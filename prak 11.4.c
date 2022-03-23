#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, batas, max = 0, min = angka, i, rata, total = 0;
    printf("Masukkan berapa banyak data : ") ;
    scanf("%d", &batas) ;
    fflush(stdin) ;
    for(i = 1; i <= batas; i++){
        printf("Masukkan angka ke-%d : ", i) ;
        scanf("%d", &angka) ;
        fflush(stdin) ;
        if(angka >= max);
            max = angka ;
        if(angka <= min)
            min = angka ;
            total = total + angka ;
    }
    rata = total / batas ;
    printf("Nilai maksimalnya : %d \n", max) ;
    printf("Nilai minimalnya : %d \n", min) ;
    printf("Rata - Ratanya : %d", rata) ;
    return 0;
}
