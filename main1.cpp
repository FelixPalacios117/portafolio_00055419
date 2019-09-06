#include <iostream> 
using namespace std; 
int main() {
    int arreglo[10],suma=0;
    double promedio=0;
    for(int i=0;i<10;i++){
        cout<<"Ingrese el valor : ";
        cin>>arreglo[i];
        suma+=arreglo[i];
    }
    cout<<"El promedio es : "<<(promedio =(suma/10));
    return 0;
} 