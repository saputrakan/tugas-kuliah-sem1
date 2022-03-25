#include <stdio.h>
#include <stdlib.h>
int cari(int x[], int y);

int main()
{
    int a,input, bilangan[10]={1,2,3,4,5,6,7,8,9,10};
    int i ;

    printf("Masukkan angka: ");
    scanf("%d", &input);
    a = cari(bilangan,input);
    if(a == 1)
        printf("Bilangan %d berada di dalam array", input);
    else
        printf("Bilangan %d tidak berada di dalam array", input);
    return 0;
}
int cari(int *pbilangan, int x)
{
    int i, hasil = 0;
    for(i = 0; i < 10; i++){
        if(*pbilangan == x)
        {
            hasil = 1;
            break;
        }
        *pbilangan++;
    }
    for(i = 0; i < 10; i++){
        printf("%p\n", *pbilangan++) ;
    }
    return hasil;
}


