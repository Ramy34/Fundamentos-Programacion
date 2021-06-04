#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main (){
int a[3][3];
int b[3][3];
int c[3][3];
int i,j;

printf("Dame los valores de la matriz A \n");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
	printf("a[%d][%d] \n",i,j);
        scanf("%i",&a[i][j]);
   }
printf("\n");
}
printf("\n\n");
printf("Dame los valores de la matriz B \n");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
        printf("b[%d][%d]\n",i,j);
        scanf("%i",&b[i][j]);
   }	
printf("\n");
}

printf("\n\n");
for(i=0;i<=2;i++){
   for(j=0;j<=2;j++){
        c[i][j]=a[i][j]+b[i][j];
	printf("c[%d][%d]= %d ",i,j,c[i][j]);
   }
printf("\n");
}
system("pause");
return 0;
}

   

   
