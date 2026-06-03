#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto {
  // atributos (ou propriedades)    = dados
  private:
    int x;
    int y;

  // métodos (funções, ou módulos)  = códigos
  public:
    Ponto(int x, int y);
    ~Ponto();

    int getX();
    void setX(int x);

    int getY();
    void setY(int y);

    void entrada();
    std::string posicao();
    std::string toString();
};

#endif // PONTO_H_INCLUDED
