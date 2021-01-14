#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne() : public Makaron
{
public:

double ileMaki(unsigned ilosc_maki)
{
return ilosc_maki;
}

};

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const string& j)
  if (j.front()==j.back())
  {
    return new Tagliatelle(3.14,0.42,0.1);
  }
  else 
  {
    return new Penne;
  }
}