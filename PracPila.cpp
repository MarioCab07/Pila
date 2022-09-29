#include <iostream>

using namespace std;

struct Nodo{
    int id;
    string nombre;
    float precio;
    Nodo *siguiente;



};

void push(Nodo *&, int, string,float);

void pop(Nodo *&, int&,string&, float&);

int main(){
    Nodo *pila=NULL;

    int id, n=0;
    string nombre, aux; 
    char opc;
    float precio;

    do{
        n++;
        cout<<"Ingrese el ID del producto: "; cin>>id;
        cout<<"Ingrese el nombre del producto: "; cin>>nombre;
        cout<<"Ingrese el precio del producto: "; cin>>precio;

        push(pila,id,nombre,precio);

        cout<<"\nDesea agregar otro producto? S/N"<<endl;
        cin>>opc;



    }while(opc=='S' || opc=='s');





    return 0;
}

void push(Nodo *&pila, int i, string n, float p){

    Nodo *new_nodo= new Nodo();
    new_nodo->id=i;
    new_nodo->nombre=n;
    new_nodo->precio=p;
    new_nodo->siguiente=pila;
    pila=new_nodo;

    cout<<"Se agrego un nuevo elemento"<<endl;
}

void pop(Nodo *&pila, int &i, string &n, float &p){

    Nodo *aux=pila;
    i=aux->id;
    n=aux->nombre;
    p=aux->precio;
    pila=aux->siguiente;
    delete aux;


}