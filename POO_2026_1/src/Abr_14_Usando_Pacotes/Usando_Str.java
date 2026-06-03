package Abr_14_Usando_Pacotes;

import MeuPacote.Str;
import java.util.Scanner;

public class Usando_Str {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String s;
      
      System.out.println("Informe uma String:");
      s = ler.nextLine();
      
      System.out.println();
      
      int i, n = s.length();
      for(i=0; i<n; i++) {
        System.out.print(s.charAt(i));
        if (Str.ehVogal(s.charAt(i)))
            System.out.println(" <--- vogal");
        else if (Str.ehConsoante(s.charAt(i)))
                 System.out.println(" <--- consoante");
             else if (Str.ehNumero(s.charAt(i)))
                     System.out.println(" <--- número");   
                  else System.out.println();
      }
    }

}
