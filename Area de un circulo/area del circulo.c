#include <stdio.h>
#include <stdlib.h>
#define pi 3.1416
int main ()
{
    float r,a;
    printf("Dame el radio ");
    scanf("%f", &r);
    a= pi*(r*r);
    printf("El area del circulo es %.2f", a);
    return 0;
}    
