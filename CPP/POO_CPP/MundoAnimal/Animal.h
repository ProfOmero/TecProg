#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <string>
#include <vector>

using namespace std;

class Animal {
  private:
    string nome;

  public:
    Animal(string nome);
    ~Animal();

    string getNome();
    void setNome(string nome);

    static void mostrarAnimais(vector<Animal *> x);

    virtual void som();
    virtual string toString();
};

#endif // ANIMAL_H_INCLUDED
