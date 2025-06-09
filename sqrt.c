#include <stdio.h>

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


int main()
{
	float i;

	printf("Enter ending number number:(eg. 1.00, 10.0)\n");
	scanf("%f",&i);

	int pre;
	printf("Enter the precision:(eg 4,5,6;)\n");
	scanf("%d",&pre);
	

	for (float j = 1.0; j <= i; j = j + 1.0) {
		printf("Number %2.1f Sqaure Root %.*f\n", j,pre, Sqrt(j));
	}
	return 0;
}
