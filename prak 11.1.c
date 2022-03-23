#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp ;
    printf("Masukkan : ") ;
    scanf("%c", &inp) ;
    while(inp != '\n'){
        if(inp == '\n') break ;
        inp = getchar() ;
    }
    return 0;
}
