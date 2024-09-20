#include<iostream>
using namespace std;

void shellSort(int A[], int n)
{
	int k=n, cen, i; 
	while(k >1)
	{
		k=k/2;
		cen=1;
	}
	while(cen == 1)
	{
		cen=0; 
		i=0;
		while(i+k < n)	
		{
			if(A[i+k] < A[i])
			{
				int aux;
				aux=A[i];
				A[i]=A[i+k];
				A[i+k]=aux;
				cen=1;
			}
			i=i+1;
		}
	}	
	
	cout<<"Los elementos ordenados: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}	
}

int main()
{
	int n;
	cout<<"Ingrese la cantidad de elementos para el arreglo: ";
	cin>>n;
	int A[n];
	cout<<"Ingrese los valores del arreglo: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"A[ "<<i+1<<" ]: ";
		cin>>A[i];
	}
	cout<<"Arreglo original: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	shellSort(A, n);
	return 0;
}