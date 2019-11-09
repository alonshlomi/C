#include <stdio.h>
#include "myMath.h"

int main()
{
	double x;
	printf("Please insert a real number: ");
	scanf("%lf",&x);
	printf("\n");

	float fx_1 = sub(add(exp(x),pow(x,3)),2);
	float fx_2 = add(mul(x,3),mul(pow(x,2),2));
	float fx_3 = sub(div(mul(pow(x,3),4),5),mul(x,2));

	printf("The value of f(x) = e^x+x^3-2 at the point %0.4lf is: %0.4f \n",x,fx_1);
	printf("The value of f(x) = 3x+2x^2 at the point %0.4lf is: %0.4f\n",x,fx_2);
	printf("The value of f(x) = (4x^3)/5-2x at the point %0.4lf is: %0.4f\n",x,fx_3);




  return 0;


}
