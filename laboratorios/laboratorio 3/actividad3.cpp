#include <iostream>
#include <string>
using namespace std; 
struct libros {
    string titulo;
    int Numpaginas;
    libros *sig;
};
typedef struct libros libro; 
void buscar(libro* datos,string titulo){
    if(datos){
            if(datos->titulo == titulo){
                 cout << "Numero de paginas: " << datos->Numpaginas <<endl;
            }else{
                    buscar(datos->sig,titulo);
            }
    }else{
        return;
    }
} 
int main() {  
    int opcion,num=0; 
     string titulo;
    libro *puntero=NULL;
    do{
       libro *nuevo= new libro();
       cout<<"Selecciona una opcion \n 1)Agregar \n 2)Buscar un libro \n 3)salir"<<endl;
       cin>>opcion;
       switch(opcion){
           case 1:  
                cout<<"Ingresa el titulo del libro : "; cin>>titulo;
                cout<<"ingresa la cantidad de paginas  : "; cin>>num;
                 nuevo->sig=NULL;
                 nuevo->titulo=titulo;
                  nuevo->Numpaginas=num;
                if(!puntero){
                    puntero=nuevo;
                }
                else{
                    nuevo->sig=puntero;
                    puntero=nuevo;
                } 
               break;
           case 2: 
               cout<<"Ingresa el titulo del libro a buscar: "; cin>>titulo;
               buscar(puntero,titulo);
               break;
       }  
    }
    while(opcion!=3); 
    return 0;
}

