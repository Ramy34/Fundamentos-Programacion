#include <stdio.h>
#include <stdlib.h>
int main (){
    int a[5], b[5], c[5], i;
    printf("Programa que suma 2 arreglos\n");
    printf("Arreglo 1\n");
    for (i = 0; i < 5; i++){
        printf("\nDame el valor del elemento %i ", i + 1);
        scanf("%i", &a[i]);
    }
    printf("\nArreglo 2\n");
    for (i = 0; i < 5; i++){
        printf("\nDame el valor del elemento %i ",i+1);
        scanf("%i", &b[i]);
    }
    for (i = 0; i < 5; i++){
        c[i] = a[i] + b[i];
        printf("Elemento %i  %i\n", i + 1, c[i]);
    }
    printf("\n");
}
