class Lista:
    def __init__(self):
        self.nElementos = 0
        self.vetor = []

    def insere(self, value):
        if self.nElementos < 20:
            self.vetor[self.nElementos] = value
            self.nElementos = self.nElementos + 1
        else:
            print("Número máximo de elementos atingidos\n")

    def retira(self):
        if self.nElementos > 0:
            self.vetor[self.nElementos] = -1
            self.nElementos = self.nElementos - 1
        else:
            print("Impossível retirar mais elementos\n")

    def first(self):
        if self.vetor[0] != -1:
            return self.vetor[0]
        else:
            print("Lista vazia\n")
            return -1
        
    def last(self):
        if self.vetor[0] != -1:
            return self.vetor[self.nElementos - 1]
        else:
            print("Lista vazia\n")
            return -1

    def size(self):
        return self.nElementos

        
