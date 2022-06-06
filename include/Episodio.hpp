#ifndef EPISODIO_HPP
#define EPISODIO_HPP

#include <stdio.h>
#include <iostream>
using namespace std;

class Episodio{
    protected:
        string titulo;
        int temporada;
        int calificacion;

    public:
        Episodio();
        Episodio(string _titulo, int _temporada, double _calificacion);

        void setTitulo(string _titulo);
        void setTemporada(int _temporada);
        void setCalificacion(double _calificacion);
        //void setEpisodio(int _Episodio);

        string getTitulo();
        int getTemporada();
        double getCalificacion();
        //Episodio getEpisodio(int);

        string str();
};


#endif // EPISODIO_HPP
