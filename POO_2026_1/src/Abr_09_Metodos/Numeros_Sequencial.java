package Abr_09_Metodos;

public class Numeros_Sequencial {

    public static void main(String[] args) {
      int i, n, sm;
      
      n = 7;
      System.out.print("{ ");
      for(i=1; i<=n; i++) {
        System.out.print(i);
        if (i == n)
            System.out.print(" }");
        else System.out.print(", ");
      }
      
      sm = 0;
      for(i=1; i<=n; i++) {
        sm = sm + i;
      }
      System.out.printf(" soma = %d\n", sm);
      
      n = 10;
      System.out.print("{ ");
      for(i=1; i<=n; i++) {
        System.out.print(i);
        if (i == n)
            System.out.print(" }");
        else System.out.print(", ");
      }
      
      sm = 0;
      for(i=1; i<=n; i++) {
        sm = sm + i;
      }
      System.out.printf(" soma = %d\n", sm);
    }

}
