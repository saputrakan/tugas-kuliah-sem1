#include <stdio.h>
#include <stdlib.h>
void pjgstr(char[]) ;
int main()
{
    char input [15] ;
    printf("Masukkan Kata : ") ;
    fgets(input, 15, stdin) ;
    pjgstr(input) ;
    return 0;
}

void pjgstr(char x[])
{
    int i, jumlah = 0 ;
    for(i = 0; x[i] != '\0'; i++){
            if(x[i] != ' ')
                jumlah++ ;
    }
    jumlah = jumlah - 1;
    printf("Jumlah karakter terdapat : %d", jumlah) ;
}
