#include<iostream>
using namespace std;

void mostrarArreglo(int X[], int n) 
{
    for(int i = 0; i < n; i++) 
	{
        cout<< X[i] << " ";
    }
    cout<<endl;
}
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
	
	cout<<"\nEl intercambio directo por la derecha es: "<<endl;
	mostrarArreglo(X,  n);
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
	
	cout<<"\nEl intercambio directo por la izquierda es: "<<endl;
	mostrarArreglo(X,  n);
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
	
	cout<<"\nEl intercambio directo senial es: "<<endl;
	mostrarArreglo(X,  n);
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
	
	cout<<"\nEl intercambio directo bidireccional: "<<endl;
	mostrarArreglo(X,  n);

}


int main()
{
	int opc;

	do{
		system("cls");
		cout<<"<<<<<ORDENACION POR INTERCAMBIO DIRECTO>>>>>"<<endl;
		cout<<"1. Intercambio directo por la derecha "<<endl;
		cout<<"2. Intercambio directo por la izquierda "<<endl;
		cout<<"3. Intercambio directo con senial "<<endl;
		cout<<"4. Intercambio directo bidireccional"<<endl;
		cout<<"5. Salir del programa "<<endl;
	
		cout<<"Ingrese una opcion: ";
		cin>>opc;
		
		switch (opc)
		{
			case 1: 
				{	
					system("cls");	
					int X[]={20, 14, 12, 25, 4};
					int n=5;
					cout<<"INTERCAMBIO DIRECTO POR LA DERECHA:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(X,  n);			
					InterDirectoDer(X, n);
					cout<<endl;
					system("pause");			
					break;
				}
			case 2:
				{
					system("cls");
					int X[]={4, 3, 1, 5, 6};
					int n=5;
					cout<<"INTERCAMBIO DIRECTO POR LA IZQUIERDA:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(X,  n);
					InterDirectoIzq(X, n);
					cout<<endl;	
					system("pause");					
					break;					
				}
				case 3:
				{
					system("cls");
					int X[]={20, 10, 30, 90, 50};
					int n=5;
					cout<<"INTERCAMBIO DIRECTO SENIAL:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(X,  n);
					InterDirectoSen(X, n);
					cout<<endl;		
					system("pause");
					break;		
				}
				case 4: 
				{
					system("cls");
					int X[]={16, 13, 11, 2, 8, 20};
					int n=6;
					cout<<"INTERCAMBIO DIRECTO BIDIRECCIONAL:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(X,  n);
					InterDirectoBi(X, n);
					cout<<endl;	
					system("pause");
					break;					
				}
			case 5:
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
		
	}while(opc!=5);
	return 0;
	
	
}



