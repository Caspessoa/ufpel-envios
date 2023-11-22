#ifndef COFRINHO_H
#define COFRINHO_H

class Banco {
public:
    Banco();  //Construtor
    void depositaEmBanco(int valor, std::string nome);
    void sacaEmBanco(int valor, std::string nome);
    int saldoAtualEmBanco();

private:
    int saldo;
    std::string identificador;
};

#endif // COFRINHO_H

