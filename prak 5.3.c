#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total, diskon;

    printf("Masukkan total belanjaan anda : ");
    scanf("%d", &total);
    diskon = 0.05 * total;

    if (total >=100000)
        printf("Total belanjaan anda : %d", total - diskon);
    else
        printf("Total Belanjaan anda : %d", total);

    return 0;
}
