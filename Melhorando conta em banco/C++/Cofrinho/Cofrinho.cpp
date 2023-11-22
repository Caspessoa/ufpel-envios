#include <iostream>
#include <string>
#include "Cofrinho.h"

/* Funções criadas */

Banco::Banco() {
    saldo = 0;
    identificador = ("Cassiano");
}

int Banco::saldoAtualEmBanco() {
    return saldo;
}

void Banco::depositaEmBanco(int valor, std::string nome){
    if (valor > 0 && nome == identificador){
        saldo += valor;
        std::cout << "Depositado " << valor << " reais " << "na conta de " << identificador << "." << std::endl;

    } else {
        std::cout << "O valor inserido e/ou o nome de destino está(ão) incorreto(s)." << std::endl;
    }
}
void Banco::sacaEmBanco(int valor, std::string nome){
    if (valor > 0 && valor <= saldo && nome == identificador){
        saldo -= valor;
        std::cout << "Sacado " << valor << " reais " << "da conta de " << identificador << "." << std::endl;
    } else if (valor <= 0){
        std::cout << "O valor do saque deve ser maior que zero." << std::endl;
    } else {
        std::cout << "Saldo insuficiente para o saque e/ou o destino não foi inserido corretamente." << std::endl;
    }
}

