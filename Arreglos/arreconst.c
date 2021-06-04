#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 main()
{
 int i,a[20],oper, b[20];
 //clrscr();
 printf("Dame el numero por el cual multiplicar ");
 scanf("%i",&oper);
 for (i=0;i<5;i++)
 {
    printf("\nElemento %i:",i+1);
    scanf("%i",&a[i]);
    b[i]=a[i]*oper;
 }
printf("El resultado de multiplicar por %i\n",oper);

  for (i=0;i<5;i++)
	 printf("Elemento %i  %i\n",i+1,b[i]);
  //getch();
  system("pause");
 return 0;
}
