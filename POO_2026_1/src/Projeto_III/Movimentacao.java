package Projeto_III;

import MeuPacote.Geral;
import java.util.ArrayList;

public class Movimentacao {
  private int idLancto;
  private String dsc;
  private Data dtMovto; // relacionamento de associação
  private char tipo; // D- Débito; C- Crédito
  private double vlr;

    public Movimentacao(int idLancto, String dsc, Data dtMovto, char tipo, double vlr) {
        this.idLancto = idLancto;
        this.dsc = dsc;
        this.dtMovto = dtMovto;
        this.tipo = tipo;
        this.vlr = vlr;
    }

    public int getIdLancto() {
        return idLancto;
    }

    public void setIdLancto(int idLancto) {
        this.idLancto = idLancto;
    }

    public String getDsc() {
        return dsc;
    }

    public void setDsc(String dsc) {
        this.dsc = dsc;
    }

    public Data getDtMovto() {
        return dtMovto;
    }

    public void setDtMovto(Data dtMovto) {
        this.dtMovto = dtMovto;
    }

    public char getTipo() {
        return tipo;
    }

    public void setTipo(char tipo) {
        this.tipo = tipo;
    }

    public double getVlr() {
        return vlr;
    }

    public void setVlr(double vlr) {
        this.vlr = vlr;
    }
    
    public static void listarMovimentacoes(ArrayList<Movimentacao> movtos) {
      double totC = 0, totD = 0;
      for(Movimentacao item: movtos) {
        System.out.println(item.toString());
        if (item.getTipo() == 'C')
            totC += item.getVlr();
        else totD += item.getVlr();
      }
      
      System.out.println();
      System.out.printf("Total de Créditos = R$ %10.2f\n", totC);
      System.out.printf("Total de Débitos  = R$ %10.2f\n", totD);
    }

    @Override
    public String toString() {
        return String.format("%s %s %c R$ %9.2f", 
                 dsc+Geral.repetir('.', 30-dsc.length()), dtMovto.toString(), tipo, vlr);
    } 


}
