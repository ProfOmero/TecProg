package POO;

import MeuPacote.CalculadoraIMC;

public class Paciente extends Pessoa {
  private double pc; // peso corporal (em kgs)
  private double alt; // altura (em metros)

    public Paciente(int idPessoa, String nome, char sexo, Data dtNasc, double pc, double alt) {
        super(idPessoa, nome, sexo, dtNasc);
        this.pc = pc;
        this.alt = alt;
    }

    public double getPc() {
        return pc;
    }

    public void setPc(double pc) {
        this.pc = pc;
    }

    public double getAlt() {
        return alt;
    }

    public void setAlt(double alt) {
        this.alt = alt;
    }

    @Override
    public String toString() {
        double vlrIMC = CalculadoraIMC.calcularIMC(pc, alt);
        
        String result;
        
        result = super.toString() +
                 String.format("Peso Corporal: %.3f kgs\n", pc) +
                 String.format("Altura.......: %.2f metros\n", alt) +
                 String.format("Valor do IMC.: %.2f %s\n", 
                   vlrIMC, CalculadoraIMC.interpretarIMC(pc, alt));
        
        return result;
    }
    
    
    
    
    
    
  
  

}
