public class Cofrinho {
    private int saldo; 
    private String identificador;

    // Método para criar um novo cofrinho com saldo zero
    public Cofrinho() {
        saldo = 0;
        identificador = "Cassiano";
    }

    // Método para depositar dinheiro no cofrinho
    public void deposita(int valor, String nome) {
        if (valor > 0 && nome == identificador) {
            saldo += valor;
            System.out.println("Depositado " + valor + " reais " + "na conta de " + nome);
        } else {
            System.out.println("Valor ou destino incorreto(s)");
        }
    }

    // Método para sacar dinheiro do cofrinho
    public void saca(int valor, String nome) {
        if (valor > 0 && valor <= saldo && nome == identificador) {
            saldo -= valor;
            System.out.println("Sacado " + valor + " reais " + "da conta de " + nome);
        } else if (valor <= 0) {
            System.out.println("O valor do saque deve ser maior que zero.");
        } else {
            System.out.println("Saldo insuficiente para o saque e/ou destino incorreto");
        }
    }

    // Método para verificar o saldo atual do cofrinho
    public int saldoAtual() {
        return saldo;
    }
}

