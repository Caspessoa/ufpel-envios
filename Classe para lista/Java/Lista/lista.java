public class lista {
    private int nElementos, vetor[];

    public lista() {
        this.nElementos = 0;
        this.vetor = new int[20];
    }
    public void insere(int value){
        if(nElementos < 20){
            this.vetor[this.nElementos] = value;
            this.nElementos++;
        }
        else {
            System.out.println("Número máximo de elementos atingidos\n");
        }
    }  // Deve inserir um elemento na lista (na frente ou no final, tanto faz)
    public void retira(){
        if(nElementos > 0){
            this.vetor[this.nElementos] = -1;
            this.nElementos--;
        }
        else {
            System.out.println("Impossível retirar mais elementos\n");
        }
    } // Deve retirar um elementa da lista (do final ou da frente, tanto faz)
    public int first(){
        if(this.vetor[0] != -1){
            return vetor[0];
        }
        else {
            System.out.println("Lista vazia\n"); 
            return -1;
        }
    } // Retorna o valor armazenado no início da lista
    public int last(){
        if(this.vetor[0] != -1){
            return vetor[this.nElementos];
        }
        else {
            System.out.println("Lista vazia\n"); 
            return -1;
        }
    } // Retorna o valor armazenado no final da lista
    public int size(){
        return this.nElementos;
    } // Retorna o número de elementos da lista
}