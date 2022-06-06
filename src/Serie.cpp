#include "Serie.hpp"

#include "Serie.hpp"

Serie::Serie():Video(){
    cantidad = 0;
    episodios;
}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio):Video(_iD, _titulo, _duracion, _genero, 0){
    cantidad = 0;
    episodios;
}

// Metodos modificadores (set)
void Serie::setEpisodio(int _index, Episodio _episodio){
    if (cantidad > 0 && _index < cantidad) {
        episodios[_index] = _episodio;
    }
}

void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

//Metodos de acceso (get)
Episodio Serie::getEpisodio(int _index){
    Episodio episodio1;

    if (cantidad >= 0 && _index < cantidad){
        return episodios[_index];
        }
    else{
        return episodio1;
        }
}
int Serie::getCantidad(){
    return cantidad;
}

// Otros metodos
double Serie::calculaCalPromedio(){
    double acum = 0;
    for(int index = 0; index < cantidad; index++)
        acum = acum + episodios[index].getCalificacion() ;

    if (cantidad > 0)
        return acum / cantidad;
    else
        return 0;
}
string Serie::str(){
    //Primero concateno todos los episodios de la serie
    string acum = "\n";
    for(int index = 0; index < cantidad; index++)
        acum = acum + episodios[index].str() + '\n';

    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + ',' + to_string(calificacionPromedio) + acum;
}
