#ifndef VIDEO_HPP
#define VIDEO_HPP

#include <stdio.h>
#include <iostream>
using namespace std;

class Video{
    protected:
        string iD;
        string titulo;
        int duracion;
        string genero;
        double calificacionPromedio;

    public:
        // Metodos constructores
        Video();
        Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        // Metodos modificadores (set)
        void setiD(string _iD);
        void setTitulo(string _titulo);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacionPromedio(double _calificacionPromedio);

        // Metodos de acceso (get)
        string getiD();
        string getTitulo();
        int getDuracion();
        string getGenero();
        double getCalificacionPromedio();

        // Otro metodo
        string str();
};

#endif // VIDEO_HPP
