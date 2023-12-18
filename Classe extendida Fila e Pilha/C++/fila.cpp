#include <iostream>
#include <queue>
#include "lista.h"
#include "fila.h"

int Fila::first(){
    if(this->fila.empty()){
        std::cout << "Fila vazia" << std::endl;
        return -1;
    } else return this->fila.front();
}

void Fila::insere(int value){
    this->fila.push(value);
    this->incElem();
}

void Fila::retira(){
    if(this->fila.empty()){
        std::cout << "Fila vazia" << std::endl;
        return;
    } else this->fila.pop(); this->decElem();
}