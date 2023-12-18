#ifndef __PILHA_H_
#define __PILHA_H_

#include <stack>
#include "lista.h"

class Pilha : public Lista {
    private:
    std::stack<int> pilha;

    public:
    Pilha() : Lista(){};

    int first() override;
    void insere(int value) override;
    void retira() override;

};

#endif