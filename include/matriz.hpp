#ifndef MATRIZ_HPP
#define MATRIZ_HPP

class Matriz {
    private:
        int filas;
        int columnas;
        double* datos;

    public:
        Matriz(int m, int n);
        ~Matriz();
};

#endif