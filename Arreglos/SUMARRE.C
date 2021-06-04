#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
/*suma dos arreglo c[i]=a[i]+b[i]*/
 main()
{
 int i,a[5],b[5],c[5];
 system("cls");

 for (i=0;i<5;i++)
 {
    printf("\nArreglo A[%i]:",i+1);
    scanf("%i",&a[i]);
 }
 for (i=0;i<5;i++)
 {   
    printf("\nArreglo B[%i]:",i+1);
    scanf("%i",&b[i]);
 }
 printf("La suma es:\n");
 for (i=0;i<5;i++)
 {
    c[i]=a[i]+b[i];
    printf("%i \n",c[i]);
 } 
  system("pause");
 return 0;
}
