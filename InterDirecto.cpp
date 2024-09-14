#include<iostream>
using namespace std;

void InterDirectoDer(int X[], int n)
{
	for(int i = 0 ; i < n - 1 ; i++)
	{
		for(int j =  i+1 ; j < n  ; j++)
		{
			if( X[i] > X[j])
			{
				int aux;
				aux = X[i];
				X[i] = X[j];
				X[j] = aux;
			}
		}
	}
	
	cout<<"El intercambio directo por la derecha es: "<<endl;
	for(int i = 0 ; i < n; i++)
	{
		cout<<X[i]<<" ";
	}	
	
}

int main()
{
	int opc;
	int n;
	cout<<"Ingrese el numero de elementos del arreglo: ";
	cin>>n;
	int X[n];
	cout<<"Ingrese los valores del arreglo: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"X["<<i+1<<"]: ";
		cin>>X[i];
	}
	cout<<endl;

	do{
		cout<<"1. Intercambio directo por la derecha. "<<endl;
		cout<<"2. Intercambio directo por la izquierda "<<endl;
		cout<<"3. Intercambio directo con senial "<<endl;
		cout<<"4. Intercambio directo bidireccional. "<<endl;
		cout<<"5. Salir del programa. "<<endl;
		
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		
		switch (opc)
		{
			case 1: 
				{					
					InterDirectoDer(X, n);
					cout<<endl;			
					break;
				}
			case 5:
				{
					cout<<"Saliendo del programa...."<<endl;
					break;
				}
			default:
				{
					cout<<"Opcion invalidad"<<endl;
				}
		}
		cout<<endl;
		
	}while(opc!=5);
	return 0;
	
	
}



