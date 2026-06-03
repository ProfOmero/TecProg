package MeuPacote;

public class Aluno {
  
  public static String situacao(double nf, double freq) {
    if ((nf >= 6.0) && (freq >= 75.0))
        return("<<< APROVADO >>>");
    else if ((nf >= 6.0) && (freq < 75.0))
            return("<<< REPROVADO POR FREQUÊNCIA >>>");
         else if ((nf < 6.0) && (freq >= 75.0))
                 return("<<< REPROVADO POR NOTA >>>");
              else return("<<< REPROVADO POR NOTA E FREQUÊNCIA >>>");
  }
  
  public static String toString(String nome, double nf, double freq) {
    String result;
    
    result = String.format("Nome do(a) Aluno(a): %s\n", nome) +
             String.format("Frequência.........: %.2f%%\n", freq) +
             String.format("Nota Final.........: %.2f\n", nf) +
             String.format("Situação...........: %s", situacao(nf, freq));
    
    return(result);
  }

}
