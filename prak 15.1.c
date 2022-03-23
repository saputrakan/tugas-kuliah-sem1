#include <stdio.h>
#include <stdlib.h>
int besar (int x, int y) ;
int main()
{
    int num1, num2, c ;
    printf("Masukkan Angka ke-1 : ") ;
    scanf("%d", &num1) ;
    printf("Masukkan Angka ke-2 : ") ;
    scanf("%d", &num2) ;
    c = besar(num1, num2) ;
    printf("Bilangan terbesar adalah : %d", c) ;
    return 0;
}
int besar (int x, int y) {
    int max;
    if(x > y)
        max = x;
    else
        max = y ;
    return max ;
}
