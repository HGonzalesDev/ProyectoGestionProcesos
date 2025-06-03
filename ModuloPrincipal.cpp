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
void agregarAlFinal (Nodo*& inicio, int valor){
	Nodo* nuevoNodo=new Nodo(valor); //Creamos un nuevo nodo con el valor
	
	if (inicio == NULL){ //Si la lista está vacia, el nuevo nodo será el inicio
		inicio = nuevoNodo;
		
	} else {
		Nodo* temp = inicio;
		while (temp->siguiente != NULL) {
			temp = temp->siguiente;
			cout << temp;
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

