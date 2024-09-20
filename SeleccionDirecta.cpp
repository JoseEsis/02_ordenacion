#include<iostream>
using namespace std;


void seleccionDirecta(int A[], int n)
{
	int menor, k;
	for(int i=0; i<n-1; i++)
	{
		menor=A[i];
		k=i;
		for(int j=i+1; j<n; j++)
		{
			if(A[j]<menor)
			{
				menor=A[j];
				k=j;
			}				
		}
		A[k]=A[i];
		A[i]=menor;		
	}
	
	cout<<"El  orden de los elementos es: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<A[i]<<" ";
	}		
}

int main()
{
	int n;
	cout<<"La cantidad de elementos del array: ";
	cin>>n;
	int A[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"A [ "<<i+1<<" ] : ";
		cin>>A[i];
	}
	
	seleccionDirecta( A, n);
	return 0;
}