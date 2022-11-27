#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int sprawdz(char a[40], int b){
    

    for(int i = 0; i <= b; i++){
        if(i == b){
            printf("Litera: %c ", a[i]);
        };
    };


}

int main(){
    int b;
    char c[40];

    printf("Podaj jakies slowo: \n");
    scanf("%s", c);

    printf("Podaj ktora litere chcesz wylosowac: \n");
    scanf("%d", &b);

    printf("%d", sprawdz(c, b));
}


