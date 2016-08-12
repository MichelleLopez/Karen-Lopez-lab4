#include <iostream>
using namespace std;

void inicializarMatriz(int**, int);
void printMenu();
void efectuarDivision(int**, int);

int main()
{
	int opcion, tamanio, coef3, coef2, coef1, coef0, a;
	printMenu();
	cin>>opcion;

	switch(opcion){
		case 1:
			cout<<"Ingrese el grado mas alto del polinomio: ";
			cin>>tamanio;
			int** matriz = new int*[3];
			inicializarMatriz(matriz, tamanio);
			efectuarDivision(matriz, tamanio);

		break;

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
	cout<<"1. Ejercicio 1\n2. Ejercicio 3\n2. Salir\n";
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
				cout<<matriz[i][j];
				if(i == 0 && j == 0){
					cout<<"|"<<a;
				}
				else if(i == 1 && j == 0){
					cout<<"|"<<endl;
					for (int i = 0; i < tamanio; i++)
					{
						cout<<"--";
					}
				}
				
			}
			cout<<endl;
		}
		
		cout<<endl;

	}
	

}
