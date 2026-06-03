package Abr_07_Strings;

import java.util.Scanner;

public class Metodos_String {

    public static void main(String[] args) {
      Scanner ler = new Scanner(System.in);
      
      String nome, prenome, sobrenome, partes[];
      
      while (true) {
        System.out.println("Informe um nome (FIM para encerrar):");
        nome = ler.nextLine();
        
        if (nome.equalsIgnoreCase("FIM"))
            break;
        
        System.out.println();
        System.out.println(nome.toLowerCase());
        System.out.println(nome.toUpperCase());
        
        System.out.println();
        
        partes = nome.split(" ");
        prenome = partes[0];
        sobrenome = partes[partes.length-1];
        System.out.println("Prenome..: " + prenome);
        System.out.println("Sobrenome: " + sobrenome);
        
        System.out.println();
        System.out.println();        
      }
      
        
    }

}
