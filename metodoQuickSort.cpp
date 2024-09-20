#include<iostream>
using namespace std;


void reduce(int A[], int inicio, int final)
{
	int izq, der, pos, cen, aux;
	izq=inicio;
	der=final;
	pos=izq;
	cen=1;
	while(cen==1)
	{
		cen=0;
		while(A[pos]<=A[der] && pos != der)
		{
			der=der-1;
		}
		if(pos!=der)
		{
			aux=A[pos];
			A[pos]=A[der];
			A[der]=aux;
			pos=der;
			while(A[pos] >= A[izq] && pos != izq)
			{
				izq=izq+1;
			}
			if(pos!=izq)
			{
				aux=A[pos];
				A[pos]=A[izq];
				A[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if(pos-1>inicio)
		{
			reduce(A, inicio, pos-1);
		}
		if(pos+1<final)
		{
			reduce(A, pos+1, final);
		}
	}
}
void quickSort(int A[], int n)
{
	reduce(A, 0, n-1);
	
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
	quickSort(A, n);
	cout << "Los elementos ordenados: " << endl;
	for (int i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}