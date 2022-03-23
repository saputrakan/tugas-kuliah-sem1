#include <stdio.h>
#include <stdlib.h>
int ubah1 (int x) ;
int ubah2 (int y) ;
int main()
{
    int num1, num2, a, b ;
    printf("Masukkan angka ke-1 : ") ;
    scanf("%d", &num1) ;
    printf("Masukkan angka ke-2 : ") ;
    scanf("%d", &num2) ;
    a = ubah1(num1) ;
    b = ubah2(num2) ;
    printf("%d, %d", a, b) ;
    return 0;
}
int ubah1 (int x){
    int a ;
    a = x + 2 ;
    return a ;

}
int ubah2 (int y){
    int b ;
    b = y + 2 ;
    return b ;
}

