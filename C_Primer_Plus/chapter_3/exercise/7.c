#include <stdio.h>

int main(void)
{
	double inch = 2.54;
	double height;

	printf("Enter your height in inch: ");
	scanf("%lf", &height);
	printf("Your height in centimeter is: %.2lfcm\n", inch * height);

	return 0;

}
