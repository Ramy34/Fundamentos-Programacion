#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int n;
    printf("Dame un numero ");
    scanf("%d", &n);
    if (n%2==0)
     printf("Es par");
    else
     printf("Es impar");
    getch();
    return 0;
}     
