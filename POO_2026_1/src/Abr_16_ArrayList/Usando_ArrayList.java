package Abr_16_ArrayList;

import MeuPacote.Geral;
import java.util.ArrayList;
import java.util.Scanner;

public class Usando_ArrayList {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      ArrayList<String> patota = new ArrayList();
      String nome;
      
      while (true) {
        mostrar_II(patota);
        
        System.out.println();
          
        System.out.println("Informe um nome (FIM para encerrar):");
        nome = ler.nextLine();
        if (nome.equalsIgnoreCase("FIM"))
            break;
        
        patota.add(nome);
        
        System.out.println();
      }
      
    }
    
    public static void mostrar_I(ArrayList<String> x) {
      int i, n = x.size();
      System.out.println("Posiçao Nome_________________________________");
      for(i=0; i<n; i++) {
        System.out.printf("%7d %s\n", i, x.get(i));
      }
      System.out.println(Geral.repetir("=", 45));
    }
    
    public static void mostrar_II(ArrayList<String> x) {
      int i = 0;
      System.out.println("Posiçao Nome_________________________________");
      for(String item: x) {
        System.out.printf("%7d %s\n", i, item);
        i = i + 1;
      }
      System.out.println(Geral.repetir("=", 45));      
    }

}
