#ifndef SERIES_H
#define SERIES_H

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

#include "Serie.h"

const int MAX_SERIES = 50;

class Series{

    private:
        // Arreglo de apuntadores de la clase Serie
        Serie *arrPtrSeries[MAX_SERIES];
        // Cantidad de Series dadas de alta en el arrPtrSeries, Inicialmente es 0;
        int cantidad;

    public:
        // Constructor que inicializa el *arrPtrSeries[MAX_SERIES] con nullptr y el atributo cantidad con 0.
        Series();
        Series(string _iD, string _titulo,int _duracion, string _genero, double _calificacionPromedio);

        // Lee las Series desde un archivo cvs y las carga en el arreglo arrPtrSeries
        void leerArchivo();

        // Se asigna ese apuntador al arrPtrSeries[cantidad] en la posición actual que tenga
        // actualmente el atributo cantidad
        void setPtrSerie(Serie *ptr);

        // Asigna al atributo cantidad el valor de _cantidad
        void setCantidadSeries(int _cantidad);

        // Retorna un apuntador Serie que tiene un iD recibido en el parametro de entrada
        // si no existe ese _id retorna nullPtr
        Serie* getPtrSerie(string _iD);

        // Retorna el valor del tributo cantidad
        int getCantidadSeries();

        // Reporte de todas las serries que estan en el arreglo arrPtrSeries:
        // despliega todas las series contenidas en el arreglo - usa ->str()
        void reporteTodasLasSeries();

        // Reporte de todas las Series del arreglo arrPtrSeries que tiene cierta calificación
        // Despliega todas las series cuya calificacionPromedio sea igual a la recibida en
        // el parámetro de entrada _calificacion -- usa str() para desplegar la info de la Serie
        void reporteConCalificacion(double _calificacion);

        // Reporte de Series del arreglo arrPtSeries que tienen cierto genero
        // Despliega todas las series cuyo atributo genero sea igual al recibido en
        // el parámetro de entrada _genero -- usa str() para desplegar la info de la Serie
        void reporteGenero(string _genero);

        // Calcular la califción de cada serie en base a sus episodios
        // manda a llamar al método calculaPromedio de la serie de la clase Serie para
        // que se calcule la calificación promedio de la Serie
        void calcularCalificacionSeries();
};

#endif
