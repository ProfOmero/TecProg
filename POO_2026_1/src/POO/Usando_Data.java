package POO;

public class Usando_Data {

    public static void main(String[] args) {
      Data jp = new Data(28, 9, 1999);
      Data gaby = new Data(21, 9, 2006);
      Data guto = new Data(7, 2, 2001);
      
      Data hoje = new Data();
      
      System.out.println("Hoje é " + hoje.toString(false));
      
      System.out.println();
      
      System.out.printf("João Pedro nasceu em %s.\n", jp.toString(true));
      System.out.printf("Gaby nasceu em %s.\n", gaby.toString(true));
      System.out.printf("Guto nasceu em %s.\n", guto.toString(true));
    }

}
