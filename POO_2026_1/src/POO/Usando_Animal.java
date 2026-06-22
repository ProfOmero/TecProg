package POO;

import java.util.ArrayList;

public class Usando_Animal {

    public static void main(String[] args) {
      ArrayList<Animal> meusAnimais = new ArrayList();
      
      meusAnimais.add(new Cachorro("Juca Bala"));
      meusAnimais.add(new Gato("Luna"));
      meusAnimais.add(new Vaca("Cara Chata"));
      meusAnimais.add(new Cachorro("Bidu"));
      meusAnimais.add(new Cachorro("Maya"));
      meusAnimais.add(new Cachorro("Givanildo"));
      meusAnimais.add(new Gato("Manda-Chuva"));
      
      Animal.listarAnimais(meusAnimais);
    }

}
