package Abr_02_Vetores_e_Matrizes;

import java.util.Scanner;

public class MeuVetor {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      int n;
      System.out.print("Tamanho do vetor? ");
      n = ler.nextInt();
      
      System.out.println();
      
      int x[] = new int[n]; 
      int i;
      for(i=0; i<n; i++) {
        System.out.printf("%do. valor: ", (i+1));
        x[i] = ler.nextInt();
      }
      
      int sm = 0;
      for(i=0; i<n; i++) {
        sm = sm + x[i];
      }
      
      double md = 0;
      if (n != 0) {
         md = sm / (double)n;
      }
      
      System.out.println();
      System.out.print("x = { ");
      for(i=0; i<n; i++) {
        System.out.printf("%d", x[i]);
        if (i != (n-1)) {
           System.out.print(", ");
        }
      }
      System.out.printf(" } soma = %d; média = %.2f\n", sm, md);
    }

}
