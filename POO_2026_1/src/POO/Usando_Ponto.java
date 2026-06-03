package POO;

import java.util.ArrayList;
import java.util.Scanner;

public class Usando_Ponto {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      ArrayList<Ponto> meusPontos = new ArrayList();
      
      int i, n;
      
      System.out.print("Quantos pontos? ");
      n = ler.nextInt();
      
      System.out.println();
      for(i=0; i<n; i++) {
        Ponto p = new Ponto(0, 0);
        
        System.out.printf("%do. ponto\n", (i+1));
        p.entrada();
        
        meusPontos.add(p);
        
        System.out.println();
      }
      
      System.out.println();
      for(i=0; i<n; i++) {
        System.out.printf("%do. ponto: %s", (i+1), meusPontos.get(i).toString());
      }
      
    }

}
