#ifndef __LISTA_H_
#define __LISTA_H_

#include <list>

class Lista {
    private:
    std::list<int> lista;
    int nElementos;
    
    public:
    Lista(){
        this->nElementos = 0;
    }
    
    int size();
    virtual int first();
    virtual void insere(int value);
    void incElem();
    void decElem();
    virtual void retira() = 0; //método virtual puro
    
};


#endif