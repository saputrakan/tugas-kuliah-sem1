#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, jum = 0, min = angka, max = 0, i = 0, rata ;
    char answ, t ;
    while(answ != 't'){
        printf(" Masukkan Angka : ") ;
        scanf("%d", &angka) ;
        i++ ;
        fflush(stdin) ;
        if ( angka>=max )
            max = angka ;
        if ( angka<=min )
            min = angka ;
        printf(" Lanjut ? ( y / t ) : ") ;
        scanf("%c", &answ) ;
        fflush(stdin) ;
        jum = jum + angka ;
    }
    rata = jum / i ;
    printf(" Jumlahnya : %d\n", jum) ;
    printf(" Rata-ratanya : %d\n", rata) ;
    printf(" Max : %d\n ", max ) ;
    printf(" Min : %d", min ) ;
    return 0;
}
