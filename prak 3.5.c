#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Buatlah program untuk menghitung Diskriman dari sebuah persamaan kuadrat dengan nilai a, b dan c yang diinputkan (float) (5)*/
    float a, b, c;

    printf("Masukkan nilai a : ");
    scanf("%f", &a);
    printf("Masukkan nilai b : ");
    scanf("%f", &b);
    printf("Masukkan nilai c : ");
    scanf("%f", &c);

    printf("Nilai diskriminannya : %f ", b * b - 4 * a * c );

    return 0;
}
