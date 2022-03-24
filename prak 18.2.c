#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka [15] = {0, 1} ;
    int i, batas ;
    printf("Masukkan batas (Maksimal 15) : ") ;
    scanf("%d", &batas) ;
    for(i = 1; i <= batas; i++){
        if(i == 1)
            angka[0] = 0 ;
        if(i == 2)
            angka[1] = 1 ;
        if(i == 3)
            angka[2] = 1 ;
        angka[i] = angka[i -2] + angka[i -1] ;
        printf("%d ", angka[i - 1] ) ;
    }
    return 0;
}
