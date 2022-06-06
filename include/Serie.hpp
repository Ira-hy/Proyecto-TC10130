#ifndef SERIE_HPP
#define SERIE_HPP

#include <stdio.h>
#include <iostream>
using namespace std;

#include "Video.hpp"
#include "Episodio.hpp"

class Serie: public Video{
    private:
        Episodio episodios[5];
        // cantidad de episodios de la serie
        int cantidad;

    public:
        Serie();
        Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        // Metodos modificadores (set)
        void setEpisodio(int _index, Episodio _episodio);
        void setCantidad(int _cantidad);

        //Metodos de acceso (get)
        Episodio getEpisodio(int _index);
        int getCantidad();

        // Otros metodos
        double calculaCalPromedio();
        string str();
};

#endif // SERIE_HPP
