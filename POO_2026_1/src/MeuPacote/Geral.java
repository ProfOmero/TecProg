package MeuPacote;

import java.util.Scanner;

public class Geral {
    
  public static String repetir() {
    int i;
    String result = "";
    for(i=1; i<=20; i++) {
      result += '=';
    }
    return(result);
  }
  
  public static String repetir(char tipo) {
    int i;
    String result = "";
    for(i=1; i<=20; i++) {
      result += tipo;
    }
    return(result);
  }
  
  public static String repetir(char tipo, int n) {
    int i;
    String result = "";
    for(i=1; i<=n; i++) {
      result += tipo;
    }
    return(result);
  }

  public static String repetir(String tipo, int n) {
    int i;
    String result = "";
    for(i=1; i<=n; i++) {
      result += tipo;
    }
    return(result);
  }
  
  public static boolean confirmou(String titulo) {
    Scanner ler = new Scanner(System.in);
    
    String cf;
    
    System.out.print(titulo);
    cf = ler.next();
    
    return(cf.equalsIgnoreCase("S"));
  }

}
