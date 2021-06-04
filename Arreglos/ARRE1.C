/* inicializa un arreglo con una declaracion*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main()
{
    int n[10]={32,27,64,15,2,9,95,54,89,70};
    int i;
    printf("%s%13s\n","Elemento","Valor");
    for (i=0;i<=9;i++)
		 printf("%7d%13d\n",i+1,n[i]);
    
    system("pause");
    return 0;
}
