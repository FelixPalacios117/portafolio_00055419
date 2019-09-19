//Felix gerardo guevara palacios
#include <iostream>
#include <stack>
using namespace std;

void media(){
 stack <int> valores;
 int valor,mediana=0,desicion=1;
 	while(desicion==1){
 	cout<<"ingresa un numero"<<endl;
 	cin>>valor;
 	valores.push(valor);
 	cout<<"presiona cualquier numero para terminar o 1 para seguir";
 	cin>>desicion; 
 	}
if(valores.size()%2==0)
{
	for(int i=0;i<=(valores.size()/2)+1;i++){
		if(i>=(valores.size()/2)){
			valor=valores.top();
			valores.pop();
			mediana+=valor;
		}
		else{
		valores.pop();
		}
	} 
cout<<"La mediana es : "<<(mediana/2);
}
else{
	for(int i=1;i<(valores.size()+1)/2;i++){
	if(i==(valores.size()+1)/2){
	valor=valores.top();
	valores.pop();
	mediana=valor;
	}
	else{
	valores.pop();
	}
	}
cout<<"La mediana es : "<<(mediana);
} 
}
int main()
{
	media();
}