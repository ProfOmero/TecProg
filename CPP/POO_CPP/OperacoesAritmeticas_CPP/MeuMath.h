#ifndef MEUMATH_H_INCLUDED
#define MEUMATH_H_INCLUDED

class MeuMath {
  // atributos (ou propriedades)    = dados
  private:
    int a;
    int b;

  // métodos (funções, ou módulos)  = códigos
  public:
    MeuMath(int a, int b);
    ~MeuMath();

    int getA();
    void setA(int a);

    int getB();
    void setB(int b);

    void entrada();
    int soma();
    int sub();
    int mult();
    int divInt();
    double divReal();
    std::string toString();
};

#endif // MEUMATH_H_INCLUDED
