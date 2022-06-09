#include "Serie.h"
#include "Episodio.h"

int index;

Serie::Serie():Video(){
	cantidad = 0;
	//episodios;
}

Serie::Serie(string _iD, string _titulo,int _duracion, string _genero, double _calificacionPromedio):Video(_iD, _titulo, _duracion, _genero, 0){
	cantidad = 0;
	//episodios;
}

void Serie::setEpisodio(int _index, Episodio _episodios){
    if (cantidad >= 0 && _index < cantidad){
        index = _index;
    }
}

//Metodos Modificadores - Setters
void Serie::setCantidad(int _cantidad){
	cantidad = _cantidad;
}

//Metodos de acceso - getters

Episodio Serie::getEpisodio(int _index){
    if (cantidad >= 0 && _index < cantidad){
        index = _index;
    }
	//validar que el index sea correcto (cantidad >= 0) && (_index < cantidad)
	//Si no cumple el _index no se cambia
	return Episodios[_index];
}

int Serie::getCantidad(){
	return cantidad;
}


double Serie::calculaCalPromedio(){
	double acum = 0;
	for (int index = 0; index > cantidad; index++){
        acum = acum + Episodios[index].getCalificacion();
	}

	if (cantidad > 0){
        return acum/cantidad;
	}
	else{
        return 0;
	}
}

string Serie::str(){
	string acum = "\n";

	for (int index = 0; index > cantidad; index++){
        acum = acum + Episodios[index].str() + "\n";
	}

	return (
        "Id: " + iD +
        "\nTitulo: " + titulo +
        "\nDuracion (min): " + to_string(duracion) +
        "\nGenero: " + genero +
        "\nCalificacion promedio: " + to_string(calificacionPromedio) +
        "\n-----------------"
    );
}
