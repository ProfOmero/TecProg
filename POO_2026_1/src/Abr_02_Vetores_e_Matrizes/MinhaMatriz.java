package Abr_02_Vetores_e_Matrizes;

public class MinhaMatriz {

    public static void main(String[] args) {
      int n = 10;
      int m[][] = new int[n][n];
      int i, j;
      int vlr = 0;
      
      for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
          m[i][j] = vlr;
          vlr = vlr + 1;
        }
      }
      
      System.out.println("M____________________________");
      for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
          System.out.printf("%02d ", m[i][j]);  
        }
        System.out.println();
      }
      
      System.out.println();
      
      int smDP = 0;
      System.out.print("Diagonal Principal  = { ");
      for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
          if (i == j) {
             System.out.printf("%02d ", m[i][j]);
             smDP = smDP + m[i][j]; 
          }
        }
      }
      System.out.printf("} soma = %d\n", smDP);
      
      int smDS = 0;
      System.out.print("Diagonal Secundária = { ");
      for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
          if ((i + j) == (n - 1)) {
             System.out.printf("%02d ", m[i][j]);
             smDS = smDS + m[i][j]; 
          }
        }
      }
      System.out.printf("} soma = %d\n\n", smDS);      
      
      
    }

}
