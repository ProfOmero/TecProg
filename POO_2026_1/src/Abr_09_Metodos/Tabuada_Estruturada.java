package Abr_09_Metodos;

public class Tabuada_Estruturada {

    public static void main(String[] args) {   
      tabuada(5);
      tabuada(7);  
      tabuada(9);   
    }
    
    public static void tabuada(int n) {
      int i;
      for(i=1; i<=10; i++) {
        System.out.printf("%d x %d = %d\n", n, i, (n*i));  
      }
      System.out.println();    
    }

}
