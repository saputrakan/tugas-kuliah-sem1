#include <stdio.h>
#include <stdlib.h>
int pjgstr(char[]) ;
void balikstr(char[], int) ;

int main()
{
    int a ;
    char input [15] ;
    char balik [15] ;
    printf("Masukkan Kata : ") ;
    fgets(input, sizeof input, stdin) ;
    a = pjgstr(input) ;
    balikstr(input, a) ;
    return 0;
}

int pjgstr(char x[])
{
    int i, jumlah = 0 ;
    for(i = 0; x[i] != '\0'; i++){
            if(x[i] != ' ')
                jumlah++ ;
    }
    printf("Jumlah karakter terdapat : %d\n", jumlah - 1) ;
    return jumlah ;
}

void balikstr(char x[], int y)
{
    int i ;
    printf("Di balik menjadi");
    for(i = y; i >= 0; i--)
        printf("%c", x[i]);

}
