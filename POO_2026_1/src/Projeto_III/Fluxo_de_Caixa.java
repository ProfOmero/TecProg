package Projeto_III;

import java.util.ArrayList;

public class Fluxo_de_Caixa {

    public static void main(String[] args) {
      ArrayList<Movimentacao> movtos = new ArrayList(); 
      
      movtos.add(new Movimentacao(1, "Salário", new Data(3, 11, 2025), 'C', 7500.00));
      movtos.add(new Movimentacao(2, "Abastecer o carro", new Data(4, 11, 2025), 'D', 345.75));
      movtos.add(new Movimentacao(3, "Supermercado", new Data(4, 11, 2025), 'D', 542.30));
      movtos.add(new Movimentacao(4, "Aulas de música", new Data(5, 11, 2025), 'D', 400.00));
      movtos.add(new Movimentacao(5, "Mensalidade da Escola", new Data(6, 11, 2025), 'D', 2250.00));
      
      Movimentacao.listarMovimentacoes(movtos);
    }

}
