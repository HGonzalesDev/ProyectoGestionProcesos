#include <iostream>
using namespace std;

// Definimos la estructura de Nodo
struct Nodo{
	int dato;
	Nodo* siguiente;
	
	//Constructor para inicializar los valores
	Nodo (int valor){
		dato = valor;
		siguiente=NULL;
	}
};

//Funci�n para agregar un nodo al final de la lista
void agregarAlFinal (Nodo*& inicio, int valor){
	Nodo* nuevoNodo=new Nodo(valor); //Creamos un nuevo nodo con el valor
	
	if (inicio == NULL){ //Si la lista est� vacia, el nuevo nodo ser� el inicio
		inicio = nuevoNodo;
		
	} else {
		Nodo* temp = inicio;
		while (temp->siguiente != NULL) {
			temp = temp->siguiente;
			
		}
		
	}	

}

void imprimirLista (Nodo* inicio) {
	Nodo* temp = inicio;
	while (temp!=NULL){//Mientras haya nodos, seguimos recorriendo
		cout << temp -> dato << " "; // Imprimimos el dato del nodo
		temp = temp -> siguiente;
		
	}	
	cout << endl;
}

int main () {
	Nodo* inicio=NULL; // la lista comienza vac�a (NULL en vez de nullptr)
	int numeroDeElementos, valor;
	//Pedimos al usuario cu�ntos elementos desea agregar a la lista
	cout << "�Cu�ntos elementos deseas agregar a la lista?";
	cin >> numeroDeElementos;
	
	// Ingresamos los elementos uno por uno
	for (int i=0; i<numeroDeElementos; i++){
		cout<< "Ingresa el valor para el nodo " << i + 1 << ": " ;
		cin >> valor;
		agregarAlFinal (inicio, valor); // Llamamos a la funci�n para agregar el nodo 
	}
	
	//Imprimimos la lista
	cout << "lista enlazada simple: ";
	imprimirLista(inicio);
	return 0;
	
	
}

