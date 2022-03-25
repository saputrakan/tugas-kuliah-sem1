#include <stdio.h>
#include <stdlib.h>
void copystr(char [], char y[]) ;

int main()
{
    char asal [15] ;
    char tujuan[15] ;
    printf("Masukkan Kata : ") ;
    fgets(asal, sizeof asal, stdin) ;
    copystr(asal, tujuan) ;
    printf("Asal : %s", asal) ;
    printf("Tujuan : %s", tujuan) ;
    return 0;
}

void copystr(char x[], char y[])
{
    int i ;
    for(i = 0; x[i] != '\0'; i++){
        y[i] = x[i] ;
    }
}
