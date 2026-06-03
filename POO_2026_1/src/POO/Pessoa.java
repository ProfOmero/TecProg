package POO;

import java.util.ArrayList;

public class Pessoa {
  private int idPessoa;
  private String nome;
  private char sexo;
  private Data dtNasc; // data de nascimento (relacionamento de associação)

    public Pessoa(int idPessoa, String nome, char sexo, Data dtNasc) {
        this.idPessoa = idPessoa;
        this.nome = nome;
        this.sexo = sexo;
        this.dtNasc = dtNasc;
    }

    public int getIdPessoa() {
        return idPessoa;
    }

    public void setIdPessoa(int idPessoa) {
        this.idPessoa = idPessoa;
    }


    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public Data getDtNasc() {
        return dtNasc;
    }

    public void setDtNasc(Data dtNasc) {
        this.dtNasc = dtNasc;
    }
    
    public static void listarPessoas(ArrayList<Pessoa> pessoas) {
      // for-each
      for(Pessoa pessoa: pessoas) {
        System.out.println(pessoa.toString());
      }
    }

    // Polimorfismo de Sobreposição
    @Override
    public String toString() {
        String result;
        
        result = String.format("id. Pessoa...: %d\n", idPessoa) +
                 String.format("Nome.........: %s\n", nome) +
                 String.format("Sexo.........: %c\n", sexo) +
                 String.format("Nascimento...: %s\n", dtNasc.toString(true));
        
        return result;
    }
    
    
    
    
  
  

}
