#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float process(float x, float y) ;
const float phi = 3.14159 ;
int main()
{
    float der,ab, c ;
    printf("Masukkan besar sudut BAC dalam derajat : ") ;
    scanf("%f", &der ) ;
    printf("Masukkan panjang sisi AB dalam meter : ") ;
    scanf("%f", &ab ) ;
    c = process(der, ab) ;
    printf("Panjang sisi BC adalah = %.3f m", c) ;
    return 0;
}
float process(float x, float y){
    float rad, a, b ;
    rad = x / 180 * phi ;
    a = tan(rad) ;
    b = a * y ;
    return b ;
}
