package POO;

import java.util.Scanner;

public class Ponto {
  private int x;
  private int y;

    public Ponto(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public int getY() {
        return y;
    }

    public void setY(int y) {
        this.y = y;
    }
    
    public void entrada() {
      Scanner ler = new Scanner(System.in);
      
      System.out.print("Coordenada 'x': ");
      x = ler.nextInt();
      
      System.out.print("Coordenada 'y': ");
      y = ler.nextInt();        
    }
    
    public String posicao() {
      if ((x > 0) && (y > 0))
          return("Q1");
      else if ((x < 0) && (y > 0))
              return("Q2");
           else if ((x < 0) && (y < 0))
                   return("Q3");
                else if ((x > 0) && (y < 0))
                        return("Q4");
                     else if ((x != 0) && (y == 0))
                             return("eixo x");
                          else if ((x == 0) && (y != 0)) 
                                  return("eixo y");
                               else return("origem");
    }

    @Override
    public String toString() {
        return String.format("(x: %d; y: %d) %s\n",
                 x, y, posicao());
    }

}
