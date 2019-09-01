#include <iostream>
using namespace std;
int multiplicacion(int a, int b){
	if(b==1){
	return a;	
	}else{
	 int valor=multiplicacion(a,b-1);
	return valor+a;
	}
}
int main()
{
	int r = multiplicacion(29,6);
	cout << "Resultado: " << r << endl;
}