#include "TrianguloPascal.h"
#include <iostream>
using namespace std;

void inicializarMatriz(int**, int);
void printMenu();
void efectuarDivision(int**, int);

int main()
{
	int opcion, tamanio, a, filas;
	printMenu();
	cin>>opcion;

	if (opcion == 1)
	{
		cout<<"Ingrese el grado mas alto del polinomio: ";
		cin>>tamanio;
		int** matriz = new int*[3];
		inicializarMatriz(matriz, tamanio);
		efectuarDivision(matriz, tamanio);
		
	}
			
	if (opcion == 2)
	{
		cout<<"Ingrese el numero de filas: ";
		cin>>filas;
		int** matriz2 = new int*[filas];
		TrianguloPascal *triangulo; 
		triangulo = new TrianguloPascal(matriz2);

	}
	return 0;
}

void inicializarMatriz(int** matriz, int tamanio){
	for (int i = 0; i < 3; i++)
	{
		matriz[i] = new int[tamanio];
	}


}

void printMenu(){
	cout<<"1. Ejercicio 1\n2. Ejercicio 3\n3. Salir\n";
}

void efectuarDivision(int** matriz, int tamanio){
	int a;
	char lineas[tamanio];
	for (int i = tamanio; i >= 0; i--)
	{
		cout<<"Ingrese el coeficiente grado x^"<<i<<":";
		cout<<" ";
		cin>>matriz[0][i];

		//matriz[1][i] = 0;

	}
	cout<<"Ingrese el valor de a: ";
	cin>>a;

	matriz[2][tamanio] = matriz[0][tamanio];

	for (int m = tamanio; m >= 0; m--)
	{
		
		for (int i = 0; i < 3 ; i++)
		{
			for (int j = tamanio; j >= 0; j--)
			{	
				cout<<matriz[i][j]<<"\t";
				if(i == 0 && j == 0){
					cout<<"|"<<a;
				}
				else if(i == 1 && j == 0){
					cout<<"|"<<endl;
					for (int i = 0; i < tamanio; i++)
					{
						cout<<"------------";
					}
				}
			}
			cout<<endl;
			matriz[1][m-1] = matriz[2][m] * a;
			matriz[2][m] = matriz[0][m] + matriz[1][m];
		}
		cout<<endl;
	}
	cout<<"El cociente es: ";
	for (int n = tamanio; n >= 2; n--)
	{
		cout<<matriz[2][n]<<"X^"<<n-1<<" + ";
	}
	
	cout<<" "<<matriz[2][1]<<endl;
	cout<<"El residuo es: "<<matriz[2][0]<<endl;
}
