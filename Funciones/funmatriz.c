#include<stdio.h>
#include<stdlib.h>
void pidematriz(int x[20][20],int tam)
{
     int i,j;
     for(i=0;i<tam;i++)
       for(j=0;j<tam;j++)
         scanf("%d",&x[i][j]);
}
void imprimematriz(int x[20][20],int tam)
{int i,j;
     for(i=0;i<tam;i++)
     {
       for(j=0;j<tam;j++)
         printf("%d ",x[i][j]);
       printf("\n");  
       }
}
void sum(int x[20][20],int y[20][20],int z[20][20],int tam)
{int i,j;
     for(i=0;i<tam;i++)
       for(j=0;j<tam;j++)
         z[i][j]=x[i][j]+y[i][j];
}
main()
{int t,a[20][20],b[20][20],c[20][20];
printf("dame el orden de la matriz: ");
scanf("%d",&t);
printf("dame los elementos de la matriz a: \n");
pidematriz(a,t);
printf("dame los elementos de la matriz b: \n");
pidematriz(b,t);
sum(a,b,c,t);
printf("La matriz a es:\n");
imprimematriz(a,t);
printf("La matriz b es:\n");
imprimematriz(b,t);  
printf("La suma es:\n");
imprimematriz(c,t);
system("pause");
return 0;
}
 
          
