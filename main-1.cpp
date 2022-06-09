//
//  main.cpp
//  Avance 2 Objetivos - Lectura de archivo, arreglo de apuntadores, operador new,  generación de reportes, Herencia.
//
//  Created by Ma. Guadalupe Roque on 5/21/22.
//  Copyright © 2022 Invitado. All rights reserved.
//


#include <iostream>
#include "Peliculas.hpp"
int menuPeliculas(){
    int iOpcion;
    /*
    cout <<
    "\n ** Peliculas " <<
    "\n1. Leer Peliculas  desde Archivo" <<
    "\n2. Reporte de todas las peliculas" <<
    "\n3. Reporte de peliculas que tienen cierta Calificacion" <<
    "\n4. Reporte de peliculas de cierto genero" <<
    "\n0. SALIR\nTeclea la opcion:";
    */
    cin >> iOpcion;
    return iOpcion;
}
// ******************************
//            AVANCE 2
// *******************************
int main() {
    // se manda llamar al constructor - default
    Peliculas peliculas{};
    
    int iOpcion;
    string sGenero, sId;
    double dCal;
  
    // Leer el archivo de peliculas y cargarlo en el arreglo de apuntadores
    // dentro de la clase Peliculas
    peliculas.leerArchivo();
    
    // 1o Inicializar la vcc antes del ciclo
    iOpcion = menuPeliculas();
    // 2a Incluir en la condicion la vcc
    while (iOpcion != 0){
        switch (iOpcion) {
                // ***** Peliculas
            case 1: // 1. Leer Peliculas  desde Archivo" <<
                peliculas.leerArchivo();
                break;
            case 2:// 2. Reporte de todas las peliculas" <<
                peliculas.reporteTodasLasPeliculas();
                break;
            case 3:// 3. Reporte de todas las peliculas con cierta Calificacion" <<
                //cout << "Ingresa la calificacion:";
                cin >> dCal;
                peliculas.reporteConCalificacion(dCal);
                break;
            case 4: // 4. Reporte de todas las peliculas con cierto genero" <<
                //cout << "Ingresa el Genero:";
                cin >> sGenero;
                peliculas.reporteGenero(sGenero);
                break;
            default:
                //cout << "Opcion Incorrecta!!\n";
                break;
        }
        //3o Actualizar la vcc dentro del ciclo
        iOpcion = menuPeliculas();
    }
    return 0;
}

