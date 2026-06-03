package Abr_07_Strings;

import java.util.Scanner;

public class Qual_ASCII {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      int i;
      
      while (true) {
          
        do {
           System.out.print("Posição, -1 para encerrar: ");
           i = ler.nextInt();
        } while ((i < -1) || (i > 255));
        
        if (i == -1)
            break;
        
        System.out.printf("%d - %c\n\n", i, (char)i);        
      }
    }

}
