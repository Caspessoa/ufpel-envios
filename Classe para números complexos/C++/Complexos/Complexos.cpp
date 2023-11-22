#include <iostream>
#include "Complexos.h"

//Supõe-se, em todas as funções, que o usuário saiba a compatibilidade entre os graus do "i"(parte imaginária) para realizar as operações


void Complexo::somaComplexa(Complexo a, Complexo b){ // a > b
    this->r = a.r + b.r;
    this->i = a.i + b.i;
}

void Complexo::subComplexa(Complexo a, Complexo b){ // a > b
    this->r = a.r - b.r;
    this->i = a.i - b.i;
}

void Complexo::multComplexa(Complexo a, Complexo b){ // (a.r + a.i)(b.r + b.i) = a.r*b.r + a.r*b.i + a.i*b.r + a.i*b.i
    this->r = a.r*b.r + a.i*b.i;
    this->i = a.r*b.i + a.i*b.r;
}

void Complexo::divComplexa(Complexo a, Complexo b){
    if (b.i == 0 && b.r == 0){ // se alguma das partes de B for 0
        std::cout << "Divisão impossível" << std::endl;
    }  else {
        Complexo Conjugado(b.r, -b.i), Nominador(0,0), Denominador(0,0);
        Nominador.multComplexa(a, Conjugado);
        Denominador.multComplexa(b, Conjugado);
        this->r = Nominador.r / Denominador.r;
        this->i = Nominador.i / Denominador.i;
    }
}

void Complexo::readComplexa(){
    std::cout << "Digite as partes do número complexo" << std::endl;
    std::cin >> this->r >> this->i;
}

void Complexo::printComplexa(){
    std::cout << "Parte real: " << this->r << " \nParte Imaginária: " << this->i << "\n\n";
}
