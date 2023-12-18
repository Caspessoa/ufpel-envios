import java.util.ArrayDeque;

public class Fila extends Lista {
    private ArrayDeque<Integer> fila;

    public Fila(){
        super();
        this.fila = new ArrayDeque<>();
    }

    public int first(){
        if (this.fila.isEmpty()){
            System.out.println("fila vazia\n");
            return -1;
        } else return this.fila.getFirst();
    }

    public void insere(int value){
        this.fila.offer(value);
        this.incElem();
    }

    public int retira(){
        this.decElem();
        return this.fila.poll();
    }
}