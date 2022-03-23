#include <stdio.h>
#include <stdlib.h>
int ganjil (int x) ;
int main()
{
    int angka, h ;
    printf("Masukkan Angka : ") ;
    scanf("%d", &angka) ;
    h = ganjil( angka ) ;
    if(h == 1)
        printf("%d adalah bilangan ganjil", angka) ;
    else
        printf("%d adalah bilangan genap", angka) ;
    return 0;
}
int ganjil (int x){
    if(x % 2 != 0)
        return 1 ;
    else
        return 0 ;
}
