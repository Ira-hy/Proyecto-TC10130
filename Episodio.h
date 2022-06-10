#include <stdio.h>
#include <iostream>

using namespace std;

#ifndef EPISODIO_H
#define EPISODIO_H

class Episodio{
	// Private section
	protected:
		string titulo;
		int temporada;
		int calificacion;

	public:
		Episodio();
		Episodio(string _titulo, int _temporada, int _calificacion);

	//Metodos Modificadores - Setters
	void setTitulo(string _titulo);
	void setTemporada(int _Temporada);
	void setCalificacion(int _calificacion);

	//Metodos de acceso - Getters
	string getTitulo();
	int getTemporada();
	int getCalificacion();

	string str() const;
};

#endif
