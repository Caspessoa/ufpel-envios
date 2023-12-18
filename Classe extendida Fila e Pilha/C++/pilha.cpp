#include <iostream>
#include <stack>
#include "lista.h"
#include "pilha.h"

int Pilha::first(){
    if(this->pilha.empty()){
        std::cout << "Pilha vazia" << std::endl;
        return -1;
    } else return this->pilha.top();
}

void Pilha::insere(int value){
    this->pilha.push(value);
    this->incElem();
}

void Pilha::retira(){
    if(this->pilha.empty()){
        std::cout << "Pilha vazia" << std::endl;
        return;
    } else this->pilha.pop(); this->decElem();
}