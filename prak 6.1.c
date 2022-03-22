#include <stdio.h>
#include <stdlib.h>
/*Buatlah program yang menerima masukan berupa suhu dari sebuah benda.*/
int main()
{
    int suhu;

    printf("Berapa suhu benda tersebut : ") ;
    scanf("%d", &suhu) ;

    if (suhu >= 0)
        if (suhu < 100)
            printf("Benda berbentuk cair");
        else
            printf("Benda berbentuk gas");
    else
        printf("Benda berbentuk padat");

    return 0;
}
