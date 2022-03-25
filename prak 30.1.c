#include <stdio.h>
#include <stdlib.h>
#define MAKS 1000
struct data{
    char nama[MAKS] ;
    float tugas, uts, uas ;
};
void input (struct data[]) ;
void tampil (struct data[]) ;
int jum ;

int main()
{
    struct data mhs[MAKS] ;
    input(mhs) ;
    tampil(mhs) ;
    return 0;
}

void input (struct data in[MAKS])
{
    int i ;
    printf("Berapa Jumlah Mahasiswa : ") ;
    scanf("%d", &jum) ;
    printf("\n") ;
    fflush(stdin) ;
    printf("\t\t\tMasukkan Data Mahasiswa\n") ;
    printf("\n") ;
    for(i = 0; i < jum; i++){
        printf("Mahasiswa ke-%d", i+1);
        fflush(stdin) ;
        printf("\nNama Mahasiswa : ") ;
        fgets(in[i].nama, sizeof in[i].nama, stdin) ;
        fflush(stdin) ;
        printf("Nilai Tugas : ") ;
        scanf("%f", &in[i].tugas) ;
        fflush(stdin) ;
        printf("Nilai UTS : ") ;
        scanf("%f", &in[i].uts) ;
        fflush(stdin) ;
        printf("Nilai UAS : ") ;
        scanf("%f", &in[i].uas) ;
        fflush(stdin) ;
        printf("\n") ;
    }
}

void tampil(struct data out[MAKS])
{
    int i ;
    printf("\t\t\tDAFTAR NILAI\n") ;
    printf("\t\tMATA KULIAH KONSEP PEMROGRAMAN\n") ;
    printf("-------------------------------------------------------------\n") ;
    printf("No\tNama Mahasiswa\tTugas\tUTS\tUAS\tAkhir\tGrade\n") ;
    float akhir[MAKS] ;
    char grade[MAKS] ;
    for(i = 0; i < jum; i++){
        akhir[i] = 0.2 * out[i].tugas + 0.4 * out[i].uts + 0.4 * out[i].uas ;
        if(akhir[i] >= 80.0)
            grade[i] = 'A' ;
        else if(akhir[i] >= 70.0)
            grade[i] = 'B' ;
        else if(akhir[i] >= 60.0)
            grade[i] = 'C' ;
        else if(akhir[i] >= 50.0)
              grade[i] = 'D' ;
        else if(akhir[i] < 50.0)
                grade[i] = 'E' ;
         printf("%d\t%s\t\t\t%g\t%g\t%g\t%g\t%c\n", i + 1, out[i].nama, out[i].tugas, out[i].uts, out[i].uas, akhir[i], grade[i]) ;
    }
    printf("-------------------------------------------------------------\n") ;
    printf("Total Mahasiswa : %d\n", jum) ;
}
