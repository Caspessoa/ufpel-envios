#include <iostream>
#include <list>
#include "lista.h"

// incrementa o tamanho
void Lista::incElem(){
    this->nElementos++;
}

// decrementa o tamanho
void Lista::decElem(){
    this->nElementos--;
}

// insere um valor no início da lista
void Lista::insere(int value){
    this->lista.push_front(value);
    this->incElem();
}

// retorna o primeiro elemento da lista
int Lista::first(){
    if(this->lista.empty()){
        std::cout << "lista vazia" << std::endl;
        return -1;
    } else return this->lista.front();
}

// retorna o tamanho da lista
int Lista::size(){
    return nElementos;
}


