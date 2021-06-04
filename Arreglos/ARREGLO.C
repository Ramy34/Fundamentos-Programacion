#include <stdio.h>
#include <conio.h>

 main()
{
 int i,a[10],aux;

 clrscr();
 for (i=0;i<=9;i++)/*almacenar valores*/
 {
	 printf("Elemento %i:\n",i+1);
	 scanf("%i",&aux);
	 a[i]=aux;
 }

  for (i=0;i<=9;i++)/*Leer valores */
	 printf("Elemento %i  %i\n",i+1,a[i]);

 return 0;
}