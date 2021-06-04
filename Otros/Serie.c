#include <stdio.h>
#include <stdlib.h>
 int main(){
	 int a = 0, b = 0, i = 0, n;
	 printf("Dame un numero ");
	 scanf("%d", &n);
	 do{
		 i++;
		 a = i * i;
		 b = a + b;
	}
	while (i < n);
	printf("La suma es %d",b);
}   
