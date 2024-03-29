#include <iostream>//ejercicio 5
#include <string>
using namespace std; 
struct Nodo {
	string valor; 
	Nodo *siguiente ;
};   
Nodo *lista = NULL ; 
void mostrar (Nodo *lista){
    Nodo *nuevo = new Nodo();
    nuevo = lista;  
    if(nuevo != NULL ){  
        mostrar(nuevo->siguiente); 
        cout << nuevo->valor<<endl;
    }
}
void insertar(Nodo *&lista,string n){
        Nodo *nuevo= new Nodo ();
        nuevo->valor= n; 
        Nodo *auxiliar1 = lista,*auxiliar2 ; 
        while ((auxiliar1 != NULL )){
                auxiliar2 = auxiliar1 ;
                auxiliar1 = auxiliar1->siguiente ; 
        } 
        if ( lista == auxiliar1){
                lista = nuevo; 
        }else {
                auxiliar2->siguiente = nuevo; 
        }
        nuevo->siguiente = auxiliar1; 
} 
int main (){
    int opcion;string valor;
    bool seguir=true;
        do{  
            cout << "1)Ingresa una palabra a la lista\n" ;
             cout <<"2)Mostrar lista en orden inverso\n" ;
            cout << "3)Salir\n " ; 
            cin>> opcion ; 
            switch (opcion){
                    case 1:	
                    cout << "Ingresa una palabra: ";
                    cin >> valor;
                    insertar(lista, valor); 
                    break;
                    case 2: 
                         cout<<"Valores ingresados : "<<endl;
                    mostrar(lista);  
                    break;
                case 3:
                    seguir=false;
                    break;
            } 
    }while(seguir); 
   return 0;
} 
