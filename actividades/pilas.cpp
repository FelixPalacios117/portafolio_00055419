#include <iostream>
using namespace std; 
struct Tpila {
	float elements[5];
	int top;
};
typedef struct Tpila Pila; 
void initialize(Pila* s) {
	s->top = -1;
}
bool empty(Pila* s) {
	return s->top < 0;
} 
void push(Pila* s, float e) {
	if (s->top < 4) {
		(s->top)++;
		s->elements[s->top] = e;
	}
} 
void pop(Pila* s, float* e) {
	if (s->top >= 0) {
		*e = s->elements[s->top];
		(s->top)--;
	}
} 
float ultimoeliminandopila(Pila* s) {
	float x = 5.6, y = 5.3, z = 2.8, w = 9.8, e = 4.3,a=0;
	push(s, y);
	push(s, z);
	push(s, w);
	push(s, e);
	push(s, x);
	while (!empty(s)) {
		pop(s, &a);
		if (empty(s)) {
			return a;
		}
	}
}
float ultimosineliminarpila(Pila* s,Pila* j){ 
	float x = 5.6, y = 5.3, z = 2.8, w = 9.8, e = 4.3, a = 0,final=0;
	push(s, y);
	push(s, z);
	push(s, w);
	push(s, e);
	push(s, x);
	while (!empty(s)) {
		pop(s, &a);
		push(j, a);
	} 
	final = a;
	while (!empty(j)) {
		pop(j, &a);
		push(s, a); 
	}
	return final;
}
int main()
{
	Pila unaPila,pilados;
	initialize(&unaPila);
	initialize(&pilados);
	cout<<"El valor del fondo, eliminando la pila es :  "<<ultimoeliminandopila(&unaPila)<<endl;
	cout << "El valor del fondo, sin eliminar la pila es : " << ultimosineliminarpila(&unaPila, &pilados);
}