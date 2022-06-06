#include "Pelicula.hpp"

Pelicula::Pelicula(){
    oscares = 0;
}
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares){
    oscares = _oscares;
}

void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

int Pelicula::getOscares(){
    return oscares;
}

string Pelicula::str(){
    return to_string(oscares);
}
