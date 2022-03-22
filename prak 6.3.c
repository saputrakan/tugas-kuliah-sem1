#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*buatlah program kalkulator sederhana,
untuk mendapatkan tanpilan hasil sebagai berikut*/
    float num1, num2, menu;

    printf("Masukkan angka pertama : ");
    scanf("%f", &num1);
    fflush(stdin);
    printf("Masukkan angka kedua : ");
    scanf("%f", &num2);



    printf("Pilih Menu\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Pembagian\n");
    printf("4. Perkalian\n");
    fflush(stdin);
    printf("Masukkan pilihan anda : ");
    scanf("%f", &menu);


    if(menu==1)
        printf("Hasil operasi tersebut : %.0f", num1 + num2);
   else if(menu == 2)
        printf("Hasil operasi tersebut : %.0f", num1 - num2);
    else if(menu == 3)
        printf("Hasil operasi tersebut : %.3f", num1 / num2);
    else if(menu == 4)
        printf("Hasil operasi tersebut : %.0f", num1 * num2);
    return 0;
}
