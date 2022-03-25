#include <stdio.h>
#include <stdlib.h>
int rotasi(int *, int *, int *) ;
int main()
{
    int a,b,c, hasil;
    printf("Masukkan 3 bilangan dengan spasi (1 2 3) : ") ;
    scanf("%d %d %d", &a, &b, &c) ;
    rotasi(&a,&b,&c);
    printf("%d %d %d", a, b, c) ;
return 0;
}
int rotasi(int *x,int *y,int *z){
    int simpan;
    simpan =*x ;
    *x =*z ;
    *z = *y ;
    *y = simpan ;
}

