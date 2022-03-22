#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Buat program untuk mengkonversikan nilai angka ke nilai huruf.*/
    int num;
    printf("Masukkan angka : ");
    scanf("%d", &num);

    if(num <= 100)
        if(num <= 80)
            if(num<=60)
                if(num<=55)
                    if(num<=40)
                    printf("Nilai huruf adalah E");
                    else
                    printf("Nilai huruf adalah D");
                else
                printf("Nilai huruf adalah C");
            else
            printf("Nilai huruf adalah B");
        else
        printf("Nilai huruf adalah A");
    else
        printf("Error");
    return 0;
}
