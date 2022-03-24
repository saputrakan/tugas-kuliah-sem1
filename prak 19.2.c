#include <stdio.h>
#include <stdlib.h>
void rata(float[4][3]);

int main()
{
    float nilai[4][3] = {{81,90,62},{50,83,87},{89,55,65},{77,70,92}};
    rata(nilai);
    return 0;
}
void rata(float nilai[4][3])
{
    int i, j ;
    float rata, total;
    printf("No \t Rata-Rata\n") ;
    for(i=0; i < 4; i++)
    {
        total =0;
        for(j = 0; j < 3; j++)
            total = total + nilai[i][j];
        rata = total/3;
        printf("%d \t %.2f\n", i+1, rata);
    }
}

