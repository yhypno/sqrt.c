#include <stdio.h>
#include "sqrt.h"

float Sqrt(float a)
{

	float x,y;
	float b = 1e-15;

	if (a  < 0) {
		printf("There is no Sqaure root of a negative Number\n");	
		return 0;
	}
	else {
		x = a;
		y = a * 0.5;

		while ((x - y) * (x - y) > b) {
			x = y;
			y = 0.5 * (x + a/x) ;
		}
		return y;
	}
}


