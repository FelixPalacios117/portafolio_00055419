//Felix gerardo guevara palacios
#include <iostream>
#include <stack>
using namespace std;

void media(){
 stack <int> valores;
 int valor,desicion=1;
 double media=0;
 	while(desicion==1){
 	cout<<"ingresa un numero"<<endl;
 	cin>>valor;
 	valores.push(valor);
 	cout<<"presiona cualquier numero para terminar o 1 para seguir"<<endl;
 	cin>>desicion; 
 	} 
if(valores.size()%2==0)
{
    int contador=valores.size()/2+1;
    for(int i=0;i<contador;i++){ 
           if(i==(contador-2) || i==(contador-1)){
                    valor=valores.top();
                    media+=valor;
                    valores.pop();
            }
           else{
            valores.pop();
            }
    } 
cout<<"La media es : "<<(media/2);
}
else{
	int contador2=(valores.size()+1)/2;
	for(int i=0;i<contador2;i++){
	if(i==contador2-1){
	valor=valores.top();
	valores.pop();
	media=valor;
	}
	else{
	valores.pop();
	}
	}
cout<<"La media es : "<<(media);
} 
}
int main()
{
	media();
}