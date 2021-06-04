#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
 int main ()
{
    int a[5],b[5];
    int i,f;
    for (i=0;i<5;i++)
    {
        printf("\nDame el valor del elemento %i ",i+1);
        scanf("%i", &a[i]);
    }
    printf("\nDame el valor de la constante ");
    scanf("%i", &f);
    printf("\n");
    for (i=0;i<5;i++)
    {
        b[i]=a[i]*f;
        printf("Elemento %i  %i\n", i+1, b[i]);
    }
    printf("\n");
    system("pause");
}
