#include <stdio.h>
#include <stdlib.h>
struct data{
    char ukuran ;
    int jumlah ;
};
void input(struct data[]) ;
void nota(struct data[]) ;
int jum ;

int main()
{
    struct data baju[1000] ;
    input(baju) ;
    nota(baju) ;
    return 0;
}
void input(struct data in[1000])
{
    printf("Berapa jenis ukuran yang ingin anda beli?(S/M/L Maksimal 3) : ") ;
    scanf("%d", &jum) ;
    fflush(stdin) ;
    printf("\n") ;
    int i ;
    if(jum <= 3 && jum > 0){
        for(i = 0; i < jum; i++){
        printf("Masukkan Data Ke-%d\n", i+1) ;
        printf("Jenis Ukuran S/M/L : ") ;
        scanf("%c", &in[i].ukuran) ;
        fflush(stdin) ;
        printf("Jumlah Barang : ") ;
        scanf("%d", &in[i].jumlah) ;
        fflush(stdin) ;
        printf("\n") ;
        }
    }
    else
        printf("Error") ;
}
void nota(struct data out[1000]){
    printf("Nota Belanja Anda\n") ;
    printf("\t\t\tToko Laris\n") ;
    printf("\n") ;
    printf("============================================================================\n") ;
    printf("No\tNama Ukuran\tHarga Satuan\tQty\tDiskon\t\tJumlah Harga\n") ;
    printf("============================================================================\n") ;
    int i, hargaTotal = 0, pajak ;
    int diskon[1000] ;
    int harga[1000] ;
    int hargaAkhir[1000] ;
    for(i = 0; i < jum; i++){
        if(out[i].ukuran == 'S'){
            harga[i] = out[i].jumlah * 36000 ;
            if(out[i].jumlah > 10){
                diskon[i] = 0.2 * harga[i] ;
                hargaAkhir[i] = harga[i] - diskon[i] ;
            }
            else
                hargaAkhir[i] = harga[i] ;
            printf("%d\tSmall\t\tRp. 36.000\t%d\tRp. %5.1d\tRp. %d\n", i +1, out[i].jumlah, diskon[i], hargaAkhir[i]) ;
        }
        else if(out[i].ukuran == 'M'){
                harga[i] = out[i].jumlah * 43000 ;
                if(out[i].jumlah > 10){
                    diskon[i] = 0.2 * harga[i] ;
                    hargaAkhir[i] = harga[i] - diskon[i] ;
                }
                else
                    hargaAkhir[i] = harga[i] ;
                printf("%d\tMedium\t\tRp. 43.000\t%d\tRp. %5.1d\tRp. %d\n", i +1, out[i].jumlah, diskon[i], hargaAkhir[i]) ;
            }
        else if(out[i].ukuran == 'L'){
            harga[i] = out[i].jumlah * 62000 ;
            if(out[i].jumlah > 10){
                diskon[i] = 0.2 * harga[i] ;
                hargaAkhir[i] = harga[i] - diskon[i] ;
            }
            else
                hargaAkhir[i] = harga[i] ;
            printf("%d\tLarge\t\tRp. 62.000\t%d\tRp. %5.1d\tRp. %d\n", i +1, out[i].jumlah, diskon[i], hargaAkhir[i]) ;
        }
    }
    for(i =0; i < jum; i++)
        hargaTotal = hargaTotal + hargaAkhir[i] ;
    pajak = 0.1 * hargaTotal ;
    printf("============================================================================\n") ;
    printf("\t\t\t\t\t\tJumlah Harga \tRp. %d\n", hargaTotal) ;
    printf("\t\t\t\t\t\tPajak 10% \tRp. %d\n", pajak) ;
    printf("\t\t\t\t\t\tTotal \t\tRp.%d\n", hargaTotal + pajak) ;

}
