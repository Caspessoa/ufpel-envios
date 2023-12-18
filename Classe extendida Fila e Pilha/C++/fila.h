#ifndef __FILA_H_
#define __FILA_H_

#include <queue>
#include "lista.h"

class Fila : public Lista {
    private:
    std::queue<int> fila;

    public:
    Fila() : Lista(){};

    int first() override;
    void insere(int value) override;
    void retira() override;

};


#endif