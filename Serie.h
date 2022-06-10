#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include <string>
#include <cstdlib>
#include <iostream>
#include "Video.h"
#include "Episodio.h"

using namespace std;

class Serie:public Video{

	private:
		Episodio Episodios[5];
		int cantidad;

	public:
		Serie();
		Serie(string _iD, string _titulo,int _duracion, string _genero, double _calificacionPromedio);

		//Metodos Modificadores - Setters
		void setEpisodio(int _index, Episodio _episodios);
		void setCantidad(int _cantidad);

		//Metodos de acceso - getters
		Episodio getEpisodio(int _index);
		int getCantidad();

		//Otros Metodos
		double calculaCalPromedio();
		string str();

		friend ostream &operator<<(ostream &out, const Serie &s);
};
#endif
