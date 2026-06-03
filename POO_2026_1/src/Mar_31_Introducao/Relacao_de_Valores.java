package Mar_31_Introducao;

import java.util.Scanner;

public class Relacao_de_Valores {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      int i, a, b, n;
      
      System.out.println("Quantos pares de valores? ");
      n = ler.nextInt();
      
      for(i=1; i<=n; i++) {
        System.out.println();
        
        System.out.printf("%do. par de valores", i);
        
        System.out.print("A: ");
        a = ler.nextInt();
        
        System.out.print("B: ");
        b = ler.nextInt();
        
        System.out.println();
        
        if (a < b)
            System.out.println(a + " < " + b);
        else if (a == b)
                System.out.println(a + " = " + b);
             else System.out.println(a + " > " + b);
      }
      
    }

}
