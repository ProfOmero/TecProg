package Abr_07_Strings;

public class Concatenacao {

    public static void main(String[] args) {
      String minus = "", maius = "", nros = "";
      
      int i;
      
      for(i=0; i<26; i++) {
        minus = minus + (char)('a' + i);
        maius = maius + (char)('A' + i);
      }
      
      char j;
      for(j='0'; j<='9'; j++) {
        nros = nros + j;  
      }
      
      System.out.println(minus);
      System.out.println(maius);
      System.out.println(nros);      
    }

}
