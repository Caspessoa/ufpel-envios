class Cofrinho:
    def __init__(self):
        self.saldo = 0
        self.identificador = "Cassiano"

    def deposita(self, valor, nome):
        if valor > 0 and nome == self.identificador:
            self.saldo += valor
        else:
            print("O valor ou o destino está incorreto.")

    def saca(self, valor, nome):
        if valor > 0 and valor <= self.saldo and nome == self.identificador:
            self.saldo -= valor
        elif valor <= 0:
            print("O valor do saque deve ser maior que zero.")
        else:
            print("Saldo insuficiente para o saque ou destino não encontrado.")

    def le_saldo(self):
        return self.saldo

