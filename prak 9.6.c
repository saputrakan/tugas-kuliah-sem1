#include <stdio.h>
#include <stdlib.h>

int main()
{
        int i;
        float jam, nilaiDalamAngka, totNi=0, totJam=0;
        char nilaiDalamHuruf ;
        for( i = 1; i <= 5; i++ ){
        printf( "Masukkan nilai %d : ", i ) ;
        scanf( "%c", &nilaiDalamHuruf ) ;
        fflush(stdin) ;
        printf( "Masukkan jumlah jam : " ) ;
        scanf( "%f", &jam ) ;
        fflush(stdin) ;
        switch(nilaiDalamHuruf){
        case 'A' :
        nilaiDalamAngka = 4 ;
        break ;
        case 'B' :
        nilaiDalamAngka = 3 ;
        break ;
        case 'C' :
        nilaiDalamAngka= 2 ;
        break ;
        case 'D' :
        nilaiDalamAngka = 1 ;
        break ;
        case 'E' :
        nilaiDalamAngka= 0 ;
        break ;
        default :
        printf("Error\n") ;
        }
        totNi = totNi + nilaiDalamAngka * jam ;
        totJam = totJam + jam ;
    }
    printf ( "IP Anda : %.3f", totNi / totJam ) ;
    return 0;
}





