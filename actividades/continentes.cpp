#include <iostream>
#include <string>
using namespace std;
//continentes asia,america,africa,europa,oceania
int contadormenor,contadormayor;
bool continentencontrado=false;
struct  continentes{
	string nombre,pais,capital;
	int habitante;
	double promedioedades;
};
continentes continentesnuevos[25];
int poblaciontotal(string busqueda){
    int suma=0;
    for(int i=0;i<25;i++){
        if(busqueda==continentesnuevos[i].nombre){
            continentencontrado=true;
            for(int j=i;j<i+5;j++){
                suma+=continentesnuevos[j].habitantes;
            }
            i=26;
  	}
  	else{
  	 i+=4;   
  	}
    }
    return suma;
}
void ingresardatos(string continente,int i, int o){
    cout<<"Informacion del continente : "<<continente<<endl;
	for(i;i<o;i++){
	    continentesnuevos[i].nombre=continente;
		cout<<"ingresa el nombre del pais"<<endl;
		cin>>continentesnuevos[i].pais;
		cout<<endl<<"ingresa el nombre de la capital"<<endl;
		cin>>continentesnuevos[i].capital;
		cout<<endl<<"ingresa los habitantes del pais"<<endl;
		cin>>continentesnuevos[i].habitante;
		cout<<endl<<"ingresa el promedio de edad"<<endl;
		cin>>continentesnuevos[i].promedioedades;
	}
	contadormenor+=5;
	contadormayor+=5;
	cout<<contadormenor<<contadormayor;
}
int main()
{
    string nombrecontinente;
    contadormenor=0,contadormayor=5;
    for(int i=0;i<5;i++){
        cout<<"ingresa el nombre del continente"<<endl;
        cin>>nombrecontinente;
        ingresardatos(nombrecontinente,contadormenor,contadormayor);
    }
    /*while(!continentencontrado){
        cout<<"ingresa el nombre del continente del que deseas saber su poblacion "<<endl;
        cin>>nombrecontinente;
        poblaciontotal(nombrecontinente);
    }*/
}