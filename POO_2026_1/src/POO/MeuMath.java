package POO;

import java.util.Scanner;

public class MeuMath {
// atributos (ou propriedades) = dados
  private int a;
  private int b;

// Métodos = códigos
    // método construtor
    public MeuMath(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public int getA() {
        return a;
    }

    public void setA(int a) {
        this.a = a;
    }

    public int getB() {
        return b;
    }

    public void setB(int b) {
        this.b = b;
    }
    
    public void entrada() {
      Scanner ler = new Scanner(System.in);
      
      System.out.print("a: ");
      a = ler.nextInt();
      
      System.out.print("b: ");
      b = ler.nextInt();
    }
    
    public int soma() {
      return(a + b);
    }
    
    public int sub() {
      return(a - b);
    }
    
    public int mult() {
      return(a * b);
    }
    
    public int divInt() {
      if (b != 0)
         return(a / b);
      else return(0);
    }
    
    public double divReal() {
      if (b != 0)
         return(a / (double)b);
      else return(0);
    }

    @Override
    public String toString() {
        String result;
        
        result = String.format("%d + %d = %d\n", a, b, soma()) +
                 String.format("%d - %d = %d\n", a, b, sub()) +
                 String.format("%d x %d = %d\n", a, b, mult()) +
                 String.format("%d / %d = %d (divisão inteira)\n", a, b, divInt()) +
                 String.format("%d / %d = %.2f (divisão real)\n", a, b, divReal());
        
        return(result);
    }
    
    

}
