package POO;

import java.util.ArrayList;

public class Usando_Jogador {

    public static void main(String[] args) {
      ArrayList<Jogador> time = new ArrayList();
      
      time.add(new Jogador(1, "Juca 1", 'M', new Data(3, 1, 2002), 1, 10000.00));
      time.add(new Jogador(2, "Juca 2", 'M', new Data(3, 2, 2002), 1, 20000.00));
      time.add(new Jogador(3, "Juca 3", 'M', new Data(3, 3, 2002), 1, 30000.00));
      time.add(new Jogador(4, "Juca 4", 'M', new Data(3, 4, 2002), 1, 40000.00));
      time.add(new Jogador(5, "Juca 5", 'M', new Data(3, 5, 2002), 1, 50000.00));
      time.add(new Jogador(6, "Juca 6", 'M', new Data(3, 6, 2002), 1, 60000.00));
      time.add(new Jogador(7, "Juca 7", 'M', new Data(3, 7, 2002), 1, 70000.00));
 
      Jogador.listarJogadores(time);
    }

}
