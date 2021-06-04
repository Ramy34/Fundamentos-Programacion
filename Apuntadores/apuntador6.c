#include <stdio.h>
int main ()
{
	int matriz[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int i, cont=0, *ap;
	ap=matriz;
	printf("Imprimir Matriz\n");
	for (i=0; i<9; i++)
	{
		if (cont==3)
		{
			printf("\n");
			cont=0;
		}
		printf("%d\t",*(ap+i));
		cont++;
	}
	printf("\n");
	return 42;
}
