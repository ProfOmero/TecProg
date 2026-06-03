package Abr_09_Metodos;

import java.util.Scanner;

public class IMC_Sequencial {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String nome;
      double pc, alt, vlrIMC;
      
      System.out.print("Nome do Paciente......: ");
      nome = ler.nextLine();
      
      System.out.print("Peso Corporal (em kgs): ");
      pc = ler.nextDouble();
      
      System.out.print("Altura (em metros)....: ");
      alt = ler.nextDouble();
      
      vlrIMC = pc / (alt * alt);
      
      System.out.printf("Valor do IMC.........: %.2f ", vlrIMC);      
      if (vlrIMC < 18.5)
          System.out.println("<<< Abaixo do Normal >>>");
      else if (vlrIMC < 25.0)
              System.out.println("<<< Normal >>>");
           else if (vlrIMC < 30.0)
                   System.out.println("<<< Sobrepeso >>>");
                else if (vlrIMC < 35.0)
                        System.out.println("<<< Obesidade Grau I >>>");
                     else if (vlrIMC < 40.0)
                             System.out.println("<<< Obesidade Grau II >>>");
                         else System.out.println("<<< Obesidade Grau III >>>");
    }

}
