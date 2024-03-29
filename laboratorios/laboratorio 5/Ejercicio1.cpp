#include <iostream>
using namespace std;
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;
Arbol crearArbol(int x);
void asignarIzquierda(Arbol a, int unDato);
void asignarDererecha(Arbol a, int unDato);
void agregarNodo(Arbol a);
int izq = 0,der = 0;
void recorrerIzquierda(Arbol a);
void recorrerDerecha(Arbol a);
int suma(Arbol aux);
int contar(Arbol &a);

int main(){
    int raiz = 0,total=0,izquierda=0;
    cout << "\nValor contenido en la raiz: ";
    cin >> raiz;
    Arbol arbol = crearArbol(raiz);
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Cantidad de niveles\n\t2) Agregar\n\t3) Suma de los nodos"
            << "\n\t4) Cantidad de nodos\n\t5) Salir\tSu opcion: ";
        cin >> opcion;
        switch(opcion){ 
            case 1:
				izq=0, der=0; 
                recorrerDererecha(arbol->der);
				recorrerIzquierda(arbol->izq);
				if(der>=izq){
					cout << "El arbol posee: "<< der << " niveles" << endl;
				}else{
					cout << "El arbol posee: "<<izq<<" niveles" << endl;
				}
            break;
            case 2: agregarNodo(arbol);
            break;
            case 3:
            	total = suma(arbol);
				cout << "La suma de los nodos es: " << total << endl;
            break;
			case 4:
				cout << "Total de nodos: " << contar(arbol) <<endl;
            break; 
        	case 5: continuar = false;
        	break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
    
    return 0;
}
Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}
void asignarDerecha(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}
void asignarIzquierda(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}
void agregarNodo(Arbol a){
    int numero = 0;
    cout << "Numero a agregar: ";
    cin >> numero;
    
    Arbol p = a;
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    if(numero < p->info)
        asignarIzquierda(p, numero);
    else
        asignarDererecha(p, numero);
}
void recorrerIzquierda(Arbol a){
	if (!a)
	return;
	else{
		izq++;
		recorrerIzquierda(a->izq);
	}
}
void recorrerDerecha(Arbol a){
	if (!a)
	return;
	else{
		der++;
		recorrerDerecha(a->der);
	}
}
int contar(Arbol &a){
	if(a != NULL){
		int r = 1;
		int i = contar(a->izq);
		int d = contar(a->der);
		return r + i + d;
	}
	return 0;
}

int suma(Arbol aux){
	if(aux != NULL){
		int raiz = aux->info;
		int i = suma(aux->izq);
		int d = suma(aux->der);
		return raiz + i + d;
	}
	return 0;
}