#include "Series.h"

// Constructor que inicializa el *arrPtrSeries[MAX_SERIES] con nullptr y el atributo cantidad con 0.
Series::Series(){
    cantidad = 0;
}

Series::Series(string _iD, string _titulo,int _duracion, string _genero, double _calificacionPromedio){
    cantidad = 0;
}

// Lee las Series desde un archivo cvs y las carga en el arreglo arrPtrSeries
void Series::leerArchivo(){
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];
    // Variable para llevar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};
    // Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;

    // **************** LEER LAS SERIES *****************

    lectura.open("D:\\Users\\Irahy\\Documents\\GitHub\\Proyecto-TC10130\\Serie2021.csv",ios::in);
    // inicialiar el atributo cantidad de Series con 0
    cantidad = 0;
    // ciclo para leer todo el archivo
    while (getline(lectura, linea)){ // lee una línea del archivo, corresponde a una serie
        // Para que la mando a desplegar? para verificar que se está leyendo correctamente el archivo
        //cout << linea << endl; // BORRAR ***********************************************************************************
        std::stringstream registro(linea);
        iRow = 0;
        // ciclo para separar los elementos de la serie (string)
        while (getline(registro, dato, ',')){
            //cout << dato << endl; // ***************************************************************
            row[iRow++] = dato;
        }
        // crear un objeto de la clase Serie, new retorna un pointer
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3],stod(row[4],0));
        // Para verificar si se inicializo correctamente el objeto
        //arrPtrSeries[cantidad] -> str(); // BORRAR
        // vamos por la siguiente serie del archivo, se incremente para la siguiente cantidad
        cantidad++;
    }
    lectura.close();

    // ******************* LEER LOS EPISODIOS DE LAS SERIES ****************
    lectura.open("D:\\Users\\Irahy\\Documents\\GitHub\\Proyecto-TC10130\\Episodio2021.csv", ios::in);
    // ciclo para leer todo el archivo
    while (getline(lectura,linea)){
        // Desplegar el apisodio leido - solo para corroborar
        //cout << linea << endl; // BORRAR ************************************************
        std::stringstream registro(linea);

        iRow = 0;
        while (getline(registro, dato,',')){ // Separar los datos del apisodio desde la linea registro
            row[iRow++] = dato;
        } // al salir de aqui ya se separo toda la línea

        // iD - convertir int - sacar la posición de la serie 500 - 0, 501 - 1, 502
        iS = stoi(row[0]) - 500; // posición del arreglo donde esta el ptr de la serie pertenece el episodio

        //crear el Episodio
        episodio = new Episodio(row[1], stoi(row[2]),stod(row[3]));

        // Traer la cantidad de episodios de la serie iS - la 1a vez retorna 0
        cantEpisodios = arrPtrSeries[iS]->getCantidad();
        // verificar si todavía podemos añadir otro Episodio al arreglo
        if (cantEpisodios < 5){
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodio));
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
        cout << arrPtrSeries[iS]->str() << endl; // BORRAR **************************************************
    }
    lectura.close();

    // desplegar todas las series con sus episodios         // BORRAR
    // manda a llamar al método str() de la clase serie     // BORRAR
    for(int iS = 0; iS < cantidad; iS++){                   // BORRAR
        cout << arrPtrSeries[iS]->str() << endl;            // BORRAR
    }
}

// Se asigna ese apuntador al arrPtrSeries[cantidad] en la posición actual que tenga
// actualmente el atributo cantidad
void Series::setPtrSerie(Serie *ptr){
    for (int iR = 0; iR < cantidad; iR++){
        arrPtrSeries[iR] = ptr;
    }
}

// Asigna al atributo cantidad el valor de _cantidad
void Series::setCantidadSeries(int _cantidad){
    cantidad = _cantidad;
}

// Retorna un apuntador Serie que tiene un iD recibido en el parametro de entrada
// si no existe ese _id retorna nullPtr
Serie* Series::getPtrSerie(string _iD){
    for (int iR = 0; iR < cantidad;iR++){
        if (_iD == arrPtrSeries[iR]->getId()){
            return arrPtrSeries[iR];
        }
    }
    return nullptr;
}

// Retorna el valor del tributo cantidad
int Series::getCantidadSeries(){
    return cantidad;
}

// Reporte de todas las series que estan en el arreglo arrPtrSeries:
// despliega todas las series contenidas en el arreglo - usa ->str()
void Series::reporteTodasLasSeries(){
    double acum = 0;
    double mean = 0;
    for (int iR = 0; iR < cantidad; iR++){
        cout << '*' << *arrPtrSeries[iR] << endl;
        acum = acum + arrPtrSeries[iR]->getCalificacion();
    }
    if (cantidad > 0) // IF DUDOSO
    mean = acum/cantidad;
    cout << "Promedio: " + to_string(mean) << endl;

    /*for (int iR = 0; iR < cantidad; iR++){
        cout << '*' << *arrPtrSeries[iR] << endl; // BUENARRDOOOOOOOOOO
    }*/

    /*int count = 0;
    for (int iR = 0; iR < cantidad;iR++){
            cout << arrPtrSeries[iR]->str()<< endl;
            count++;
    }
    if (count == 0){
        cout << "No hay Series" << endl;
    }*/
}

// Reporte de todas las Series del arreglo arrPtrSeries que tiene cierta calificación
// Despliega todas las series cuya calificacionPromedio sea igual a la recibida en
// el parámetro de entrada _calificacion -- usa str() para desplegar la info de la Serie
void Series::reporteConCalificacion(double _calificacion){
    int count = 0;
    for (int iR = 0; iR < cantidad; iR++){
        if(arrPtrSeries[iR]->getCalificacion() == _calificacion){
            cout << '*' << *arrPtrSeries[iR] << endl;
            count++;
        }
    }
    if (count == 0){
        cout << "No hay Series con esta calificación: " << _calificacion << endl;
    }
}

// Reporte de Series del arreglo arrPtSeries que tienen cierto genero
// Despliega todas las series cuyo atributo genero sea igual al recibido en
// el parámetro de entrada _genero -- usa str() para desplegar la info de la Serie
void Series::reporteGenero(string _genero){
    int count = 0;
    for (int iR = 0; iR < cantidad;iR++){
        if(arrPtrSeries[iR]->getGenero() == _genero){
            cout << '*' << *arrPtrSeries[iR] << endl;
            count++;
        }
    }
}

// Calcular la califción de cada serie en base a sus episodios
// manda a llamar al método calculaPromedio de la serie de la clase Serie para
// que se calcule la calificación promedio de la Serie
void Series::calcularCalificacionSeries(){ // FALTA TERMINAR DE CODIFICAR
    for (int iR = 0; iR < cantidad; iR++){
        //cout << *arrPtrSeries[iR] << endl;
        //cout << arrPtrSeries[iR]->str() << endl;
        /*if (arrPtrSeries[iR]->getId() == Pelicula().getId()){
            cout << arrPtrSeries[iR]->calculaCalPromedio() << endl;
        }*/
    }
}
