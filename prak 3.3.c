#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*Diketahui variabel-variabel sebagai berikut int a = 12, b = 2, c = 3, d = 4 Buat program untuk mencetak hasil (3)*/
    int a = 12, b = 2, c = 3, d = 4;

    printf("%d %% %d = %d\n", a, b, a % b) ;
    printf("%d - %d = %d\n", a, c, a - c );
    printf("%d + %d = %d\n",a, b, a + b) ;
    printf("%d / %d = %d\n",a, d, a / d );
    printf("%d / %d * %d + %d %% %d = %d\n", a, d, d, a, d,  a / d * d + a % d);
    printf("%d %% %d / %d * %d - %d = %d\n",a, d, d, a, c, a % d / d * a - c);

    return 0;
}
