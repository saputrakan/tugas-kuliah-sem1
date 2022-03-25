#include <stdio.h>
#include <stdlib.h>
struct pesanan {
    char kode ;
    int jumlah ;
};

int main()
{
    struct pesanan data [50] ;
    char jawab ;
    int i = 0, jum = 0, pajak ;
    int harga[50] ;
    int hargaTotal = 0 ;
    printf("DAFTAR HARGA\n") ;
    printf("Kode\tJenis\tHarga\n") ;
    printf("D\tDada\tRp. 5000\n") ;
    printf("P\tPaha\tRp. 4000\n") ;
    printf("S\tSayap\tRp. 3000\n") ;
    printf("\n") ;
    fflush(stdin) ;
    do{
        printf("Pesanan ke-%d\n", i+1) ;
        printf("Masukkan Kode : ") ;
        scanf("%c", &data[i].kode) ;
        fflush(stdin) ;
        printf("Masukkan Jumlah : ") ;
        scanf("%d", &data[i].jumlah) ;
        fflush(stdin) ;
        printf("Pesan Lagi? (y / t) : ") ;
        scanf("%c", &jawab) ;
        fflush(stdin) ;
        i++ ;
        jum++;
    }while(jawab == 'y') ;
    printf("\n") ;
    printf("Nota Belanja Anda :\n") ;
    printf("\n") ;
    printf("\t\tGEROBAK FRIED CHICKEN\n") ;
    printf("\n") ;
    printf("============================================================\n") ;
    printf("No\tJenis Potong\tHarga Satuan\tQty\tJumlah Harga\n") ;
    printf("============================================================\n") ;
    for(i = 0; i <= jum; i++){
        if(data[i].kode == 'D'){
            harga[i] = data[i].jumlah * 5000 ;
            printf("%d\tDada\t\tRp. 5000\t%d\tRp. %d\n", i+1, data[i].jumlah, harga[i] ) ;
        }
        else if(data[i].kode == 'P'){
            harga[i] = data[i].jumlah * 4000 ;
            printf("%d\tPaha\t\tRp. 4000\t%d\tRp. %d\n", i+1, data[i].jumlah, harga[i]) ;
        }
        else if(data[i].kode == 'S'){
            harga[i] = data[i].jumlah * 3000 ;
            printf("%d\tSayap\t\tRp. 3000\t%d\tRp. %d\n", i+1, data[i].jumlah, harga[i]) ;
        }
    } ;
    printf("============================================================\n") ;
    for(i = 0; i < jum; i++){
        hargaTotal = hargaTotal + harga[i] ;
    }
    printf("\t\t\tJumlah Bayar\t\tRp. %d\n", hargaTotal) ;
    pajak = hargaTotal * 0.1 ;
    printf("\t\t\tPajak 10%%\t\tRp. %d\n", pajak ) ;
    printf("\t\t\tHarga Setelah Pajak\tRp. %d\n", hargaTotal + pajak) ;
    printf("\n") ;
    printf("\t\tTERIMA KASIH ATAS KUNJUNGAN ANDA") ;
    return 0;
}
