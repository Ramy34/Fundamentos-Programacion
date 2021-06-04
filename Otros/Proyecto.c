#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string>
#define max 200
void encriptar(char frase[max],int numero);
void desencriptar(char frase[max],int numero);

void desencriptar(char frase[max],int numero)
{
    int i=0;
    while(frase[i]!='\0')
    {
        frase[i]=frase[i]-numero;
        i++;
    }
    system("cls");
    printf("\nLa frase desencriptada es:\n%s\n",frase);
}
void encriptar(char frase[max],int numero)
{
    int i=0;
    char letra;
    while(frase[i]!='\0')
    {
        frase[i]=frase[i]+numero;
        i++;
    }
    system("cls");
    printf("\nLa frase encriptado es:\n%s\n",frase);
}
int main()
{
    int x;
    char cadena[max];
    printf("Cifrado Cesar\n");
    printf("introduce una frase: ");
    scanf("%200[^\n]", cadena);
    while(getchar()!='\n');
    printf("introduce el numero de desplazamiento: ");
    scanf("%d",&x);
    while(getchar()!='\n');
    encriptar(cadena, x);
    getchar();
    desencriptar(cadena, x);
    getchar();
    return 0;
}
