#include <stdio.h>
#include <stdlib.h>
int main() {
   int a;
   int suma = 0;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        suma += i*i;
    }

    printf("%d\n", suma);

   return 0;
}