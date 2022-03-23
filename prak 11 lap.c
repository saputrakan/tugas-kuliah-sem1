#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k = 0, i, j, batas ;
    printf("Masukan Batas : ") ;
    scanf("%d",&batas) ;

    for( i = 2 ;; i++ ){
    int cek = 0 ;
        for( j = 2; j <= i; j++){
            if( i % j == 0 ){
                cek++ ;
            }
        }
            if(cek==1){
                printf("%d ",i);
                k++;
            }
            if(k > batas) break ;
    }
    return 0;
}
