package Abr_14_Usando_Pacotes;

import MeuPacote.Aluno;
import java.util.Scanner;

public class Usando_Aluno {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String nome;
      double nf, freq;
      
      while(true) {
        System.out.println("Nome do(a) Aluno(a) - FIM para encerrar:");
        nome = ler.nextLine();
        if (nome.equalsIgnoreCase("FIM"))
            break;
        
        System.out.println();
        
        System.out.print("Frequência: ");
        freq = ler.nextDouble();
        
        System.out.print("Nota Final: ");
        nf = ler.nextDouble();
        
        ler.nextLine(); // limpa o buffer de entrada de dados
        
        System.out.println();
        System.out.println(Aluno.toString(nome, nf, freq));
        System.out.println();
      }
      
    }

}
