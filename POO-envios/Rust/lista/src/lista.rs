pub struct lista {
    nElementos: i32
    vetor: vec(i32)
}

impl lista {
    pub fn new() -> lista {
        lista {
            nElementos: 0;
            vetor: Vec::new();
        }
    }

    pub fn insere(&mut self, value: i32) {
        if nElementos < 20 {
            self.vetor[0] = value;
            self.nElementos = self.nElementos + 1;
        } else {
            println!("Número máximo de elementos atingidos");
        }
    }
    pub fn retira(&mut self) {
        if nElementos > 0 {
            self.vetor[0] = -1;
            self.nElementos = self.nElementos - 1;
        } else {
            println!("Impossível retirar mais elementos");
        }
    }
    pub fn first(&mut self) -> i32 {
        if self.vetor[0] != -1 {
            vetor[0]
        } else println!("Lista vazia"); -1
    }
    pub fn last(&mut self) -> i32 {
        if self.vetor[0] != -1 {
            vetor[self.nElementos - 1]
        } else println!("Lista vazia"); -1
    }
    pub fn size(&mut self) -> i32 {
        self.nElementos
    }
}