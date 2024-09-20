#include<iostream>
using namespace std;

void mostrarArreglo(int A[], int n) 
{
    for(int i = 0; i < n; i++) 
	{
        cout<< A[i] << " ";
    }
    cout<<endl;
}

void insercionDir(int A[], int n){
	int k;
	for(int i = 1; i < n; i++)
	{
		int aux = A[i];
		k = i - 1;
		while(k >= 0 and aux < A[k]) { 
			A[k + 1] = A[k];
			k = k - 1;
		}
		A[k + 1] = aux;
	}		  
    cout<<"El arreglo ordenado por inserción directa: "<<endl;
	mostrarArreglo(A, n);
}


void insercionBinaria(int A[], int n)
{
	int aux, izq, der;
	for(int i = 1; i < n; i++) 
	{
		aux = A[i];
		izq = 0;
		der = i - 1;

		while(izq <= der)
		{
			int m = izq + (der - izq) / 2;
			if(aux < A[m])
			{
				der = m - 1;
			}
			else
			{
				izq = m + 1;
			}
		}

		for(int j = i - 1; j >= izq; j--) 
		{
			A[j + 1] = A[j];
		}
		A[izq] = aux;
	}
	
	cout<<"El arreglo ordenado por insercion binaria: "<<endl;
	mostrarArreglo(A, n);
}

int main()
{
	int opc;
	do{
		system("cls");
		cout<<"<<<<<ORDENACION POR INSERCION>>>>"<<endl;
		cout<<"1. Intercambio por insercion directa "<<endl;
		cout<<"2. Intercambio por insercion binaria "<<endl;
		cout<<"3. Salir del programa "<<endl;
	
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		
		switch (opc)
		{
			case 1: 
				{	
					system("cls");	
					int A[]={20, 14, 12, 25, 4};
					int n = 5;
					cout<<"INSERCION DIRECTA:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(A,  n);
					cout<<endl;					
					insercionDir(A, n);			
					system("pause");			
					break;
				}
			case 2:
				{
					system("cls");
					int A[]={4, 3, 1, 5, 6};
					int n = 5;
					cout<<"INSERCION BINARIA:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(A, n);
					cout<<endl;	
					insercionBinaria(A, n);
					system("pause");					
					break;					
				}		
			case 3:
				{
					cout<<"\nSaliendo del programa...."<<endl;
					break;
				}
			default:
				{
					cout<<"\nOpcion invalida"<<endl;
					system("pause");
				}
		}
		cout<<endl;
		
	}while(opc != 3);
	return 0;
}
