#include <stdio.h>
#include <stdlib.h>

int main(){
    int r;

    printf("Podaj rok: \n");
    scanf("%d", &r);

    if((r%4 == 0 && r%100 != 0) || r%400 == 0){
        printf("Rok jest przestepny.");
    } else {
        printf("Rok nie jest przestepny");
    };

    return 0;
} 