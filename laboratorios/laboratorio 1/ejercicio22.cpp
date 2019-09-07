#include <iostream>
using namespace std;
int contador = 3,valor,contador2=0,matriz[5][5];
int main()
{   
	for (int i = 0; i < 5; i++) {//lleno la matriz
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = 0;
		}
	}
	for (int x = 0; x < 5; x++) {//5 filas
	  if(x==1){//condiciones para ir moviendo las posiciones en las que pondre los datos
	   contador--;
	  }
	   else if(x==2){
		   contador = 1;
	  contador2++;
	  }
	   else if (x == 3) {
		  contador = 0;
		  contador2++;
	  }
	 else if(x==4){
		  contador2++; 
	  } 
		for (int y = contador2; y < 5 - (contador); y++) {
			cout << "ingresa el valor a introducir : ";
			cin >> valor;
			matriz[x][y] = valor;
		}
	} 
	for (int l = 0; l < 5; l++) {//muestra la matriz
		for (int d = 0; d < 5; d++) {
			cout << matriz[l][d];
		}
		cout << endl;
	}
	return 0;
}
