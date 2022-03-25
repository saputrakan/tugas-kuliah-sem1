#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char kata1 [20] ;
    char kata2 [20] ;
    int a ;
    printf("Masukkan Kata K-1 : ") ;
    fgets(kata1, sizeof kata1, stdin) ;
    printf("Masukkan Kata Ke-2 : ") ;
    fgets(kata2, sizeof kata2, stdin) ;
    printf("strcmp : %d\n", strcmp(kata1, kata2)) ;
    printf("strcmpi : %d", strcmpi(kata1, kata2)) ;
    return 0;
}
