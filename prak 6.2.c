#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*Buatlah program yang menampilkan
status diterima tidaknya seorang pelamar dan penempatan yang diterima.*/

     int akademik, ketrampilan, psikologi, rata;

    printf("Masukkan nilai akademik : ") ;
    scanf("%d", &akademik) ;
    printf("Masukkan nilai ketrampilan : ") ;
    scanf("%d", &ketrampilan) ;
    printf("Masukkan nilai psikologi : ") ;
    scanf("%d", &psikologi) ;

    rata = (akademik + ketrampilan + psikologi) / 3;

    if (rata >= 75)
        if(akademik > ketrampilan || akademik > psikologi)
            if(ketrampilan > akademik && ketrampilan > psikologi)
            printf("Diterima dan ditempatkan di produksi ");
            else
                printf("Diterima dan ditempatkan di administrasi");
        else
            printf("Diterima dan ditempatkan di pemasaran");
    else
        printf("Mohon maaf anda belum diterima");

    return 0;
}
