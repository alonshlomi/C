#include "myMath.h"

double exp(int x)
{
  	double res =1;
  	double e = 2.7183;
  	for(int i=0; i<x; i++)
  	{
  	      res = res * e;
  	}
  return res;
}

double pow(double x, int y)
{
	double res= 1;
  	for(int i=0; i<y; i++)
    	{
      	res = res * x;
    	}
    	return res ;
}
