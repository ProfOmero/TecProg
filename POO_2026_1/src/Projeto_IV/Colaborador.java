package Projeto_IV;

import MeuPacote.Geral;
import POO.Data;
import POO.Pessoa;
import java.util.ArrayList;

public class Colaborador extends Pessoa {
  private int faltasMes;
  private double salario;

    public Colaborador(int idPessoa, String nome, char sexo, Data dtNasc, int faltasMes, double salario) {
        super(idPessoa, nome, sexo, dtNasc);
        this.faltasMes = faltasMes;
        this.salario = salario;
    }

    public int getFaltasMes() {
        return faltasMes;
    }

    public void setFaltasMes(int faltasMes) {
        this.faltasMes = faltasMes;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
    
    public double valorPremio() {
      if (faltasMes == 0)
          return(200.00);
      else if ((faltasMes == 1) || (faltasMes == 2))
              return(100.00);
           else if ((faltasMes == 3) || (faltasMes == 4))
                   return(50.00);
                else return(0.00);
    }

    public double salarioFinal() {
      return(salario + valorPremio());
    }

    public static void listarColaboradores(ArrayList<Colaborador> firma) {
      double totSal = 0, totPremios = 0, totSalFinal = 0; 
      
      System.out.println("Nome do Colaborador........... S ..Salário... .Prêmio.. Salário Final");
      System.out.println(Geral.repetir('-', 69));
      for(Colaborador item: firma) {
        System.out.printf("%s %c R$ %9.2f R$ %6.2f R$ %10.2f\n", 
          item.getNome()+Geral.repetir('.', 30-item.getNome().length()), 
          item.getSexo(),
          item.getSalario(),
          item.valorPremio(),
          item.salarioFinal());
        
        totSal = totSal + item.getSalario();
        totPremios = totPremios + item.valorPremio();
        totSalFinal = totSalFinal + item.salarioFinal();          
      }
      System.out.println(Geral.repetir('-', 69));
      System.out.printf("Total dos Salários.......: R$ %10.2f\n", totSal);
      System.out.printf("Total dos Prêmios........: R$ %10.2f\n", totPremios);
      System.out.printf("Total dos Salários Finais: R$ %10.2f\n", totSalFinal);     
    } 

}
