package Projeto_IV;

import POO.Data;
import java.util.ArrayList;

public class Usando_Colaborador {

    public static void main(String[] args) {
      ArrayList<Colaborador> firma = new ArrayList();
      
      firma.add(new Colaborador(1, "Colaborador 1", 'M', new Data(1, 1, 2000), 0, 10000.00));
      firma.add(new Colaborador(2, "Colaborador 2", 'M', new Data(1, 2, 2000), 1, 11000.00));
      firma.add(new Colaborador(3, "Colaborador 3", 'F', new Data(1, 3, 2000), 2, 12000.00));
      firma.add(new Colaborador(4, "Colaborador 4", 'F', new Data(1, 4, 2000), 3, 13000.00));
      firma.add(new Colaborador(5, "Colaborador 5", 'F', new Data(1, 5, 2000), 4, 14000.00));
      firma.add(new Colaborador(6, "Colaborador 6", 'F', new Data(1, 6, 2000), 0, 15000.00));
      firma.add(new Colaborador(7, "Colaborador 7", 'M', new Data(1, 7, 2000), 1, 16000.00));
      firma.add(new Colaborador(8, "Colaborador 8", 'M', new Data(1, 8, 2000), 2, 17000.00));
      firma.add(new Colaborador(9, "Colaborador 9", 'M', new Data(1, 9, 2000), 3, 18000.00));
      firma.add(new Colaborador(10, "Colaborador 10", 'F', new Data(1, 10, 2000), 6, 19000.00));
      
      Colaborador.listarColaboradores(firma);
    }

}
