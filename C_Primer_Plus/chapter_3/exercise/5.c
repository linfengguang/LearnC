#include <stdio.h>

int main(void)
{
	float seconds = 3.156E7;
	int years;

	printf("Please enter your ages of years: ");
	scanf("%d", &years);
	printf("Your ages of seconds is: %e\n", seconds * years);

	return 0;
}
