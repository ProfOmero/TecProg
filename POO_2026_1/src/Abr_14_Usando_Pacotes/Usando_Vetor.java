package Abr_14_Usando_Pacotes;

import MeuPacote.Vetor;

public class Usando_Vetor {

    public static void main(String[] args) {
      int a[] = new int[5];
      int b[] = new int[7];
      
      Vetor.entrada("vetor A", a);
      Vetor.entrada("vetor B", b);
      
      System.out.println(Vetor.toString("vetor A", a));
      System.out.println(Vetor.toString("vetor B", b));
    }

}
