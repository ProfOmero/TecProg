package Abr_07_Strings;

import java.util.Scanner;

public class Lista_de_Nomes {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String nome, partes[];
      
      while (true) {
        System.out.println("Informe uma lista de nomes (FIM para encerrar):");
        nome = ler.nextLine();
        
        if (nome.equalsIgnoreCase("FIM"))
            break;
        
        partes = nome.split(";");
        
        System.out.println();
        int i, n = partes.length;
        for(i=0; i<n; i++) {
          System.out.printf("%do. nome: %s\n", (i+1), partes[i]);
        }
        
        System.out.println();
      }
      
    }

}
