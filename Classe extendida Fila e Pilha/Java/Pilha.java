import java.util.Stack;

public class Pilha extends Lista {
    private Stack<Integer> pilha;

    public Pilha(){
        super();
        this.pilha = new Stack<>();
    }

    public int first(){
        if (this.pilha.empty()){
            System.out.println("pilha vazia\n");
            return -1;
        } else return this.pilha.peek();
    }

    public void insere(int value){
        this.pilha.push(value);
        this.incElem();
    }

    public int retira(){
        this.decElem();
        return this.pilha.pop();
    }
}