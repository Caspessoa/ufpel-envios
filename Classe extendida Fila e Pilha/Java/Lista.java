import java.util.LinkedList;

public class Lista {
    private LinkedList<Integer> lista;
    private int nElementos;

    public Lista(){
        this.lista = new LinkedList<>();
        this.nElementos = 0;
    }

    // retorna o tamanho da lista
    public int size(){
        return this.nElementos;
    }

    // retorna o primeiro elemento
    public int first(){
        if (this.lista.isEmpty()){
            System.out.println("lista vazia\n");
            return -1;
        } else return this.lista.getFirst();
    }

    
    // incrementa o nElementos
    public void incElem(){
        this.nElementos++;
    }
    
    // decrementa o nElementos
    public void decElem(){
        this.nElementos--;
    }
    
    // insere no início da lista
    public void insere(int value){
        this.lista.addFirst(value);
        this.incElem();
    }
    public abstract int retira(); //método virtual puro
}