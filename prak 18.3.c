#include <stdio.h>
#include <stdlib.h>
#define MAKS 2

int main()
{
    int angka, i, j ;
    int matrixA [2] [2] ;
    int matrixB [2] [2] ;
    int matrixC [2] [2] ;
    char jawab;
    do{
            for(i = 1; i <= 2; i++){
                for(j = 1; j <= 2; j++){
                    printf("Masukkan matrix A [%d] [%d] : ",i -1, j-1) ;
                    scanf("%d", &matrixA[i-1][j-1]) ;
                    fflush(stdin) ;
                }
            }
            printf("\n") ;
            for(i = 1; i <= 2; i++){
                for(j = 1; j <= 2; j++){
                    printf("Masukkan matrix B [%d] [%d] : ",i -1, j-1) ;
                    scanf("%d", &matrixB[i-1][j-1]) ;
                    fflush(stdin) ;
            }
        }
        printf("\n") ;
        printf("Isi dari Matrix A adalah :\n") ;
        for(i = 1; i <= 2; i++){
            for(j = 1; j <= 2; j++){
                printf("%d ", matrixA[i-1] [j-1]) ;
            }
            printf("\n") ;
        }
        printf("Isi dari Matrix B adalah :\n") ;
        for(i = 1; i <= 2; i++){
            for(j = 1; j <= 2; j++){
                printf("%d ", matrixB[i-1] [j-1]) ;
            }
            printf("\n") ;
        }

        matrixC[0] [0] = matrixA[0] [0] + matrixB[0] [0] ;
        matrixC[0] [1] = matrixA[0] [1] + matrixB[0] [1] ;
        matrixC[1] [0] = matrixA[1] [0] + matrixB[1] [0] ;
        matrixC[1] [1] = matrixA[1] [1] + matrixB[1] [1] ;

        printf("Isi dari Matrix C adalah :\n") ;
        for(i = 1; i <= 2; i++){
            for(j = 1; j <= 2; j++){
                printf("%d ", matrixC[i-1] [j-1]) ;
            }
            printf("\n") ;
        }
    printf("\n") ;
    printf("Ingin lanjut? (y / t) : ") ;
    scanf("%c", &jawab) ;
    fflush(stdin) ;
    }
    while(jawab == 'y') ;
    return 0;
}
