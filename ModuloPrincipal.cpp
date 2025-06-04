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

//Función para agregar un nodo al final de la lista

void imprimirLista (Nodo* inicio) {
	Nodo* temp = inicio;
	while (temp!=NULL){//Mientras haya nodos, seguimos recorriendo
		cout << temp -> dato << " "; // Imprimimos el dato del nodo
		temp = temp -> siguiente;
		
	}	
	cout << endl;
}
void leerLista (Nodo* inicio) {
	Nodo* temp = inicio;
	while (temp!=NULL){//Mientras haya nodos, seguimos recorriendo
		cout << temp -> dato << " "; // Imprimimos el dato del nodo
		temp = temp -> siguiente;
		
	}	
	cout << endl;
}

int main () {
	Nodo* inicio=NULL; // la lista comienza vacía (NULL en vez de nullptr)
	int numeroDeElementos, valor;
	//Pedimos al usuario cuántos elementos desea agregar a la lista
	cout << "¿Cuántos elementos deseas agregar a la lista?";
	cin >> numeroDeElementos;
	
	// Ingresamos los elementos uno por uno
	for (int i=0; i<numeroDeElementos; i++){
		cout<< "Ingresa el valor para el nodo " << i + 1 << ": " ;
		cin >> valor;
		agregarAlFinal (inicio, valor); // Llamamos a la función para agregar el nodo 
	}
	
	//Imprimimos la lista
	cout << "lista enlazada simple: ";
	imprimirLista(inicio);
	return 0;
	
	
}

