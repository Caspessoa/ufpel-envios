#include <iostream>
#include "lista.h"

int main(){
    Lista a;
    a.insere(3);
    std::cout << "Primeiro " << a.first() << " Ultimo " << a.last() << std::endl;
    a.insere(4);
    std::cout << "Primeiro " << a.first() << " Ultimo " << a.last() << std::endl;
    a.insere(5);
    std::cout << "Primeiro " << a.first() << " Ultimo " << a.last() << std::endl;
    std::cout << "Tamanho " << a.size() << std::endl;
    a.retira();
    std::cout << "Tamanho " << a.size() << std::endl;
    std::cout << "Primeiro " << a.first() << " Ultimo " << a.last() << std::endl;




    return 0;
}