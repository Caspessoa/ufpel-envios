pub struct Complexo {
    r: f64
    i: f64
}
impl Complexo {
    pub fn new(real: f64, imaginary: f64) -> Complexo {
        Complexo { 
            r: real;
            i: imaginary;
        }
    }
    pub fn somaComplexa(&mut self, a: Complexo, b: Complexo) {
        self.r = a.r + b.r;
        self.i = a.i + b.i;
    }
 
    pub fn subComplexa(&mut self, a: Complexo, b: Complexo) {
        self.r = a.r - b.r;
        self.i = a.i - b.i;
    }

    pub fn multComplexa(&mut self, a: Complexo, b: Complexo) {
        self.r = a.r*b.r + a.i*b.i;
        self.i = a.r*b.i + a.i*b.r;
    }
    
    pub fn divComplexa(&mut self, a: Complexo, b: Complexo) {
        if b.r == 0 && b.i == 0 {
            println!("Divisão impossível");
        } else {
            let mut Conjugado = Complexo::new(b.r, -b.i);
            let mut Nominador = Complexo::new(0,0);
            let mut Denominador = Complexo::new(0,0);
            Nominador.multComplexa(a, Conjugado);
            Denominador.multComplexa(b, Conjugado);
            self.r = Nominador.r / Denominador.r;
            self.i = Nominador.i / Denominador.i;
        }
    }


}