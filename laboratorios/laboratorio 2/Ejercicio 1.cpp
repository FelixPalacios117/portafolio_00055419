#include <iostream>
using namespace std;
int mayorymenor(int mayor, int menor){
    if(mayor%menor==0){
        return menor;
    }
    else{
        int residuo=mayor%menor; 
        mayor=menor;
        menor=residuo;
        mayorymenor(mayor,menor);
    }
}
int main() {
    int mayor,menor;
    cout<<"Ingresa el mayor y el menor : "<<endl;
    cin>>mayor>>menor;
   cout<<"El mcd "<< mayorymenor(mayor,menor);
    return 0;
}