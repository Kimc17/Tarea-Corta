

#ifndef TAREACORTA_BIGARRAY_H
#define TAREACORTA_BIGARRAY_H

#include <fstream>

using namespace std;

class SuperArray {
public:

    int Generar();
    int Divisiones(int);
    int aBinario(int, int);
    void aTexto(int);
    void aArray();

private:
    int ArrayGrande[50];
    int temp;
    int arreglo[4000];
    fstream fichero;





};


#endif //TAREACORTA_BIGARRAY_H
