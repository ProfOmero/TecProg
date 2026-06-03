package Abr_07_Strings;

import java.util.Scanner;

public class Caractere_por_Caractere {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String s;
      int i;
      
      System.out.println("Informe uma String:");
      s = ler.nextLine();
      
      System.out.println();
      int n = s.length();
      for(i=0; i<n; i++) {
        System.out.printf("s[%d] = %c %c %c\n",
          i,
          s.charAt(i),
          Character.toLowerCase(s.charAt(i)),
          Character.toUpperCase(s.charAt(i)));
      }
    }

}
