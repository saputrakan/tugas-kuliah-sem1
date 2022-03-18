#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Melakukan konversi valuta asing, misalnya mata uang dolar US ke mata uang Rp,
dimana satu dolar sama dengan Rp 14323*/
    int dollar;

    printf("Masukkan berapa dollar : ");
    scanf("%d", &dollar);
    printf("%d dollar = %d rupiah\n", dollar, dollar * 14323);


    return 0;
}
