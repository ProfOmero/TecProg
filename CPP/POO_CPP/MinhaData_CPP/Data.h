#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data {
  // atributos (ou propriedades)    = dados
  private:
    int dia;
    int mes;
    int ano;

  // métodos (funções, ou módulos)  = códigos
  public:
  // polimorfismo de sobrecarga (overload)
    Data(int dia, int mes, int ano);
    Data();

    int getDia();
    void setDia(int dia);

    int getMes();
    void setMes(int mes);

    int getAno();
    void setAno(int ano);

    int calcularIdade();
    std::string nomeMes(bool abreviado);
    std::string toString(bool mostrarIdade);
};

#endif // DATA_H_INCLUDED
