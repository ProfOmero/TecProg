package Abr_09_Metodos;

public class Tabuada_Sequencial {

  public static void main(String[] args) {
    int i, n;

    n = 5;
    for(i=1; i<=10; i++) {
      System.out.printf("%d x %d = %d\n", 
        n, i, (n*i));  
    }
    System.out.println();
    
    n = 7;
    for(i=1; i<=10; i++) {
      System.out.printf("%d x %d = %d\n", 
        n, i, (n*i));  
    }
    System.out.println();

    n = 9;
    for(i=1; i<=10; i++) {
      System.out.printf("%d x %d = %d\n", 
        n, i, (n*i));  
    }
    System.out.println();
  } 
}
