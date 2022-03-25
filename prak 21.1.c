#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[10] ;
    printf("Masukkan nama : ") ;
    scanf("%s", input) ;
    fflush(stdin) ;
    printf("scanf : %s\n", input) ;
    printf("Masukkan nama : ") ;
    gets(input) ;
    printf("gets : %s\n", input) ;
    printf("Masukkan nama : ") ;
    fgets(input, sizeof input, stdin);
    printf("fgets : %s\n", input) ;
    return 0;
}
