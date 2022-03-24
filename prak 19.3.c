#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float phi = 3.14159 ;
void cariX (float []) ;
float nilaiRadian (float) ;
void sincostan (float[]) ;

int main()
{
    float x[13] ;
    cariX(x) ;
    sincostan(x) ;
    return 0;
}

void cariX (float x[])
{
    int i, nilaiX = 0 ;
    for(i = 0; nilaiX <= 360; i++){
            x[i] = nilaiX ;
            nilaiX = nilaiX + 30 ;
    }
}

float nilaiRadian(float nilaiDerajat)
{
   float rad ;
   rad = nilaiDerajat / 180.0 * phi ;
   return rad ;
}

void sincostan (float x[])
{
    int i, j;
    float hasil[13] [3] ;
    for(i = 0; i < 13; i++){
        for(j = 0; j < 3; j++){
            if (j == 0)
                hasil[i] [j] = sin(nilaiRadian(x[i])) ;
            else if (j == 1)
                hasil[i] [j] = cos(nilaiRadian(x[i])) ;
            else
                hasil[i] [j] = tan(nilaiRadian(x[i])) ;
        }
    }
    printf("Sudut \t Sin \t Cos \t Tan \n") ;
    for(i = 0; i < 13; i++){
        printf("%.0f \t", x[i]);
        for(j = 0; j < 3; j++){
            if(hasil[i] [j] > 2)
                printf("Tak Hingga");
            else
                printf("%.2f \t", hasil[i][j]);
        }
        printf("\n") ;
    }
}

