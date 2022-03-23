#include <stdio.h>
#include <stdlib.h>
int prima (int x) ;

int main()
{
    int angka, c ;
    printf("Masukkan Angka : ") ;
    scanf("%d", &angka) ;
    c = prima(angka) ;
    if(c == 1)
        printf("%d adalah bilangan PRIMA", angka) ;
    else
        printf("%d adalah BUKAN bilangan prima", angka) ;
    return 0;
}
int prima (int x){
    int i, k = 0 ;
    for(i = 1; i <= x; i++){
        if(x % i == 0)
            k++ ;
    }
    if (k==2)
        return 1 ;
        else if (x == 1)
            return 0;
    else
        return 0 ;
}
