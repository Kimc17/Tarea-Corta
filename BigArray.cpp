

#include <stdlib.h>
#include<iostream>
#include "BigArray.h"
#include <math.h>
#include <fstream>

using namespace std;


int SuperArray:: Generar() {
    fichero.clear();

    int num, c;
    for (c = 1; c <= 4000; c++) { //Ampliar cantidad de numeros

        num = 1 + rand() % (1 - 10);    // Cambiar a numeros mas grandes XD
        cout << "El numero es"<<num << endl;
        Divisiones(num);
    }
}
int SuperArray::  Divisiones(int num){
    int cont =0;
    int numero = num;
    while(num>1)
    {
        num = num /2;
        cont +=1;
    }
    cout << "la cantidad de divisiones es  "<< cont << endl;
    aBinario(numero, cont);


}


int SuperArray::  aBinario(int num, int cont){
    if (num ==0){
        temp = 0;
    }
    else if (num%2 ==0) {

        temp=  1 * pow (10, cont);
    }
    else{
        temp= 1;
    }
    while (num >=2){
        temp +=  (num % 2) * pow (10, cont);
        cont --;
        num = num /2;
    }
    cout << "En binario " << temp<< endl;
    aTexto(num);

}


void SuperArray::  aTexto(int num){
    fichero.open("BigArray");
    fichero<< num;
    fichero.close();
}

void SuperArray::  aArray(){
    ifstream fichero;
    string frase;
    int num;
    int c;

    for ( c= 1; c <= 4000; c++)
    fichero.open ("BigArray");
    getline(fichero, frase);
    fichero.close();
    cout << "Frase leida: " << frase << endl;
    num = std::stoi( frase );
    cout << num;
    arreglo[c] = num;
}
