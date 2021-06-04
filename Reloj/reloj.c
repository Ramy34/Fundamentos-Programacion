#include <stdio.h>
int main(){
	int h, m, s;
	h=0;
	while (h < 24){
		m = 0;
		while (m < 60){
			s = 0;
			while (s < 60){
				printf("%i : %i : %i", h, m, s);
				s++;
				printf("\n");
			}
			m++;
		}
		h++;
	}
}
