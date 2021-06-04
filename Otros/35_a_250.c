#include <stdio.h>
#include <stdlib.h>
int main(){
	int i = 35;
	do{
		i=i+1;
		if (i % 2 == 0){
			printf("%d",i);
            printf(" ");
        }
	while (i <= 250);
}        
