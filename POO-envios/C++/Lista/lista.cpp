#include <iostream>
#include "lista.h"

void Lista::insere(int value){
    if(nElementos < TAM){
        this->vetor[nElementos] = value;
        this->nElementos++;
    }
    else std::cout << "Número máximo de elementos atingidos" << std::endl;
}

void Lista::retira(){
    if(nElementos > 0){
        this->vetor[nElementos] = -1;
        this->nElementos--;
    }
    else std::cout << "Impossível retirar mais elementos" << std::endl;
}

int Lista::first(){
    if(this->vetor[0] != -1){
        return vetor[0];
    }
    else std::cout << "Lista vazia" << std::endl; return -1;
}

int Lista::last(){
    if(this->vetor[0] != -1){
        return vetor[nElementos - 1];
    }
    else std::cout << "Lista vazia" << std::endl; return -1;
}

int Lista::size(){
    return nElementos;
}

void Lista::destroy(){
    delete this->vetor;
}