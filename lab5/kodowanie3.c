#include <string.h>
#include <stdio.h> 

int sprawdz(char a[]){
    for(int i = 0; i < strlen(a); i++){
       printf("%c \n", a[i]);
       if(a[i] == a[strlen(a)-1-i]){
        printf("ok");
       }; 
    };
}

int main(){
    char c[40];

    printf("Podaj jakies slowo: \n");
    scanf("%s", c);

    printf("%c", sprawdz(c));
}


