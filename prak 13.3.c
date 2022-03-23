#include <stdio.h>
#include <stdlib.h>
float kuadrat (float x) ;
int main()
{
    float angka, hasil ;
    printf("Masukkan Angka : ") ;
    scanf("%f", &angka) ;
    hasil = kuadrat ( angka ) ;
    printf("Hasil kuadrat dari %.3f adalah : %.3f", angka, hasil) ;
    return 0;
}
float kuadrat (float x){
    float b ;
    b = x * x ;
    return b ;
}
