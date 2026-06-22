package POO;

public class Usando_Time {

    public static void main(String[] args) {
      Time meuTime = new Time(1, "Meu Time", new Pessoa(11, "Meu Técnico", 'M', new Data(1, 1, 1990)));
          
      meuTime.adicionarJogador(new Jogador(33, "Jogador 1", 'M', new Data(1, 1, 2000), 1, 10000.00));
      meuTime.adicionarJogador(new Jogador(34, "Jogador 2", 'M', new Data(1, 1, 2001), 2, 11000.00));
      meuTime.adicionarJogador(new Jogador(35, "Jogador 3", 'M', new Data(1, 1, 2002), 3, 12000.00));
      meuTime.adicionarJogador(new Jogador(36, "Jogador 4", 'M', new Data(1, 1, 2003), 3, 13000.00));
      meuTime.adicionarJogador(new Jogador(37, "Jogador 5", 'M', new Data(1, 1, 2004), 4, 14000.00));
      meuTime.adicionarJogador(new Jogador(38, "Jogador 6", 'M', new Data(1, 1, 2005), 4, 15000.00));
      
      meuTime.mostrarTime();
    }

}
