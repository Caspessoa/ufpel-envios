class Complexo:
    def __init__(self, real, imaginary):
        self.r = real
        self.i = imaginary

    def somaComplexa(self, a, b):
        self.r = a.r + b.r
        self.i = a.i + b.i
        
    def subComplexa(self, a, b):
        self.r = a.r - b.r
        self.i = a.i - b.i

    def multComplexa(self, a, b):
        self.r = a.r*b.r + a.i*b.i
        self.i = a.r*b.i + a.i*b.r
        
    def divComplexa(self, a, b):
        if b.i == 0 and b.r == 0:
            print("Divisão impossível\n")
        else:
            Conjugado = Complexo(b.r, -b.i)
            Nominador = Complexo(b.r, -b.i)
            Denominador = Complexo(b.r, -b.i)
            Nominador.multComplexa(a, Conjugado)
            Denominador.multComplexa(a, Conjugado)
            self.r = Nominador.r / Denominador.r
            self.i = Nominador.i / Denominador.i

    def printComplexa(self):
        print("Parte real: {self.r}\nParte imaginária: {self.i}")
        
