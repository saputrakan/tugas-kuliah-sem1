#include <stdio.h>
#include <stdlib.h>
struct date {
    int day, month, year ;
} ;
int main()
{
    struct date today ;
    struct date tomorrow ;
    int akhirbulan[]={0,31,28,31,30,31,30,31,31,30,31,30,31} ;
    int cek ;

    printf(" Masukkan tanggal hari ini (ex : 31 1 2000) : ") ;
    scanf("%d %d %d", &today.day, &today.month, &today.year) ;

    if(today.month == 2 && today.year % 4 == 0){
        if(today.year % 100 !=0 || today.year % 400 == 0)
        akhirbulan[2] = 29;
    }
    else
        akhirbulan[2] = 28 ;
    cek = akhirbulan[today.month] ;
    if( today.day < 1 || today.day > cek || today.month < 1 || today.month > 12
        || today.year < 1){
            printf("Error");
            exit(0);
        }
    if(today.day == cek){
        tomorrow.day = 1 ;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year ;
    }
    else{
        tomorrow.day = today.day + 1 ;
        tomorrow.month = today.month ;
        tomorrow.year = today.year ;
    }

    if(today.day == 31 && today.month == 12){
        tomorrow.day = 1 ;
        tomorrow.month = 1 ;
        tomorrow.year = today.year + 1 ;
    }

    printf("%d %d %d", tomorrow.day, tomorrow.month, tomorrow.year) ;
    return 0;
}
