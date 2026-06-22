package Abr_28_try;

import MeuPacote.CalculadoraIMC;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Listar_PacientesIMC {

    public static void main(String[] args) throws FileNotFoundException {
      String nome, linha, partes[];
      double pc, alt;
      
      try {
        FileReader arq = new FileReader("C:\\Meus Documentos\\Professor do DAELN\\Aulas\\ProgComp\\Jun_9_e_11_TXT\\pacientes.txt");
        BufferedReader lerArq = new BufferedReader(arq);  

        linha = lerArq.readLine(); // lê a primeira linha do arquivo texto
        while (linha != null) {
          partes = linha.split(";");

          nome = partes[0];
          pc = Double.parseDouble(partes[1]);
          alt = Double.parseDouble(partes[2]);

          System.out.println(CalculadoraIMC.toString(nome, pc, alt));

          linha = lerArq.readLine(); // lê da segunda até a última linha do arquivo texto
        }

        lerArq.close();
      }
      catch (FileNotFoundException e1) {
        System.out.println("Erro: arquivo 'pacientes.txt' não foi localizado!!!");
      }
      catch (IOException e2) {
        System.out.printf("Erro: %s!!!\n", e2.getMessage());
      }
      catch (NumberFormatException e3) {
        System.out.println("Erro: formato do número está incorreto!!!");
      }
        
    }

}
