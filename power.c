#include "myMath.h"

double Exp(int x)
{
  	double res =1;
  	double e = 2.7183;
 	int t;
	if(x>=0) {
		t = x;
		e = 2.7183;
	} else {
		t = -1*x;
		e = 1.0/2.7183;
	}
	for(int i=0; i<t; i++)
  	{
  	      res = res * e;
  	}
  return res;
}

double Pow(double x, int y)
{
	int t;
	double k;
	if(y>=0) {
		t = y;
		k = x;
	} else {
		t = -1*y;
		k = 1.0/x;
	}
	double res= 1;
  	for(int i=0; i<t; i++)
    	{
      	res = res * k;
    	}
    	return res ;
}
