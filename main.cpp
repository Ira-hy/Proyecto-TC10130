#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

#include "Video.h"
#include "Serie.h"
#include "Pelicula.h"
#include "Peliculas.h"

int main(){

    string genero;

	Peliculas directorioPeliculas{};

	directorioPeliculas.leerArchivo();

	directorioPeliculas.reporteTodasLasPeliculas();

	cout << "Tecla el genero que quiere consultar: ";
	cin >> genero;

	directorioPeliculas.reporteGenero(genero);

	// Declaración default
	Video video1;
	Pelicula::Video peli;
	//Video::Pelicula peli;

	Serie ksaDpapel("003","La casa de papel", 500, "Acción", 0);

	cout << ksaDpapel.str() << endl;


	Episodio episodio1("claves",1,10);

	//Pelicula peli3{"003", "los 3 idiotas", 400, "comedia",43, 0};


	// declaracion de viode con parametros
	Video video2("001","Avatar",150,"Ciencia-Ficcion",8);
	Video video3("002","Intensamente",120,"infantil",5);
//	Pelicula peli2(9);

//	Video *arrPtrVideos[] = {&video1, &video2};

	//cout << epi.str() << endl;
	//cout << ksaDpapel.str() << endl;
/*	cout << peli.str() << endl;
	cout << video1.str() << endl;
	cout << video2.str() << endl;
	cout << video3.str() << endl;
	cout << peli2.str() << endl;
	cout << peli3.str() << endl;*/
	/*
	// Desplegar ptr - apuntadoras
	cout << "Ptr del arreglo Video\n";
	for(int index = 0; index < 2;index++){
		cout << arrPtrVideos[index] << endl;
		cout << arrPtrVideos[index] -> str() << endl;

	}


	*/


	return 0;
}
