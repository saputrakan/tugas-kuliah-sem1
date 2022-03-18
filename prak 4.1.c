#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suhuCelcius;
    float suhuFahrenheit;

    printf("Masukkan suhu dalam celcius ");
    scanf("%d", &suhuCelcius);
    suhuFahrenheit = suhuCelcius * 1.8 + 32;

    printf("%d celcius sama dengan %f fahrenheit", suhuCelcius, suhuFahrenheit );

    return 0;
}
