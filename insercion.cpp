#include<iostream>
using namespace std;

void mostrarArreglo(int arr[], int n) 
{
    for(int i = 0; i < n; i++) 
	{
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
void insercionDir(int arr[], int n){
	int k;
	for(int i=2;i<n;i++)
	{
		int aux=arr[i];
		k=i-1;
		while(k>0 && aux<arr[k]){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}		  
    cout<<"El arreglo ordenado: "<<endl;
	for(int i = 0; i < n; i++) 
	{
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

void insercionBinaria(int arr[], int n)
{
	int aux, izq, der;
	for(int i=2; i<n; i++)
	{
		aux=arr[i];
		izq=1;
		der=i-1;
		while(izq<=der)
		{
			int m=izq+der/2;
			if(aux<arr[m])
			{
				der=m;
			}
			else
			{
				izq=m+1;
			}
		}
		int j;
		j=i-1;
		while(j>=izq)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[izq]=aux;
	}
	
	cout<<"El arreglo ordenado: "<<endl;
	mostrarArreglo(arr,  n);
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
					int arr[]={20, 14, 12, 25, 4};
					int n=5;
					cout<<"\nArreglo original: "<<endl;
					mostrarArreglo(arr,  n);
					cout<<endl;					
					insercionDir(arr, n);			
					system("pause");			
					break;
				}
			case 2:
				{
					system("cls");
					int arr[]={4, 3, 1, 5, 6};
					int n=5;
					cout<<"INTERCAMBIO POR INSERCION BINARIA:"<<endl;
					cout<<"\nArreglo original: "<<endl;
					insercionBinaria(arr, n);
					cout<<endl;	
					mostrarArreglo(arr,  n);
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
		
	}while(opc!=3);
	return 0;
	
	
}



