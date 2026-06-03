package MeuPacote;

import java.util.Scanner;

public class Vetor {
  
  public static void entrada(String nome, int x[]) {
    Scanner ler = new Scanner(System.in);
    
    int i, n = x.length;
    
    for(i=0; i<n; i++) {
      System.out.printf("%do. item de %d, %s[%d] = ", (i+1), n, nome, i);
      x[i] = ler.nextInt();
    }
    
    System.out.println();
  }
  
  public static String mostrar(String nome, int x[]) {
    int i, n = x.length;
    String result;
    
    result = nome + " = { ";
    for(i=0; i<n; i++) {
      result += String.format("%d ", x[i]);
    }
    result += "}";
    
    return(result);    
  }
  
  public static int sum(int x[]) {
    int i, n = x.length, sm = 0;
    
    for(i=0; i<n; i++) {
      sm = sm + x[i];
    }
    
    return(sm);
  }
  
  public static double avg(int x[]) {
    return(sum(x) / (double)x.length);
  }
  
  public static int min(int x[]) {
    int i, n = x.length, menor = x[0];
    for(i=1; i<n; i++) {
      if (x[i] < menor)
          menor = x[i];
    }
    return(menor);
  }
  
  public static int max(int x[]) {
    int i, n = x.length, maior = x[0];
    for(i=1; i<n; i++) {
      if (x[i] > maior)
          maior = x[i];
    }
    return(maior);
  }
  
  public static String toString(String nome, int x[]) {
    String result = mostrar(nome, x) + "\n\n";
    
    result += String.format("Soma dos valores = %d\n", sum(x)) +
              String.format("Valor médio      = %.2f\n", avg(x)) +
              String.format("Menor valor      = %d\n", min(x)) +
              String.format("Maior valor      = %d\n\n", max(x));
    
    return result;
  }
  
}
