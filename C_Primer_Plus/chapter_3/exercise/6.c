#include <stdio.h>

int main(void)
{
	float quart;
	int weight = 950;
	float qualities = 3.0E-23;

	printf("Enter the quart number: ");
	scanf("%f", &quart);
	printf("The numbers of water molecule in %.2f quart water is: %e\n", quart, (quart * weight) / qualities);
	
	return 0;
}
