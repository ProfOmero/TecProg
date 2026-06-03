package POO;

import MeuPacote.Geral;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Usando_Pessoa {

    public static void main(String[] args) throws IOException {
      Scanner ler = new Scanner(System.in);
      
      String nome, partesDt[];
      char sexo;
      int dia, mes, ano, idPessoa;
      
      // pessoas = coleção de objetos Pessoa
      ArrayList<Pessoa> pessoas = new ArrayList();
      
      while (true) {
        System.out.print("Id. Pessoa (-1 para encerrar): ");
        idPessoa = ler.nextInt();
        if (idPessoa == -1)
            break;
        
        ler.nextLine(); // limpar o buffer de entrada de dados
        
        System.out.println();
        
        System.out.print("Nome....................: ");
        nome = ler.nextLine();
        
        System.out.print("Sexo....................: ");
        sexo = (char)System.in.read();
        
        ler.nextLine(); // limpar o buffer de entrada de dados
        
        System.out.print("Nascimento (dia/mes/ano): ");
        partesDt = ler.nextLine().split("/");
        dia = Integer.parseInt(partesDt[0]);
        mes = Integer.parseInt(partesDt[1]);
        ano = Integer.parseInt(partesDt[2]);
        
        System.out.println();
        
        if (Geral.confirmou("Confirma os dados (S/N): ")) {
           pessoas.add(new Pessoa(idPessoa, nome, sexo, new Data(dia, mes, ano)));
        }

        System.out.println();        
      }
      
      Pessoa.listarPessoas(pessoas);
    }

}
