#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int suma(int n1,int n2)
{
    int s;
    s=n1+n2;
    return s;
}

int producto(int n1,int n2)
{
     int p;
     p=n1*n2;
     return p;
}
main()
{
      int opc,n1,n2,s,p;
      printf("Que deseas hacer\n");
      printf("1. Suma de dos numeros\n2.Producto de dos numeros\n");
      scanf("%d",&opc);
      if (opc==1)
      { printf("Dame el primer numero entero:");scanf("%d",&n1);
        printf("Dame el segundo numero entero:");scanf("%d",&n2);
        s=suma(n1,n2);
        printf("La suma es:%d ",s);
        
      }
      else{
        printf("Dame el primer numero entero:");scanf("%d",&n1);
        printf("Dame el segundo numero entero:");scanf("%d",&n2);
        p=producto(n1,n2);
        printf("La multiplicacion es: %d",p);
      }
      system("pause");
      return 0;
}  
      
        
     
