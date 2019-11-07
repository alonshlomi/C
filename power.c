#include "myMath.h"

double Result =1;
double e = 2.71828;
double exp(int x)
{
  for(int i=0; i<x; i++)
  {
        Result *= e;
  }
  return Result;
}

double pow(double x, int y)
{
  for(int i=0; i<y; i++)
    {
      Result*=x;
    }
    return Result ;
  }
