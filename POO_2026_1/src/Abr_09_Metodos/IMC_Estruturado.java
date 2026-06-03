package Abr_09_Metodos;

import java.util.Scanner;

public class IMC_Estruturado {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String nome;
      double pc, alt;
      
      System.out.print("Nome do Paciente......: ");
      nome = ler.nextLine();
      
      System.out.print("Peso Corporal (em kgs): ");
      pc = ler.nextDouble();
      
      System.out.print("Altura (em metros)....: ");
      alt = ler.nextDouble();
      
      System.out.println();
      System.out.println(toString(nome, pc, alt)); 
    }
    
    public static double calcularIMC(double pc, double alt) {
      return(pc / (alt * alt)); 
    }
    
    public static String interpretarIMC(double pc, double alt) {
      double vlrIMC = calcularIMC(pc, alt);
      
      if (vlrIMC < 18.5)
          return("<<< Abaixo do Normal >>>");
      else if (vlrIMC < 25.0)
              return("<<< Normal >>>");
           else if (vlrIMC < 30.0)
                   return("<<< Sobrepeso >>>");
                else if (vlrIMC < 35.0)
                        return("<<< Obesidade Grau I >>>");
                     else if (vlrIMC < 40.0)
                             return("<<< Obesidade Grau II >>>");
                         else return("<<< Obesidade Grau III >>>");
    }
    
    public static String toString(String nome, double pc, double alt) {
      double vlrIMC = calcularIMC(pc, alt);
      String result;
      
      result = String.format("Nome do Paciente: %s\n", nome) +
               String.format("Peso Corporal...: %.3f kgs\n", pc) +
               String.format("Altura..........: %.2f metros\n", alt) +
               String.format("Valor do IMC....: %.2f (%s)\n", vlrIMC, 
                 interpretarIMC(pc, alt));
      
      return(result);
    }

}
