#ifndef VACA_H_INCLUDED
#define VACA_H_INCLUDED

#include <string>
#include "Animal.h"

using namespace std;

class Vaca: public Animal {
  public:
    static int ct;

    Vaca(string nome);
    ~Vaca();

    void som();
    string toString();
};

#endif // VACA_H_INCLUDED
