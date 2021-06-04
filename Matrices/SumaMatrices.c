#include <stdio.h>

int main(){
	int matriz1[100][100], matriz2[100][100], suma[100][100];
	int renglon, columna,i,j;
	printf("\tPrograma que suma dos matrices.\n");
	
	printf("Dame el número de renglones: ");
	scanf("%d",&renglon);
	
	printf("\nDame el número de columnas: ");
	scanf("%d",&columna);
	
	printf("Llenado de la matriz A");
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			printf("\nElemento [%d][%d]: ", (i+1), (j+1));
			scanf("%d",&matriz1[i][j]);
		}
	}
	printf("Llenado de la matriz B");
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			printf("\nElemento [%d][%d]: ", (i+1), (j+1));
			scanf("%d",&matriz2[i][j]);
		}
	}
	printf("Matriz A\n");
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			printf("%d ",matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B\n");
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			printf("%d ",matriz2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			suma[i][j] = matriz1[i][j] + matriz2[i][j];
		}
	}
	printf("Matriz A+B\n");
	for(i=0; i<renglon; i++){
		for(j=0; j<columna; j++){
			printf("%d ",suma[i][j]);
		}
		printf("\n");
	}
	return 0;
}
