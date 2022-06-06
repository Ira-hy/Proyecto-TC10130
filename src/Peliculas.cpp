#include "Peliculas.hpp"

Peliculas::Peliculas(){

}

//Metodos modificadores (set)
void Peliculas::setPtrPelicula(Pelicula * _PtrPelicula){
    if (cantidad < 50){
        arrPtrPeliculas[cantidad++] = _PtrPelicula;
    }
}
void Peliculas::setCantidadPeliculas(int _cantidad){
    cantidad = _cantidad;
}

//Metodos de acceso (get)
Pelicula * Peliculas::getPtrPelicula(string _iD){
    return new Pelicula();
}

int Peliculas::getCantidadPeliculas(){
    return 0;
}

//Otros metodos
void Peliculas::leerArchivo(){
    // fin - file input
    fstream fin;
    // Para almacenar los datos leidos del arreglo :arreglo de string
    string row[6];
    // line almacena la linea leida, y word la palabra sacada de la linea
    string line, word;

    // Abrir el archivo de entrada
    fin.open("Pelicula-1.csv",ios::in);

    // inicializar el atributo en 0
    cantidad = 0;

    // leer una linea del archivo y la almacena en line
    while (getline(fin,line)){
        // despliega en consola la linea - BORRAR o COMENTAR couts
        cout << cantidad << line << endl;

        // usar split() para separar las palabras
        stringstream s(line);

        // leer las columnas de datos de una fila, y guardarlas en una variable string: "word"
        int iR = 0;

        // Extrae los caracteres de s y los almacena en word hasta que encuentre el delimitadpr ','
        while (getline(s,word,',')){
            // Añadir word al arreglo row e incrementar iR p/ en la proxima palabra
            row[iR++] = word;
        }

        //Operador new crea un objeto del tipon pelicula
        // 'stoi' - funcion que convierte de string a int
        // 'stod' - funcion que convierte de sting a double
        arrPtrPeliculas[cantidad] = new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5]));

        // Se muestra en la consola la separacion: BORRAR o COMENTAR cout's

        cout << "iD: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duración: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificación: " << row[4] << "\n";
        cout << "Oscares: " << row[5] << "\n";

        // Desplegamos en la consola la pelicula con el metodo str() de pelicula
        cout << "Dentro del objeto: " << arrPtrPeliculas[cantidad]->str() << endl;
    }
    fin.close();
    // Se sale del ciclo cuando ya no existen mas lineas en el archivo

    //Desplegamos todas las peliculas leidas
    for (int iR = 0; iR < cantidad; iR++){
        cout << iR << "-" << arrPtrPeliculas[iR]->str() << endl;
    }
}

void Peliculas::reporteTodasLasPeliculas(){ // cambiar las variables para la clase que tiene que ser
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        cout << arrPtrPeliculas[iR]->getTitulo() << endl;
        count++;
        }

    if (count == 0){
        cout << "No hay peliculas: " << endl;
    }
}

void Peliculas::reporteConCalificacion(double _calificacionPromedio){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if(arrPtrPeliculas[iR]->getCalificacionPromedio() == _calificacionPromedio){
            cout << arrPtrPeliculas[iR]->str() << endl;
            count++;
        }
    }
    if (count == 0){
        cout << "No hay peliculas con esta calificación: " << _calificacionPromedio << endl;
    }
}

void Peliculas::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if (arrPtrPeliculas[iR]->getGenero() == _genero){
            cout << iR << arrPtrPeliculas[iR]->str() << endl;
            count++;
        }
    }

    if (count == 0){
        cout << "No hay peliculas del genero " << _genero << endl;
    }
}
