package Abr_28_try;

import java.util.InputMismatchException;
import java.util.Scanner;

public class Tratamento_De_Excecao {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      try {
        int a, b, divInt, resto;
        double divReal;

        System.out.print("a: ");
        a = ler.nextInt();

        System.out.print("b: ");
        b = ler.nextInt();

        divInt = a / b;
        divReal = a / (double)b;
        resto = a % b;

        System.out.println();
        System.out.printf("%d / %d = %d (divisão inteira)\n", a, b, divInt);
        System.out.printf("%d / %d = %.2f (divisão real)\n", a, b, divReal);
        System.out.printf("%d %% %d = %d (resto da divisão)\n", a, b, resto);
      }
      catch(ArithmeticException e1) {
          System.out.println("Erro: divisão por zero!!!");
      }
      catch(InputMismatchException e2) {
          System.out.println("Erro: tipo de dados incompatível!!!");
      } 
    }

}
