#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inp;
    printf("Masukkan Tombol : ");
    scanf("%c", &inp);
    while( inp != 'X'){
    inp = getchar();
    }
    return 0;
}
