#include <string>
#include <cstdlib>
#include "Pelicula.h"

using namespace std;
//Constructores

Pelicula::Pelicula():Video(){
	oscares = 0;
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares):
    Video( _iD, _titulo, _duracion, _genero, _calificacionPromedio){
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

// sobre carga de operadores
ostream &operator<<(ostream &out, const Pelicula &p){
    out << p.iD << ',' << p.titulo << ',' << p.duracion << ',' << p.genero << ',' << p.calificacionPromedio << ',' << p.oscares << endl;
    return out;
}

//otros metodos
string Pelicula::str(){
	return(iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + ',' + to_string(oscares));
}
