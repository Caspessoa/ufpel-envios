public class ComplexoMain {
    public static void main(String[] args) {
        // Cria um novo cofrinho
        Complexo A = new Complexo(3, 4), B = new Complexo(4, 3), C = new Complexo(0, 0);

        C.somaComplexa(A, B);
        C.printComplexa();

        C.subComplexa(A, B);
        C.printComplexa();

        C.multComplexa(A, B);
        C.printComplexa();

        C.divComplexa(A, B);
        C.printComplexa();
    }
}