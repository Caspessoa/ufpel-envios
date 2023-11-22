#include <iostream>
#include "Cofrinho.h"

int main() {
    // Cria um novo cofrinho no banco
    Banco meuCofrinhoEmBanco;

    std::cout << "Operações de depósito e saque em Banco:" << std::endl;
    // Realiza operações de depósito e saque no banco
    meuCofrinhoEmBanco.depositaEmBanco(1000, "Cassiano");
    meuCofrinhoEmBanco.sacaEmBanco(500, "Cassiano");

    // Verifica e exibe o saldo atual
    int saldoAtualEmConta = meuCofrinhoEmBanco.saldoAtualEmBanco();
    std::cout << "Saldo atual no banco: " << saldoAtualEmConta << " reais" << std::endl;
    

    return 0;
}

