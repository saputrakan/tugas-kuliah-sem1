#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka, jum = 0;
    char answ, t;
    while(answ != 't'){
        printf(" Masukkan Angka : ") ;
        scanf("%d", &angka) ;
        fflush(stdin) ;
        printf(" Lanjut ? ( y / t ) : ") ;
        scanf("%c", &answ) ;
        jum = jum + angka ;
    }
    printf("Hasilnya : %d", jum);
    return 0;
}
