#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai[10]={86,75,98,66,56,76,80,95,70,60};
    int index, *ip;

    printf("Mencetak menggunakan array\n");
    printf("Daftar nilai siswa\n\n");
    for(index=0; index<10; index++)
        printf("%3d",nilai[index]);
    puts("\n");
    printf("Mencetak menggunakan pointer dan index\n");
    printf("Daftar nilai siswa\n\n");
    for(index=0; index<10; index++)
        printf("%3d",*(nilai+index));
    puts("\n");
    printf("Mencetak menggunakan pointer\n");
    printf("Daftar nilai siswa\n\n");
    ip=nilai;
    for(index=0; index<10; index++)
        printf("%3d",*ip++);
    printf("\n") ;
    for(index=0; index<10; index++)
        printf("%p\n", nilai[index]);
    return 0;
}
