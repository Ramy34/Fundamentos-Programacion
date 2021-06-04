#include <stdio.h>
#include <stdlib.h>
int main (){
	int l, a, t;
    printf("Dame el largo ");
    scanf("%d", &l);
    printf("Dame el ancho ");
    scanf("%d", &a);
    t = 2 * (a + l);
    printf("El perimetro es %d",t);
}    
