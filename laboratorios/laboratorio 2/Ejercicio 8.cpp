#include <iostream>
using namespace std;
int cifrasu=0;
int cifras(int cantidad){
    if(cantidad==0){ 
        return cifrasu;
    }
    else{ 
        cifras((cantidad/10)); 
        cifrasu++;
    }
}

int main() {
    int cifra;
    cout<<"ingresa una cantidad : ";
    cin>>cifra;
   cout<< cifras(cifra);
    return 0;
}

