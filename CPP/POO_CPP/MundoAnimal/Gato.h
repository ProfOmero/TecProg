#ifndef GATO_H_INCLUDED
#define GATO_H_INCLUDED

#include <string>
#include "Animal.h"

using namespace std;

class Gato: public Animal {
  public:
    static int ct;

    Gato(string nome);
    ~Gato();

    void som();
    string toString();
};

#endif // GATO_H_INCLUDED
