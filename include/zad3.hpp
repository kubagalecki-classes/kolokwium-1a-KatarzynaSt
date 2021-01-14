#include "zad1.hpp"
#include <cstdint>
#include <functional>

// tutaj funkcja polejSosem

template <typename T1>
void polejSosem(const Tagliatelle& tagl, const T1& sos)
{
  return std::size_t sosik=sos.polej(tagl);
}