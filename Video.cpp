#include <string> 
#include <cstdlib>


#include "Video.h"
//Metodos constructores
Video::Video(){
	iD = "000";
	titulo = "Interstellar";
	duracion = 173;
	genero = "Ciencia-ficcion";
	calificacionPromedio = 9;
}

Video::Video(string _iD,string _titulo,int _duracion,string _genero,double _calificacionPromedio){
	iD = _iD;
	titulo = _titulo;
	duracion = _duracion;
	genero = _genero;
	calificacionPromedio = _calificacionPromedio;
}

//Metodos de MODIFICADORES - Setters
void Video::setId(string _iD){
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
void Video::setCalificacion(double _calificacionPromedio){
	calificacionPromedio = _calificacionPromedio;
}
	
//Metodos de ACCESO - Getters
string Video::getId(){
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
double Video::getCalificacion(){
	return calificacionPromedio;
}

//Otros metodos
string Video::str(){
	return (
	"Id: " + iD + 
	"\nTitulo: " + titulo + 
	"\nDuracion (min): " + to_string(duracion) + 
	"\nGenero: " + genero + 
	"\nCalificacion promedio: " + to_string(calificacionPromedio) + 
	"\n-----------------");
}
