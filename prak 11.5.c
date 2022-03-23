#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, batas ;
    printf("Masukkan batas : ") ;
    scanf("%d", &batas) ;
    for(i = 1; i <= batas; i++){
        for( j = 1; j <= batas; j++){
            printf("%d ", j) ;
        }
    printf("\n") ;
    }
    return 0;
}
