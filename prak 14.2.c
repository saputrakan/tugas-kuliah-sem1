#include <stdio.h>
#include <stdlib.h>
long int faktorial (int x) ;

int main()
{
    int n ;
    long int c ;
    printf("Masukkan n : ") ;
    scanf("%d",&n) ;

    c = faktorial(n) ;
    printf("Hasil Faktorialnya %ld", c) ;
    return 0;
}

long int faktorial (int x){
    int i ;
    long int total = 1 ;
    for(i = x; i > 0; i--)
        total = total * i ;
    return total ;
}
