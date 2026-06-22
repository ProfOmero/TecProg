package POO;

import java.util.ArrayList;

public class Time {
  private int idTime;
  private String nomeTime;
  private Pessoa tecnico; // relacionamento de associação
  private ArrayList<Jogador> jogadores; // relacionamento de agregação

    public Time(int idTime, String nomeTime, Pessoa tecnico) {
        this.idTime = idTime;
        this.nomeTime = nomeTime;
        this.tecnico = tecnico;
        
        this.jogadores = new ArrayList();
    }

    public int getIdTime() {
        return idTime;
    }

    public void setIdTime(int idTime) {
        this.idTime = idTime;
    }

    public String getNomeTime() {
        return nomeTime;
    }

    public void setNomeTime(String nomeTime) {
        this.nomeTime = nomeTime;
    }

    public Pessoa getTecnico() {
        return tecnico;
    }

    public void setTecnico(Pessoa tecnico) {
        this.tecnico = tecnico;
    }
    
    public void adicionarJogador(Jogador novoJogador) {
      jogadores.add(novoJogador);
    }
    
    public void mostrarTime() {
      System.out.printf("%s\n", nomeTime);
      System.out.printf("Técnico: %s (%d anos)\n\n",
        tecnico.getNome(), tecnico.getDtNasc().calcularIdade());
      
      Jogador.listarJogadores(jogadores);
    }

}
