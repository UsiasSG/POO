#include <iostream>
using namespace std;
/* esto es la clase persona
que heredara a la clase estudiante
*/
class Persona{
	// Atributos : nombres,apellidos,direccion,telefono,fecha_nacimiento
	protected : string nombres,apellidos,direccion;
	int telefono;
	// constructor
	protected :
	        Persona (){
	        }
	Persona(string nom,string ape,string dir,int tel){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
	}
	// metodos crud = crear,leer,actualizar,borrar
	void mostrar();
	 
};
