#include <stdio.h>
#include <stdlib.h>
int f_to_i (int x) ;
float i_to_cm (int x) ;
float c_to_m (float x) ;

int main()
{
    int a, panjang ;
    float b, c ;
    printf("Masukkan ukuran dalam feet : ") ;
    scanf("%d", &panjang) ;
    a = f_to_i (panjang) ;
    b = i_to_cm(a) ;
    c = c_to_m (b) ;
    printf("%.4f Meter", c) ;
    return 0;
}

int f_to_i (int x){
    int i ;
    i = x * 12 ;
    return i ;
}

float i_to_cm (int x){
    float c ;
    c = x * 2.54 ;
    return c ;
}

float c_to_m (float x){
    float m ;
    m = x /100 ;
    return m ;
}

