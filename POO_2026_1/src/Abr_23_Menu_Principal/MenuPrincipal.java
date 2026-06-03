package Abr_23_Menu_Principal;

import java.util.ArrayList;
import java.util.Scanner;

public class MenuPrincipal {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      ArrayList<String> alunos = new ArrayList();
      OpcoesMenu.importar(alunos);
      
      int opcao;
      
      do {
        System.out.println("**** Menu Principal ****");
        System.out.println("[ 1 ] Cadastrar Alunos");
        System.out.println("[ 2 ] Excluir Alunos");
        System.out.println("[ 3 ] Listar Alunos");
        System.out.println();
        System.out.println("[ 9 ] Encerrar");
        System.out.println("************************");
        
        do {
          System.out.print("Opção Desejada? ");
          opcao = ler.nextInt();
        } while ((opcao != 1) && (opcao != 2) &&
                 (opcao != 3) && (opcao != 9));
        
        System.out.println();
        
        if (opcao == 1) // cadastrar alunos
            OpcoesMenu.cadastrar(alunos);
        else if (opcao == 2)
                OpcoesMenu.excluir(alunos);
             else if (opcao == 3)
                     OpcoesMenu.listar(alunos);
        
          
      } while (opcao != 9);
      
      OpcoesMenu.exportar(alunos);
    }

}
