#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota ( unsigned int towar )
{
    unsigned int suma_z = 0;
    unsigned int suma_t = 0;
    Stocznia stocznia{};

    while (suma_t < towar)
    {
      if( towar == 0)
      {
        break;
      }
      Statek* statek = stocznia();
      suma_t += statek -> transportuj();
      if (dynamic_cast < Zaglowiec* > (statek))
      {
        suma_z ++;
      }
      delete statek;
    }
    return suma_z;
}