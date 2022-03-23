#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, batas ;
    char answr ;
    while(answr != 't'){
    printf("Masukkan batas : ") ;
    scanf("%d", &batas) ;
    fflush(stdin) ;
        for(i = 1; i <= batas; i++){
            for(j = 1; j <=i; j++){
                printf("%d", i) ;
            }
            printf("\n") ;
        }
        printf("Lanjut y / t : ") ;
        scanf("%c", &answr) ;
        fflush(stdin) ;
    }
    int i, j, batas ;
    char answr ;
    while(answr != 't'){
        printf("Masukkan batas : ") ;
        scanf("%d", &batas) ;
        fflush(stdin) ;
        for(i = 1; i <= batas; i++){
            for( j = 1; j <= batas; j++){
            printf("%d ", j) ;
            }
            printf("\n") ;
        }
        printf("Lanjut y / t : ") ;
        scanf("%c", &answr) ;
        fflush(stdin) ;
    }
    int angka, batas, max = 0, min = angka, i, rata, total = 0 ;
    char answr ;
    while(answr != 't'){
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
        printf("\n") ;
        printf("Lanjut y / t : ") ;
        scanf("%c", &answr) ;
        fflush(stdin) ;
    }
        int batas, i ;
        char answr ;
        while(answr != 't'){
        printf("Masukkan Batas : ") ;
        scanf("%d", &batas) ;
        fflush(stdin) ;
        for(i = 1; i <= batas; i++){
        if(i % 7 == 0) continue ;
            if(i % 11 == 0) continue ;
                if(i % 2 != 0)
                printf("%d ", i) ;
        }
        printf("Lanjut y / t : ") ;
        scanf("%c", &answr) ;
        fflush(stdin) ;
    }
    return 0;
}
