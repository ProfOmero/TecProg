package Abr_28_try;

import MeuPacote.Geral;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.InputMismatchException;
import java.util.Scanner;

public class Cadastrar_PacientesIMC {

    public static void main(String[] args) throws IOException {
      Scanner ler = new Scanner(System.in);
      
      String nome;
      double pc, alt;
      
      try {
        FileWriter arq = new FileWriter("pacientes.txt", true);
        PrintWriter gravarArq = new PrintWriter(arq);

        while (true) {
          System.out.println("Nome do Paciente (FIM para encerrar)");
          nome = ler.nextLine();
          if (nome.equalsIgnoreCase("FIM"))
              break;

          System.out.println();
          System.out.print("Peso Corporal (em kgs): ");
          pc = ler.nextDouble();

          System.out.print("Altura (em metros)....: ");
          alt = ler.nextDouble();

          ler.nextLine(); // limpa o buffer de entrada de dados

          System.out.println();
          
          if (Geral.confirmou("Cadastrar o Paciente (S/*): ")) {
              gravarArq.printf("%s;%f;%f\n", nome, pc, alt);
          }
          
          System.out.println();
        }

        gravarArq.close();
      }
      catch (IOException e1) {
        System.out.printf("Erro: %s\n", e1.getMessage());
      } 
      catch (InputMismatchException e2) {
        System.out.println("Erro: tipos de dados incompatíveis!!!");
      }
      
    }

}
