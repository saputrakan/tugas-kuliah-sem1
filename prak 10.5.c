#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp ;
    int totKar = 0, totSpa = 0 ;
    printf("Masukkan Kalimat : ") ;
    while(inp !='\n'){
        scanf("%c", &inp) ;
         if (inp != ' ')
            totKar++ ;
        else
            totSpa++ ;
    }
       printf("Total Karakter : %d\n", totKar - 1) ;
       printf("Total Spasi : %d", totSpa) ;
    return 0;
}
