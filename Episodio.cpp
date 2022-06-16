#include <string>
#include <cstdlib>

#include "Episodio.h"

using namespace std;

Episodio::Episodio(){
	titulo = "Episodio Prueba";
	temporada = 1;
	calificacion = 10;
}
Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
	titulo = _titulo;
	temporada = _temporada;
	calificacion = _calificacion;
}

//Metodos Modificadores - Setters
void Episodio::setTitulo(string _titulo){
	titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
	temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion){
	calificacion = _calificacion;
}
//Metodos de acceso - Getters
string Episodio::getTitulo(){
	return titulo;
}
int Episodio::getTemporada(){
	return temporada;
}
int Episodio::getCalificacion(){
	return calificacion;
}

string Episodio::str()const{
	return  titulo + ',' + to_string(temporada) + ',' + to_string(calificacion);
}
