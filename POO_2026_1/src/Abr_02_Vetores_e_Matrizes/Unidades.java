package Abr_02_Vetores_e_Matrizes;

import java.util.Scanner;

public class Unidades {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String unidades[] = {"zero", "um", "dois", "três", "quatro",
               "cinco", "seis", "sete", "oito", "nove"};
      
      int i;
      while (true) {
          
        do {
           System.out.print("Unidade (-1 para encerrar): ");
           i = ler.nextInt();
        } while ((i < -1) || (i > 9));
        
        if (i == -1)
            break;
        
        System.out.printf("<<< %s >>>\n\n", unidades[i]);
      }
      
    }

}
