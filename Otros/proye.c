#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>

using namespace std;

string desencriptar(string linea,int desplazamiento)
{
	string desencriptado;
	// Asignar la l�nea original en la l�nea desencriptada para que el tama�o del string coincida
	desencriptado = linea;
	// Recorrer la l�nea caracter x caracter
	for(string::size_type i=0; i<linea.size(); i++) {
		// Desplazar el caracter
		desencriptado[i] = linea[i] - desplazamiento;
	}
	return desencriptado;
}

string encriptar(string linea,int desplazamiento)
{
	string encriptado;
	// Asignar la l�nea original en la l�nea encriptada para que el tama�o del string coincida
	encriptado = linea;
	// Recorrer la l�nea caracter x caracter
	for(string::size_type i=0; i<linea.size(); i++) {
		// Desplazar el caracter
		encriptado[i] = linea[i] + desplazamiento;
	}
	return encriptado;
}

int main() {
	printf("================ CODIFICADO DE ARCHIVO ================\n");
	
	// Cambiar codificaci�n para permitir caracteres de espa�ol como � y acentos
	setlocale(LC_CTYPE, "Spanish"); 

	// Definir variables que se utilizar�n	
	string archivo;
	int numerocesar;
	string linea;
	string lineaencriptada;
	string lineadesencriptada;
	
	// Pedir el nombre del archivo
	printf("Indique el nombre del archivo a encriptar: ");
	scanf("%s", &archivo[0]);
	
	// Pedir el n�mero para el desplazamiento
	printf("Indique el n�mero de desplazamiento para la encriptaci�n: ");
	scanf("%i", &numerocesar);
	
	// Intentar abrir el archivo
	ifstream miarchivo(archivo.c_str());
	if (miarchivo.is_open())
	{
		// Se pudo abrir el archivo, continuar con la encriptaci�n
		while ( getline(miarchivo, linea) )
		{
			printf("L�nea del archivo  : %s\n", linea.c_str());
			lineaencriptada = encriptar(linea, numerocesar);
			printf("L�nea encriptada   : %s\n", lineaencriptada.c_str());
			lineadesencriptada = desencriptar(lineaencriptada, numerocesar);
			printf("L�nea desencriptada: %s\n\n", lineadesencriptada.c_str());
		}
		miarchivo.close();
	} else {
		// No se pudo abrir el archivo, mostrar error
		printf("No se pudo abrir el archivo");
	}
	return 0;
}
