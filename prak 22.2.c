#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bandingstr1(char[], char []) ;

int main()
{
    char kata1 [20] ;
    char kata2 [20] ;
    int a ;
    printf("Masukkan Kata Ke-1 : ") ;
    fgets(kata1, sizeof kata1, stdin) ;
    printf("Masukkan Kata Ke-2 : ") ;
    fgets(kata2, sizeof kata2, stdin) ;
    a = bandingstr1(kata1, kata2) ;
    printf("%d", a ) ;
    return 0;
}
int bandingstr1(char x[], char y[])
{
    int i, b = 0 ;
    for(i = 0; x[i] != '\0' ;i++){
       if (x[i] < y[i])
            b = -1 ;
       else if (x[i] > y[i])
            b = 1 ;
       else
            b = 0 ;
        if(x[i] > y[i] || x[i] < y[i])
            break ;
    }
    return b ;
}
