#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char input [20] ;
    char str [20] ;
    printf("Masukkan Kata : ") ;
    fgets(input, sizeof input, stdin) ;
    printf("Jumlah karakter : %d\n", strlen(input) - 1) ;
    strcpy(str, input) ;
    printf("String pertama adalah : %s\n", input) ;
    printf("String kedua adalah : %s\n", str) ;
    printf("Dibalik Menjadi : %s\n", strrev(input)) ;
    return 0;
}
