#include <iostream>
using namespace std;

//Tarea1: Añadir funcion para sumar, 
//y modificar el la opcion 1 del switch para que
//invoque a la funcion sumar con los parámetros correctos.

//Tarea2: Añadir funcion para restar
//y modificar el la opcion 2 del switch para que
//invoque a la funcion restar con los parámetros correctos.

//Tarea3: Añadir función para multiplicar
//y modificar el la opcion 3 del switch para que
//invoque a la funcion multipliar con los parámetros correctos.

//Tarea4: Añadir función para dividir
//y modificar el la opcion 4 del switch para que
//invoque a la funcion dividir con los parámetros correctos.

//Tarea5: Modificar el programa para que el usuario pueda realizar
//tantas operaciones como quiera, hasta que indique que no necesita más.

//Tarea6: añadir la función 'prepara_operación', que lee los operandos
//n1 y n2, y muestra el menú en pantalla.


int main(int argc, char *argv[]) {
	
	int n1, n2, opcion;
	char otra_operacion;
	cout << "Bienvenido al programa calculador.\n";	

	cout << "Introduce dos números: \n";
	cin >> n1;
	cin >> n2;		

	//Muestra menú de opciones
	cout	
		<< "Éstas son las opciones: \n"
		<< "1) Sumar " << n1 << "+" << n2 << "\n" 
		<< "2) Restar " << n1 << "-" << n2 << "\n" 
		<< "3) Multiplicar " << n1 << " x " << n2 << "\n" 
		<< "4) Dividir " << n1 << " / " << n2 << "\n";
	
	//Asegura que introduce opción válida
	do {
		cout << "Introduce una opción entre 1 y 4: \n";
		cin >> opcion;
	}while (opcion<1 || opcion>4);
	
	//Según la opción introducida, realiza el cálculo correcto
	cout << "Ha elegido la opción " << opcion << "\n";
	switch (opcion) {
	case 1:
		cout << n1 << "+" << n2 << "=" << n1+n2 <<"\n";
		break;
	case 2:
		cout << n1 << "-" << n2 << "=" << n1-n2 <<"\n";
		break;
	case 3:
		cout << n1 << "x" << n2 << "=" << n1*n2 <<"\n";
		break;
	case 4:
		cout << n1 << "/" << n2 << "=" << n1/n2 <<"\n";
	}
		
	return 0;
}
