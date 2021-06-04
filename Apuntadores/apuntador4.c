#include <stdio.h>
int main ()
{
	#define TAMANO 5
	int lista [TAMANO]={10,8,5,8,7};
	int*ap=lista;
	printf("\tLista\n");
	for (int indice=0; indice<5; indice++)
	{
		printf("\nCalificación del alumno %d es %d", indice+1,*(ap+indice));
	}
	printf("\n");
	return 88;
}
