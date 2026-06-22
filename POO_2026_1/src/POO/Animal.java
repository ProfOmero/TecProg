package POO;

import MeuPacote.Geral;
import java.util.ArrayList;

public abstract class Animal {
  private String nome;

    public Animal(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public abstract void som();
    
    public static void listarAnimais(ArrayList<Animal> meusAnimais) {
      for(Animal item: meusAnimais) {
        System.out.printf("%s\n", item.toString());         
        item.som();
        if (item instanceof Cachorro)
            ((Cachorro)item).rosnar();
        System.out.println(Geral.repetir("=", 30));
      }  
      
      System.out.printf("Temos %d Cachorro(s)\n", Cachorro.ct);
      System.out.printf("Temos %d Gato(s)\n", Gato.ct);
      System.out.printf("Temos %d Vaca(s)\n", Vaca.ct);
    }

}
