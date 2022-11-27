#include <stdlib.h>
#include <stdio.h>

int main(){

    int a,b;
    float wynik;
    int dzialanie = 4;

    printf("Wybierz liczbe: \n");
    scanf("%d", &a);

    printf("Wybierz druga liczbe: \n");
    scanf("%d", &b);

    printf("Wybierz dzialanie: +,-,/,* \n");
    scanf("%d", &dzialanie);



    switch(dzialanie){
        case 1:
        wynik = a + b;
        printf("Wynik dodawania to: %2f\n", wynik);
            break;

        case 2: 
        wynik = a-b;
        printf("Wynik odejmowania to: %2f\n", wynik);
            break;

        case 3: 
        wynik = a/b;
        printf("Wynik dzielenia to: %2f\n", wynik);
            break;

        case 4: 
        wynik = a*b;
        printf("Wynik mnozenia to: %2f\n", wynik);
            break;
    }

    return 0;
}