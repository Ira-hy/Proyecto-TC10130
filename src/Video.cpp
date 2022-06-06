#include "Video.hpp"

Video::Video(){
    iD = "000";
    titulo = "Pelea de Gallos";
    duracion = 20;
    genero = "Peleas";
    calificacionPromedio = 0;
}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

void Video::setiD(string _iD){
    iD = _iD;
}

void Video::setTitulo(string _titulo){
    titulo = _titulo;
}

void Video::setDuracion(int _duracion){
    duracion = _duracion;
}

void Video::setGenero(string _genero){
    genero = _genero;
}

void Video::setCalificacionPromedio(double _calificacionPromedio){
    calificacionPromedio = _calificacionPromedio;
}

string Video::getiD(){
    return iD;
}

string Video::getTitulo(){
    return titulo;
}

int Video::getDuracion(){
    return duracion;
}

string Video::getGenero(){
    return genero;
}

double Video::getCalificacionPromedio(){
    return calificacionPromedio;
}

string Video::str(){
    return iD + ',' + titulo + ',' + to_string(duracion) + ',' + genero + to_string(calificacionPromedio);
}
