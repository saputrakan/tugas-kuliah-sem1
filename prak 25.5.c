#include <stdio.h>
char *nama1 = "AHMAD";
char *nama2 = "RIFDA";
main()
{
    char *namax;
    puts("SEMULA : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
    namax = nama1;
    nama1 = nama2;
    nama2 = namax;
    puts("KINI : ");
    printf("nama1 --> %s\n", nama1);
    printf("nama2 --> %s\n", nama2);
    /*printf("%p\n", &namax);
    printf("%p\n", &nama1);
    printf("%p\n", &nama2);
    int i ;
    for(i = 0; i < 5; i++){
        printf("%p\n", (nama1+i)) ;
    }
    for(i = 0; i < 5; i++){
        printf("%p\n", (nama2+i)) ;
    }*/

}
