package Mar_31_Introducao;

import java.util.Scanner;

public class Tabuada {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      int i, n;
      
      System.out.println();
      
      do {
         System.out.print("N (de 1 até 9): ");
         n = ler.nextInt();
      } while ((n < 1) || (n > 9));
      
      System.out.println();
      
      System.out.println("+-------------+");
      for(i=1; i<=10; i++) {
        System.out.printf("| %d x %2d = %2d |\n", n, i, (n*i));
      }
      System.out.println("+-------------+");
    }

}
