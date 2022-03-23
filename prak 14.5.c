#include <stdio.h>
#include <stdlib.h>
float konversi(float suhu ,char asal, char tuj) ;

int main()
{
    float su, c ;
    char as, tu ;
    printf("Masukkan Suhu : ") ;
    scanf("%f", &su) ;
    fflush(stdin) ;
    printf("Masukkan Asal (C / R / F) : ") ;
    scanf("%c", &as) ;
    fflush(stdin) ;
    printf("Masukkan Tujuan (C / R / F) : ") ;
    scanf("%c", &tu) ;
    fflush(stdin) ;
    c = konversi(su, as, tu) ;
    printf("Konversi dari %.3f %c adalah %.3f %c", su, as, c, tu) ;
    return 0;
}
float konversi (float suhu ,char asal, char tuj){
    float a ;
    switch(tuj){
    case 'R' : {
        if(asal =='C')
            a = 4.0 / 5.0 * suhu ;
        else if (asal == 'F')
            a = ( suhu - 32.0 ) * 4.0 / 9.0  ;
        else if (asal == 'R')
            a = suhu ;
        break ;
        }
    case 'C' : {
        if(asal =='R')
            a = 5.0 / 4.0 * suhu ;
        else if (asal == 'F')
            a = (suhu - 32.0) * 5.0 / 9.0 ;
        else if (asal == 'C')
            a = suhu ;
        break ;
        }
    case 'F' : {
        if(asal =='C')
            a = suhu * 9.0 / 5.0 + 32.0 ;
        else if (asal == 'R')
            a = suhu * 9.0 / 4.0 + 32.0 ;
        else if (asal == 'F')
            a = suhu ;
        break ;
        }
    }
    return a ;
}
