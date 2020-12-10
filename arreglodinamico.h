#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include<iostream>
using namespace std;

class ArregloDinamico
{
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 10;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void Insertar_Final(const string &s);
    void Insertar_Inicio(const string &s);
    size_t size();
    string operator[](size_t a)
    {
        return arreglo[a];
    }
private:
    void expandir();
};

#endif
