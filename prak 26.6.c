#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5] = {2,4,8,1,23};
    int c = 5;
    int *ptr1 = &c;
    int *ptr2 = a;

    printf("%d", *ptr2) ;

    return 0;
}
