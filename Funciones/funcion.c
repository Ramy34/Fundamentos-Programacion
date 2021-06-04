#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void suma();/*declaracion*/
void producto();

main()
{
      int opc;
      printf("Que deseas hacer\n");
      printf("1. Suma de dos numeros\n");
      printf("2. Producto de dos numeros\n");
      scanf("%d",&opc);
      
      if(opc==1) 
         suma();
      else 
         producto();
    system("pause");
    return 0;
}

void suma ()
{
     int n1,n2,suma;
     printf("Dame el primer numero entero");
     scanf("%d",&n1);
     printf("Dame el segundo numero entero");
     scanf("%d",&n2);
     suma=n1+n2;
     printf("La suma es %d", suma);
}  
void producto()
{
     int n1,n2,prod;
     printf("Dame el primer numero entero");
     scanf("%d",&n1);
     printf("Dame el segundo numero entero");
     scanf("%d",&n2);
     prod=n1*n2;
     printf("La multiplicacion es %d", prod);
}

     
