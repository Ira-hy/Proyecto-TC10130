#include "Episodio.hpp"

Episodio::Episodio(){
    titulo = "Flash";
    temporada = 1;
    calificacion = 10;
}

Episodio::Episodio(string _titulo, int _temporada, double _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}

void Episodio::setCalificacion(double _calificacion){
    calificacion = _calificacion;
}

string Episodio::getTitulo(){
    return titulo;
}

int Episodio::getTemporada(){
    return temporada;
}

double Episodio::getCalificacion(){
    return calificacion;
}

string Episodio::str(){
    return titulo + ','+ to_string(temporada) + ',' + to_string(calificacion);
}
