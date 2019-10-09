#include <iostream>
#include <vector>
using namespace std;

struct Ordenpupuseria{
    int revueltas;
    int frijolcqueso;
    int queso;
    bool arroz;
};
typedef struct Ordenpupuseria Orden;

Orden solicitarOrden(){
    Orden o;
    int valor;
    cout << "Cuantas pupusas revueltas deseas : "; cin >> o.revueltas;
    cout << "Cuantas pupusas de frijol con queso deseas: ";   cin >> o.frijolcqueso;
    cout << "Cuantas pupusas de queso deseas : "; cin >> o.queso;
    cout << "Las deseas de 1-Arroz  2-Maiz: ";
     cin >> valor;
     if(valor==2)
     o.arroz=false;
     else
     o.arroz=true;
    return o;
}

void mostrarOrden(Orden o){
    cout << "Orden : " <<endl;
    cout << "Pupusas revueltas: " << o.revueltas << endl;
    cout << "Pupusas de frijol con queso : " << o.frijolcqueso<< endl;
    cout << "Pupusas de queso : " << o.queso<< endl;
    if(o.arroz)
    cout << "Pupusas de arroz" << endl;
    else
    cout << "Pupusas de maiz" << endl;
    cout << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden o= solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), o);
                continuar = false;
            break;
            case 2: lista.push_back(o);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}