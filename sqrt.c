#include <stdio.h>

float Sqrt(float a, float b)
{
	float x,y;

	if (a  < 0) {
		printf("There is no Sqaure root of a negative Number\n");	
		return 0;
	}
	else {
		x = a;
		y = a * 0.5;

		while ((x - y) * (x - y) > (b*b)) {
			x = y;
			y = 0.5 * (x + a/x) ;
		}
		return y;
	}
}


int main()
{
	float i;

	printf("Enter ending number number:(eg. 1.00, 10.0)\n");
	scanf("%f",&i);
	for (float j = 1.0; j <= i; j = j + 1.0) {
		printf("Number %2.1f Sqaure Root %.6f\n", j, Sqrt(j, 0.000000001));
	}
	return 0;
}
