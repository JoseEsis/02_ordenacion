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
void InterDirectoIzq(int X[], int n)
{
	for(int i = 0 ; i < n-1 ; i++)
	{
		for(int j = n-1 ; j > i ; j--)
		{
			if( X[j-1] > X[j])
			{
				int aux;
				aux = X[j-1];
				X[j-1] = X[j];
				X[j] = aux;
			}
		}
	}
	
	cout<<"El intercambio directo por la izquierda es: "<<endl;
	for(int i = 0 ; i < n; i++)
	{
		cout<<X[i]<<" ";
	}
}
void InterDirectoSen(int X[], int n)
{
	int cen = 1; 
	int i = 0;
	
	while( i< n-1 and cen ==1)
	{
		cen = 0;
		for(int j=0; j<n-i-1; j++)
		{
			if( X[j] > X[j+1])
			{
				int aux;
				aux = X[j];
				X[j] = X[j+1];
				X[j+1] = aux;
				cen = 1;
			}
		}		
		i++;			
	}
	
	cout<<"El intercambio directo senial es: "<<endl;
	for(int i = 0 ; i < n; i++)
	{
		cout<<X[i]<<" ";
	}
}

void InterDirectoBi(int X[], int n)
{
	int izq=0;
	int der=n-1;
	int k;
	while( izq<der)
	{
	
		for(int i=der; i>izq; i--)
		{
			if( X[i-1] > X[i])
			{
				int aux;
				aux = X[i-1];
				X[i-1] = X[i];
				X[i] = aux;
				k=i;
			}
		}
		izq=k;
		
		k=izq;
		for(int i=izq; i<der; i++)
		{
			if( X[i+1] < X[i])
			{
				int aux;
				aux = X[i+1];
				X[i+1] = X[i];
				X[i] = aux;
				k=i;
			}
		}
		der=k;
			
	}
	
	cout<<"El intercambio directo bidireccional: "<<endl;
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
			case 2:
				{
					InterDirectoIzq(X, n);
					cout<<endl;						
					break;					
				}
				case 3:
				{
					InterDirectoSen(X, n);
					cout<<endl;		
					break;		
				}
				case 4: 
				{
					InterDirectoBi(X, n);
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



