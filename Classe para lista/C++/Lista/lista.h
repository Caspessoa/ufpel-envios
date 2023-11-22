#ifndef __LISTA_H_
#define __LISTA_H_


#define TAM 20


class Lista {
public:
    Lista(){
        nElementos = 0;
        vetor = new int[TAM];
    }
    
    void insere(int value);  // Deve inserir um elemento na lista (na frente ou no final, tanto faz)
    void retira(); // Deve retirar um elementa da lista (do final ou da frente, tanto faz)
    void destroy();
    int first(); // Retorna o valor armazenado no início da lista
    int last(); // Retorna o valor armazenado no final da lista
    int size(); // Retorna o número de elementos da lista

private:
    int *vetor;
    int nElementos;
};









#endif