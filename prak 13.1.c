#include <stdio.h>
#include <stdlib.h>
void info () ;
int main()
{
    int i, batas;
    printf("Masukkan berapa kali : ") ;
    scanf("%d", &batas) ;
    for(i = 1; i <= batas; i++)
        info() ;
    return 0;
}
void info (){
puts("======================") ;
puts("Silahkan Pilih Menunya : ") ;
puts("======================") ;

}

