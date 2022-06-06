#ifndef PELICULAS_HPP
#define PELICULAS_HPP

#include <sstream>
#include <fstream>
#include <stdio.h>
#include <iostream>

#include "Pelicula.hpp"
const int MAX_PEL = 50;

class Peliculas{
    private:
        Pelicula *arrPtrPeliculas[MAX_PEL];
        int cantidad;
    //Metodos
    public:
        //Metodo constructor
        Peliculas();
        Peliculas(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);

        //Metodos modificadores (set)
        void setPtrPelicula(Pelicula * _pelicula);
        void setCantidadPeliculas(int _cantidad);

        //Metodos de acceso (get)
        Pelicula *getPtrPelicula(string _iD);
        int getCantidadPeliculas();

        //Otros metodos
        void leerArchivo();
        void reporteTodasLasPeliculas();
        void reporteConCalificacion(double _calificacionPromedio);
        void reporteGenero(string _genero);
};

#endif // PELICULAS_HPP
