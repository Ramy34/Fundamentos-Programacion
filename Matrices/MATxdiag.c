#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main (){
int a[5][5];
int i,j;

printf("Dame los valores de la matriz A \n");
for(i=1;i<=4;i++){
   for(j=1;j<=4;j++){
	printf("a[%d][%d] \n",i,j);
	   scanf("%i",&a[i][j]);
   }
printf("\n");
}
printf("\n\n");
for(i=1;i<=4;i++){
   for(j=1;j<=4;j++){
	if (i==j)/*toma la diagonal principal*/
	  printf("a[%d][%d]= %d ",i,j,a[i][j]);
   }
   }
printf("\n");
system("pause");

return 0;
}

   

   
