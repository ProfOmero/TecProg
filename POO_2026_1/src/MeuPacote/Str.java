package MeuPacote;

public class Str {

  public static boolean ehMaiuscula(char c) {
    return((c >= 'A') && (c <= 'Z'));
  }

  public static boolean ehMinuscula(char c) {
    return((c >= 'a') && (c <= 'z'));
  }  
  
  public static boolean ehAlfabetico(char c) {
    return(ehMaiuscula(c) || ehMinuscula(c));
  }
  
  public static boolean ehNumero(char c) {
    return((c >= '0') && (c <= '9'));
  }
  
  public static boolean ehVogal(char c) {
    return("AEIOUaeiou".indexOf(c) != -1);
  }
  
  public static boolean ehConsoante(char c) {
    return(ehAlfabetico(c) && !ehVogal(c));
  }
  
}
