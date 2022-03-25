#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*static int tgl_lahir[] = {16, 4, 1974};
    int *ptgl;
    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    printf("Nilai dari tgl_lahir[0] = %d\n", tgl_lahir[0]);
    int i ;
    for(i = 0; i < 3; i++){
        printf("%p\n", (ptgl+i)) ;
    }
    //printf("%p\n", &ptgl) ;*/

    /*static int tgl_lahir[] = {16, 4, 1974};
    int *ptgl, i;
    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    for (i=0; i<3; i++)
    printf("Nilai dari tgl_lahir[i] = %d\n", *(ptgl+i));
    for(i = 0; i < 3; i++){
        printf("%p\n", (ptgl+i)) ;
    }
    printf("%p\n", &ptgl) ;*/

    /*static int tgl_lahir[] = {16, 4, 1974};
    int i;
    int *ptgl;
    ptgl = tgl_lahir;
    printf("Nilai yang ditunjuk oleh ptgl = %d\n", *ptgl);
    for (i=0; i<3; i++)
    printf("Nilai dari tgl_lahir[i] = %d\n", *ptgl++);
     for(i = 0; i < 3; i++){
        printf("%p\n", (ptgl+i)) ;
    }
    printf("%p\n", &ptgl) ;*/

    //7777777777777

    /*char *text_pointer = "Good morning!";
    for( ; *text_pointer != '\0'; ++text_pointer)
    printf("%c", *text_pointer);
    int i;
    for( i = 0; i < 12; i++ )
        printf("%p\n", text_pointer[i]) ;*/


    int array1[10], array2[10];
    int *ip1, *ip2 = array2;
    int *akhir = &array1[10];
    for(ip1 = &array1[0]; ip1 < akhir; ip1++)
        *ip2++ = *ip1;
    return 0;
}
