#include <stdio.h>
#include <stdlib.h>
int validasitgl(int tgl) ;
int validasibln(int bln) ;
int validasithn(int thn) ;
int main()
{
    int tanggal, bulan, tahun,a, b, c ;

    printf("Masukkan Tanggal : ") ;
    scanf("%d", &tanggal) ;
    fflush(stdin) ;
    printf("Masukkan Bulan : ") ;
    scanf("%d", &bulan) ;
    fflush(stdin) ;
    printf("Masukkan Tahun : ") ;
    scanf("%d", &tahun) ;
    fflush(stdin) ;

    a = validasitgl(tanggal) ;
    b = validasibln(bulan) ;
    c = validasithn(tahun) ;

    if(a == 0)
        if(b == 0)
            if(c == 0)
                printf("Tidak Valid") ;
            else
                printf("Valid") ;
        else
            printf("Valid") ;
    else
        printf("Valid") ;

}
int validasitgl(int tgl){
    if(tgl >= 1 && tgl <= 28 )
        return 1;
    else if (tgl >= 29 && tgl <= 31)
        return 0 ;
}
int validasibln(int bln){
    if(bln != 2)
        return 1 ;
    else
        return 0 ;
}
int validasithn(int thn) {
    if(thn % 4 != 0)
        return 0 ;
    else
        return 1 ;
}


