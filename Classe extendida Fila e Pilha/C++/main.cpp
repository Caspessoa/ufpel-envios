#include <iostream>
#include <list>
#include <queue>
#include <stack>

#include "lista.h"
#include "fila.h"
#include "pilha.h"

int main(){
    Fila minhaFila;
    Pilha minhaPilha;
    
    minhaFila.insere(1);
    minhaFila.insere(2);
    std::cout << "Primeiro: " << minhaFila.first() << std::endl;
    minhaFila.insere(3);
    std::cout << "Tamanho: " << minhaFila.size() << std::endl;

    minhaFila.retira();
    minhaFila.retira();
    std::cout << "Tamanho: " << minhaFila.size() << std::endl;
    minhaFila.retira();
    std::cout << "Tamanho: " << minhaFila.size() << std::endl;



    minhaPilha.insere(1);
    minhaPilha.insere(2);
    std::cout << "Primeiro: " << minhaPilha.first() << std::endl;
    minhaPilha.insere(3);
    std::cout << "Tamanho: " << minhaPilha.size() << std::endl;

    minhaPilha.retira();
    minhaPilha.retira();
    std::cout << "Primeiro: " << minhaPilha.first() << std::endl;
    minhaPilha.retira();
    std::cout << "Tamanho: " << minhaPilha.size() << std::endl;




    return 0;
}