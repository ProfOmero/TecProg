package POO;

import MeuPacote.Geral;
import java.util.ArrayList;

public class Jogador extends Pessoa {
  private int posicao;
  private double salario;

    public Jogador(int idPessoa, String nome, char sexo, Data dtNasc, int posicao, double salario) {
        super(idPessoa, nome, sexo, dtNasc);
        this.posicao = posicao;
        this.salario = salario;
    }

    public int getPosicao() {
        return posicao;
    }

    public void setPosicao(int posicao) {
        this.posicao = posicao;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
    
    public String ondeJoga() {
      String posicoes[] = {"XXX", "Goleiro", "Lateral-Direito", 
        "Lateral-Esquerdo", "Zagueiro", "Meio-Campo", "Atacante"};
      
      return(posicoes[posicao]);
    }
    
    public static void listarJogadores(ArrayList<Jogador> time) {
      System.out.println("Nome do Jogador.................... .idade. Onde Joga........... ...Salário....");
      System.out.println(Geral.repetir('-', 79));
       
      double totSal = 0;
      for(Jogador item: time) { // for-each
        System.out.print(item.toString()); 
        totSal = totSal + item.getSalario();
      }
      
      System.out.println(MeuPacote.Geral.repetir('-', 79));
      System.out.printf("%64s R$ %11.2f\n", "TOTAL", totSal);
    }

    // Polimorfismo de Sobreposição
    @Override
    public String toString() {
      String result;
      
      result = String.format("%s %d anos %s R$ %11.2f\n", 
                 getNome()+Geral.repetir('.', 35-getNome().length()), getDtNasc().calcularIdade(),
                 ondeJoga()+Geral.repetir('.', 20-ondeJoga().length()), salario);
      
        return result;
    }
  
}
