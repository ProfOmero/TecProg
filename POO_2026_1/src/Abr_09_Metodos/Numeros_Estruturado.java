package Abr_09_Metodos;

public class Numeros_Estruturado {

    public static void main(String[] args) {  
      resultados(7);
      resultados(10);
    }
    
    public static void mostrar(int n) {
      int i;
      System.out.print("{ ");
      for(i=1; i<=n; i++) {
        System.out.print(i);
        if (i == n)
            System.out.print(" }");
        else System.out.print(", ");
      }        
    }
    
    public static int somar(int n) {
      int i, sm = 0;
      for(i=1; i<=n; i++) {
        sm = sm + i;
      }  
      return(sm);      
    }
    
    public static void resultados(int n) {
      mostrar(n);
      System.out.printf(" soma = %d\n", somar(n));        
    }

}
