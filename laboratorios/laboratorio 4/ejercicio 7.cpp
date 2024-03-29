#include <iostream>//ejercicio 7
using namespace std; 
struct nodo{
       int nro;   
       struct nodo *sgte;
}; 
typedef struct nodo *Tlista; 
void insertar(Tlista &lista, int valor)
{
    Tlista t, q = new(struct nodo); 
    q->nro  = valor;
    q->sgte = NULL; 
    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    } 
}  
void mostrar(Tlista lista)
{
     int i = 0; 
     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}  
void eliminaRepetidos(Tlista &lista, int valor)
{
    Tlista q, ant;
    q = lista;
    ant = lista; 
    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            if(q==lista) 
            {
                lista = lista->sgte;
                delete(q);
                q = lista;
            }
            else
            {
                ant->sgte = q->sgte;
                delete(q);
                q = ant->sgte;
            }
        }
        else
        {
            ant = q;
            q = q->sgte;
        } 
    } 
    cout<<"\n\n Valores eliminados..!"<<endl;
}  
int main()
{
    Tlista lista = NULL;
    int op,dato;  
    do
    {
        cout<<"1. Insertar\n2. Mostrar datos\n3. Eliminar valores repetidos\n4. Salir"<<endl;   cin>> op; 
        switch(op)
        {  
            case 1: 
                 cout<< "\n Numero a ingresar : "; cin>> dato;
                 insertar(lista, dato );
            break;  
            case 2:  
                mostrar(lista);
            break; 
            case 3:
                cout<<"\n Valor repetido a eliminar: "; cin>> dato;
                eliminaRepetidos(lista, dato);
            break; 
         } 
        cout<<endl; 
    }while(op!=4); 
   return 0;
}