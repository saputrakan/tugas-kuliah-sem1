#include <stdio.h>
#include <stdlib.h>

int main()
{
    int batas, i ;
    printf("Masukkan Batas : ") ;
    scanf("%d", &batas) ;
    for(i = 1; i <= batas; i++){
    if(i % 3 == 0) continue ;
        if(i % 2 != 0)
        printf("%d ", i) ;
    }
    return 0;
}
