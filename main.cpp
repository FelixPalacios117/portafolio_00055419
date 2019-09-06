#include <iostream> //ejercicio 8
using namespace std; 
int valorcomparado=1;
void valores(int x)
{
    if(valorcomparado==x){
        if(x==1){
            cout<<x;
        }
        else{
        cout<<valorcomparado<<endl;
        valorcomparado--;
        valores(x-1); 
        } 
    }
    else{ 
         cout<<valorcomparado<<endl; 
        valorcomparado++;
        valores(x); 
    }
}
int main() {
    int valor;
    cout<<"Ingresa un valor : ";
    cin>>valor;
    valores(valor);
    return 0;
}

