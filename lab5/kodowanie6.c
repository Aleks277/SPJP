#include <stdio.h>
#include <stdlib.h>

int main(){

    int r, m;

    printf("Podaj rok i miesiac: \n");
    scanf("%d %d", &r, &m);

    if((r%4 == 0 && r%100 != 0) || r%400 == 0){
        switch(m){
            case 1: case 3: case 5: case 7: case 9: case 11: printf("Ma 31 dni.");
            break;

            case 4: case 6: case 8: case 10: case 12: printf("Ma 30 dni.");
            break;

            case 2: printf("Ma 28 dni.");
            break;
        };
   
    } else {
        switch(m){
            case 1: case 3: case 5: case 7: case 9: case 11: printf("Ma 31 dni.");
            break;

            case 4: case 6: case 8: case 10: case 12: printf("Ma 30 dni.");
            break;

            case 2: printf("Ma 29 dni.");
            break;
        }
    };

    return 0; 
}