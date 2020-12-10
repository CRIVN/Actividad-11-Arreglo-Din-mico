#include<iostream>
#include"arreglodinamico.h"
using namespace std;

int main()
{
    ArregloDinamico arreglo;
    arreglo.Insertar_Final("Cesar");
    arreglo.Insertar_Final("Ivan");
    arreglo.Insertar_Final("y");
    arreglo.Insertar_Final("estudio");
    arreglo.Insertar_Final("Ing. informatica");
    arreglo.Insertar_Final("en");
    arreglo.Insertar_Final("CUCEI");
    arreglo.Insertar_Final(":v");
    arreglo.Insertar_Inicio("soy");
    arreglo.Insertar_Inicio("Hola que tal");

    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    
    return 0;
}
