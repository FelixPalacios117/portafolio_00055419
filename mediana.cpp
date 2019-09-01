//Felix gerardo guevara palacios
#include <iostream>
using namespace std;

void media(int tamaño){
 float arreglo[tamaño],valor,mediana;
 for(int i=0; i<tamaño;i++)
 {
 	cout<<"ingresa un numero"<<endl;
 	cin>>valor;
 	arreglo[i]=valor;
}
if(tamaño%2==0)
{
mediana=((arreglo[(tamaño/2)])+(arreglo[(tamaño/2)-1]))/2;
}
else{
	mediana=arreglo[(tamaño-1)/2];
}
cout<<"la mediana es : "<<mediana;
}
int main()
{
	int cantidad;
	cout<<" cuantos datos deseas ingresar?"<<endl;
	cin>>cantidad;
	media(cantidad);
}