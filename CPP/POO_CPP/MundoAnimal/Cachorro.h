#ifndef CACHORRO_H_INCLUDED
#define CACHORRO_H_INCLUDED

#include <string>
#include "Animal.h"

using namespace std;

class Cachorro: public Animal {
  public:
    static int ct;

    Cachorro(string nome);
    ~Cachorro();

    void som();
    void rosnar();
    string toString();
};

#endif // CACHORRO_H_INCLUDED
