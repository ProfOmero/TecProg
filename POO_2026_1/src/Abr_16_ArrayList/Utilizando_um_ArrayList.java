package Abr_16_ArrayList;

import java.util.ArrayList;

public class Utilizando_um_ArrayList {

    public static void main(String[] args) {
      ArrayList<String> x = new ArrayList();
      
      System.out.println("Depois de criar, Tamanho = " + x.size());
      
      x.add("Juca Bala");
      x.add("Joaquim Bertol");
      x.add("Alzemiro Bertol");
      x.add("Terezinha Lurdes Bertol");
      x.add("Vanessa Babinski");
      x.add(2, "Antônio Conselheiro");
      
      x.remove(0);
      
      System.out.println();
      int i, n = x.size();
      for(i=0; i<n; i++) {
        System.out.printf("%d: %s\n", i, x.get(i));
      }
      
      System.out.println();
      System.out.println("Tamanho = " + x.size());
    }

}
