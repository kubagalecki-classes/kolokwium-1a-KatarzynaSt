#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(const& vector<Tagliatelle> makarony)
{
  double M;
  for (int i=0; i < makarony.size(); i++)
  {
  double maka_z_danego=(makarony.size() - i)*makarony[i]->ileMaki();
    M=M+maka_z_danego;
  }
  if (M>100)
  {
    return int f=25;
  }
  else if (50<M<100)
  {
    return double f=52.6543;
  }
  else
   {
     return M;
  }
}