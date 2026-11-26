#include "../include/matriz.hpp"

Matriz::Matriz(int m, int n){
    filas = m;
    columnas = n;

    datos = new double[filas * columnas];

    for(int i=0; i < filas * columnas; i++){
        datos[i] = 0.0;
    }
}

Matriz::~Matriz(){
    delete[] datos;
}