#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
Makaron()
{
public:
virtual double ileMaki(unsigned int) const;

static Makaron* gotujMakaron(const& string j)
{
  if (j.front()==j.back())
  {
    return new Tagiatelle(3.14,0.42,0.1);
  }
  else 
  {
    return new Penne();
  }
}
};

class Penne() : public Makaron
{
public:

double ileMaki(unsigned int ilosc_maki)
{
return ilosc_maki;
}

};

// tutaj definicja metody gotujMakaron

Makaron* Makaron::gotujMakaron(const string& j)
  if (j.front()==j.back())
  {
    return new Tagiatelle(3.14,0.42,0.1);
  }
  else 
  {
    return new Penne();
  }
}