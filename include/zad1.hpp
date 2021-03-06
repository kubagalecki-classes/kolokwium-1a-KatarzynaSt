#include "catch.hpp"
#include <string>
// Zad2
// tutaj definicja klasy Makaron
class Makaron
{
public:
virtual double ileMaki(unsigned) const;

// BEZ definicji metody gotujMakaron (tylko z deklaracją)

static Makaron* gotujMakaron(const std::string&);
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle : public Makaron
{
  public:

Tagliatelle(double l, double w, double r):L(l),W(w),R(r) {}

Tagliatelle()
{
  L=0.5;
  W=0.5;
  R=0.5;
};

double ileMaki(unsigned P) const
{
  double ilosc_maki=P*L*W*(1-R)*C;
  return ilosc_maki;
}

private:
  double L; // dlugosc
  double W; // szerokosc
  double R; //jajka do maki
  static const double C; // stala

} ;
