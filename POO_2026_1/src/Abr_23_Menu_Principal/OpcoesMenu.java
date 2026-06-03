package Abr_23_Menu_Principal;

import MeuPacote.Aluno;
import MeuPacote.Geral;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Scanner;

public class OpcoesMenu {
  
  public static void exportar(ArrayList<String> alunos) {
    try {
      FileWriter arq = new FileWriter("alunos.txt");
      PrintWriter gravarArq = new PrintWriter(arq);
    
      for(String item: alunos) {
        gravarArq.printf("%s\n", item);
      }
    
      gravarArq.close();
    }
    catch(IOException e) {
      System.out.println("Erro: Exportação dos dados!!!");
    }
  }
  
  public static void importar(ArrayList<String> alunos) {
    try {
      FileReader arq = new FileReader("alunos.txt");
      BufferedReader lerArq = new BufferedReader(arq);
    
      String linha;
    
      linha = lerArq.readLine(); // lê a primeira linha do arquivo
      while (linha != null) {
        alunos.add(linha);
      
        linha = lerArq.readLine(); // lê da segunda até a última linha do arquivo
      }
    
      lerArq.close();
    }
    catch (IOException e) {
      System.out.println("Arquivo 'alunos.txt' está vazio!!!");
    }
  }
  
  public static void cadastrar(ArrayList<String> alunos) {
    Scanner ler = new Scanner(System.in);
    
    String nome;
    double freq, nf;
    
    while (true) {
      System.out.println("Nome (FIM para encerrar):");
      nome = ler.nextLine();
      if (nome.equalsIgnoreCase("FIM"))
          break;
      
      System.out.println();
      System.out.print("Frequência: ");
      freq = ler.nextDouble();
      
      System.out.print("Nota Final: ");
      nf = ler.nextDouble();
      
      System.out.println();
      
      if (Geral.confirmou("Confirma os dados (S/*)? ")) {
         alunos.add(nome + ";" + freq + ";" + nf);
         System.out.println("<<< Cadastrado >>>");
      }
      else {
         System.out.println("<<< \"Não\" cadastrado >>>");
      }
      
      ler.nextLine(); // esvazia o buffer de entrada de dados
      
      System.out.println();
    }

    System.out.println();
  }
  
  public static void listar(ArrayList<String> alunos) {
    int i, n = alunos.size();
    String nome, partes[];
    double freq, nf;
    for(i=0; i<n; i++) {
      partes = alunos.get(i).split(";");
      
      nome = partes[0];
      freq = Double.parseDouble(partes[1]);
      nf = Double.parseDouble(partes[2]);
      
      System.out.printf("%do. aluno\n", (i+1));
      System.out.println(Aluno.toString(nome, nf, freq)); 
      System.out.println();
    }
    
    System.out.println();
  }
  
  public static void excluir(ArrayList<String> alunos) {
    Scanner ler = new Scanner(System.in);
    int i, n = alunos.size();
    
    while (true) {
      listar(alunos);
      
      do {
        System.out.print("Ordem (-1 para encerrar): ");
        i = ler.nextInt();
      } while ((i < -1) || (i > n) || (n == 0));
      
      if (i == -1)
          break;      
      
      System.out.println(alunos.get(i-1));
      if (Geral.confirmou("Excluir (S/*)? ")) {
         alunos.remove(i-1);
         System.out.println("<<< Excluído >>>");
      }
      else {
         System.out.println("<<< Mantido >>>");  
      }
      System.out.println();
    }
  }
  
}