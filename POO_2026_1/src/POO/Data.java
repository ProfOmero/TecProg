package POO;

import java.util.Calendar;

public class Data {
  private int dia;
  private int mes;
  private int ano;

  // polimorfismo de construtores (sobrecarga - overload)
    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
    
    public Data() {
      Calendar hoje = Calendar.getInstance();
      
      dia = hoje.get(Calendar.DAY_OF_MONTH);
      mes = hoje.get(Calendar.MONTH) + 1;
      ano = hoje.get(Calendar.YEAR);      
    }

    public int getDia() {
        return dia;
    }

    public void setDia(int dia) {
        this.dia = dia;
    }

    public int getMes() {
        return mes;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
    
    public int calcularIdade() {
      Data hoje = new Data();
      int idade;
      
      idade = hoje.ano - ano;
      if ((mes > hoje.mes) || ((mes == hoje.mes) && (dia > hoje.dia))) {
         idade = idade - 1;
      }
      
      return(idade);      
    }
    
    public String nomeMes(boolean abreviado) {
      if (abreviado) {
         String meses[] = {"", "jan", "fev", "mar", "abr", "mai", "jun",
           "jul", "ago", "set", "out", "nov", "dez"};
         return(meses[mes]);
      }
      else {
        String meses[] = {"", "janeiro", "fevereiro", "março", "abril", "maio", "junho",
          "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
        return(meses[mes]);
      }
    } 
    

    public String toString(boolean mostrarIdade) {
      String result;
      if (mostrarIdade)
          result = String.format("%02d/%s/%d (%d anos)",
                     dia, nomeMes(true), ano, calcularIdade());
      else
          result = String.format("%02d/%s/%d", dia, nomeMes(true), ano);
      
      return(result);
    }

}
