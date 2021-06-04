#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main (){
int a[3][3]={{1,2,3},{4,5,6},{7,5,9}};
int i,j;
system("cls");
printf("Exhibe matriz\n");
for(i=0;i<=2;i++) {/*recorre renglones*/
	for (j=0;j<=2;j++)/*recorre columnas*/
          printf("a[%d][%d]= %d ",i,j,a[i][j]);
printf("\n ");
}
system("pause");
return 0;
}

   

   
