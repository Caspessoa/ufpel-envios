public class Complexo {
    private float r, i;

    public Complexo() {
        this.r = 0;
        this.i = 0;
    }
    public Complexo(float real, float imaginary) {
        this.r = real;
        this.i = imaginary;
    }

    public void somaComplexa(Complexo a, Complexo b) {
        this.r = a.r + b.r;
        this.i = a.i + b.i;
    }
    public void subComplexa(Complexo a, Complexo b) {
        this.r = a.r - b.r;
        this.i = a.i - b.i;
    }
    public void multComplexa(Complexo a, Complexo b) {
        this.r = a.r*b.r + a.i*b.i;
        this.i = a.r*b.i + a.i*b.r;
    }
    public void divComplexa(Complexo a, Complexo b) {
        if (b.i == 0 && b.r == 0){ // se alguma das partes de B for 0
            //std::cout << "Divisão impossível" << std::endl;
        }  else {
            Complexo Conjugado = new Complexo(b.r, -b.i), Nominador = new Complexo(0,0), Denominador = new Complexo(0,0);
            Nominador.multComplexa(a, Conjugado);
            Denominador.multComplexa(b, Conjugado);
            this.r = Nominador.r / Denominador.r;
            this.i = Nominador.i / Denominador.i;
        }
    }
    public void printComplexa(){
        System.out.println("Parte real: " + this.r + "\nParte imaginária: " + this.i);
    }
}

