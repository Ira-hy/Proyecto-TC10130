#include <string>
#include <cstdlib>
#include "Pelicula.h"

using namespace std;
//Constructores

Pelicula::Pelicula(){
	oscares = 0;
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares){
    oscares = _oscares;
}

// Metodos modificadores - Setters
void Pelicula::setOscares(int _oscares){
	oscares = _oscares;
}

// Metodos de acceso - Getters
int Pelicula::getOscares(){
	return oscares;
}

//otros metodos
string Pelicula::str(){
	return "Oscares: " + to_string(oscares);
}
