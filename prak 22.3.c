#include <stdio.h>
#include <stdlib.h>
int bandingstr2(char[], char []) ;

int main()
{
    char kata1 [20] ;
    char kata2 [20] ;
    int a ;
    printf("Masukkan Kata Ke-1 : ") ;
    fgets(kata1, sizeof kata1, stdin) ;
    printf("Masukkan Kata Ke-2 : ") ;
    fgets(kata2, sizeof kata2, stdin) ;
    a = bandingstr2(kata1, kata2) ;
    printf("%d", a ) ;
    return 0;
}
int bandingstr2(char x[], char y[])
{
    int i, b = 0 ;
    for(i = 0; x[i] != '\0' ;i++){
        if(x[i] >= 90)
            x[i] = x[i] - 32 ;
        if(y[i] >= 90)
            y[i] = y[i] - 32 ;
        if(x[i] < 90)
            x[i] = x[i] + 32 ;
        if(y[i] < 90)
            y[i] = y[i] + 32 ;

            if (x[i] < y[i]){
                if(x[i] != y[i] - 32)
                b = -1 ;
                break ;
            }
            else if (x[i] > y[i]){
                if(x[i] != y[i] + 32)
                    b = 1 ;
                    break ;
            }
            else
                b = 0 ;
        if(x[i] > y[i] || x[i] < y[i])
            break ;
    }
    return b ;
}
