#ifndef Pelicula_h
#define Pelicula_h

#include <stdio.h>
#include <iostream>

using namespace std;

#include "Video.h"

class Pelicula: public Video{
	// Private section
	private:
		int oscares;

	public:
		Pelicula();
		Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);

	// Metodos modificadores - Setters
	void setOscares(int _oscares);

	// Metodos de acceso - Getters
	int getOscares();

	// sobre carga de operadores
	friend ostream &operator << (ostream &out, const Pelicula &p);

	//otros metodos
	string str();
};
#endif
