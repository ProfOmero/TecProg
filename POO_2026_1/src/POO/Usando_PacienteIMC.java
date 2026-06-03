package POO;

public class Usando_PacienteIMC {

    public static void main(String[] args) {
      Paciente murilo = new Paciente(1, "Murilo Amorim", 'M', new Data(28, 2, 1997), 73.000, 1.77);
      Paciente isa = new Paciente(2, "Isabelle Lewin", 'F', new Data(5, 10, 2005), 63.000, 1.63);
      
      System.out.println(murilo.toString());
      System.out.printf(isa.toString());
    }

}
