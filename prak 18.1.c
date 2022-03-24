#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angka [ 5 ] = {6, 4, 3, 7, 0} ;
    int i ;
    for(i = 1; i<=5; i++){
        printf("Isi Array Ke-%d adalah : %d\n",i - 1 , angka[ i - 1 ]) ;
    }
    return 0;
}
