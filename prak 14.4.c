#include <stdio.h>
#include <stdlib.h>
float radian(float x) ;
const float phi = 3.14159 ;

int main()
{
    float der, c ;
    printf("Masukkan nilai derajat : ") ;
    scanf("%f", &der ) ;
    c = radian(der) ;
    printf("%.3f derajat = %.3f radian",der, c) ;
    return 0;
}
float radian(float x) {
    float rad ;
    rad = x / 180 * phi ;
    return rad ;
}
