#include <stdio.h>
#include <iostream>
#include "Pelicula.h"

using namespace std;

#ifndef Video_h
#define Video_h

class Video{

	protected:
		string iD;
		string titulo;
		int duracion;
		string genero;
		double calificacionPromedio;

	public:
		Video();
		Video(string _iD,string _titulo,int _duracion,string _genero,double _calificacionPromedio);

	//Metodos de MODIFICADORES - Setters
	void setId(string _iD);
	void setTitulo(string _titulo);
	void setDuracion(int _duracion);
	void setGenero(string _genero);
	void setCalificacion(double _calificacionPromedio);

	//Metodos de ACCESO - Getters
	string getId();
	string getTitulo();
	int getDuracion();
	string getGenero();
	double getCalificacion();

	//Otros metodos
	virtual string str();


};

#endif /* Video_h*/
