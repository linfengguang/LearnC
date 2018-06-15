#include <stdio.h>
#define COE1 3.785
#define COE2 1.609

int main(void)
{
	float mileage, gasoline;
	float unit_mile;
	float unit_distance;

	printf("Please input the mileage(mile): ");
	scanf("%f", &mileage);
	printf("Please input the gasoline(gallon): ");
	scanf("%f", &gasoline);
	unit_mile = mileage / gasoline;
	printf("unit mileage is: %.1f\n", unit_mile);
	unit_distance = unit_mile * (COE1 / COE2) * 100;
	printf("unit distance is: %.1f\n", unit_distance);

	return 0;	
}
