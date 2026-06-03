package Mar_31_Introducao;

import java.util.Scanner;

public class Operacoes_Aritmeticas {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      int a, b, soma, sub, mult, divInt, resto;
      double divReal;
      
      System.out.print("A: ");
      a = ler.nextInt();
      
      System.out.print("B: ");
      b = ler.nextInt();
      
      soma = a + b;
      sub = a - b;
      mult = a * b;
      divInt = a / b;
      resto = a % b;
      divReal = a / (double)b;
      
      System.out.println();
      System.out.println(a + " + " + b + " = " + soma);
      System.out.println(a + " - " + b + " = " + sub);
      System.out.println(a + " x " + b + " = " + mult);
      System.out.println(a + " / " + b + " = " + divReal + " (divisão real)");
      System.out.println(a + " / " + b + " = " + divInt + " (divisão inteira)");
      System.out.println(a + " % " + b + " = " + resto + " (resto da divisão inteira)");     
    }

}
