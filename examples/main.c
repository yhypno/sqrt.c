
#include <stdio.h>
#include "sqrt.h"
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
