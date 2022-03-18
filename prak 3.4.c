#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Buatlah program untuk menghitung Diskriman dari sebuah persamaan kuadrat dengan nilai a, b dan c yang diinputkan (4)*/
    int a, b, c;

    printf("Masukkan nilai a : ");
    scanf("%d", &a);
    printf("Masukkan nilai b : ");
    scanf("%d", &b);
    printf("Masukkan nilai c : ");
    scanf("%d", &c);

    printf("Nilai diskriminannya : %d ", b * b - 4 * a * c );


    return 0;
}
