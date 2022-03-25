#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, batas = 5, k = 0 ;
    for(i = 1; i <= batas; i++){
        for(j = 1; j <= i; j++ ){
            if( i % j == 0){
                k++ ;
            }
        }
    }
    if(k == 2)
        printf("%d", i) ;
    return 0;
}
