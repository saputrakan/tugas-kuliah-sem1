#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*static char *days[] = {"Sun", "Mon", "Tues", "Wed","Thu",
    "Fri", "Sat"};
    int i;
    for( i = 0; i < 6; ++i ){
        printf( "%s\n", days[i]);
        printf("%p\n", days[i]) ;
    }*/

    /*int a, *b, **c;
    a = 155;
    b = &a;
    c = &b;
    printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
    printf("b = %p = alamat a di memori\n", b);
    printf("c = %p = alamat b di memori\n", c);
    printf("alamat c di memori = %p\n", &c);*/

    /*int var_x = 273;
    int *ptr1;
    int **ptr2;
    ptr1 = &var_x;
    ptr2 = &ptr1;
    printf("Nilai var_x = *ptr1 = %d\n", *ptr1);
    printf("Nilai var_x = **ptr2 = %d\n\n", **ptr2);
    printf("ptr1 = &var_x = %p\n", ptr1);
    printf("ptr2 = &ptr1 = %p\n", ptr2);
    printf(" &ptr2 = %p\n", &ptr2);*/

    /*int a, *b, **c;
    a = 1975;
    b = &a;
    c = &b;
    printf("Nilai a = %d atau %d atau %d\n", a, *b, **c);
    printf("b = %p = alamat a di memori\n", b);
    printf("c = %p = alamat b di memori\n", c);
    printf("alamat c di memori = %p\n", &c);*/

    int *i;
    int j=10, k, m[]={2, 5};
    int **l;
    i = m;
    i++;
    *i = j;
    j = *i;
    i = &j;
    k = *(&j);
    l = &i;
    printf("%p", &i) ;

    return 0;
}
