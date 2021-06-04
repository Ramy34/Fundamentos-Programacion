#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define TAM 10
main()
{
int n[10]={10,3,4,15,7,8,25,7,8,7};
int i,j;
printf("%s%13s%17s\n","Elemento","Valor","Histograma");
for (i=0;i<=TAM-1;i++){
   printf("%7d%13d     ",i,n[i]);
	  for (j=1;j<=n[i];j++)
         printf("%c", '*');
       printf("\n");
    }
system("pause");
return 0;
   
}

