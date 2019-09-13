#include <iostream>
using namespace std;
int low=0,high=7;
int mid=(low+high)/2;
int funcion(int x){
		int arreglo[]={1,3,4,5,17,18,31,33} ; 
		if(x==arreglo[mid]){
			return (mid);
		} 
if(x>arreglo[mid] && x<arreglo[mid+1])
		{ return (-1);}
		if(x!=arreglo[mid] &&(mid==low || mid==high))	{
		return (-1);
		}
		if(x<arreglo[mid]){
			mid-=1;
		return	funcion(x);
		}
		else{
				mid++;
	 return	funcion(x);
		}
	}
int main()
{
	int x;
	cout<<"Ingresa un numero";
	cin>>x;
	cout<<"El index : "<<funcion(x);
}
