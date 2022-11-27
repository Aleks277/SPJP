#include <stdlib.h>
#include <stdio.h>



    int sprawdz(char pierw, char nast){
        if(pierw == nast)
        return printf("sa takie same: 1 \n");
        else 
        return printf("nie sa takie same: 0 \n");
    }

    int main(){
        int wynik; 
        char pierw, nast;

        printf("Podaj dwa znaki: \n");
        scanf("%c %c", &pierw, &nast);

       return sprawdz(pierw, nast);
    }
