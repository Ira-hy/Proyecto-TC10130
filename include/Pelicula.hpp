#ifndef PELICULA_HPP
#define PELICULA_HPP

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

#include "Video.hpp"

class Pelicula:public Video{
    protected:
        int oscares;

    public:
        // Metodos constructores
        Pelicula();
        Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);

        // Metodos modificadores (set)
        void setOscares(int _oscares);

        // Metodos de acceso (get)
        int getOscares();

        // Otro metodo
        string str();
};

#endif // PELICULA_HPP
