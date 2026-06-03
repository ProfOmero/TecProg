package Mar_31_Introducao;

import java.util.Scanner;

public class Decimal_para_Binario {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String binario = "";
      int decimal;
      
      System.out.print("Valor Decimal: ");
      decimal = ler.nextInt();
      
      System.out.println();
      
      System.out.print(decimal + " = ");
      
      do {
        binario = (decimal % 2) + binario;
        decimal = decimal / 2;        
      } while (decimal != 0);
      
      System.out.println(binario);
    }

}
