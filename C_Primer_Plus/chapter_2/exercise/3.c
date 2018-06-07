#include <stdio.h>

int main(void)
{
	int years, days;

	printf("Please enter your ages of year:");
	scanf("%d", &years);
	days = 365 * years;
	printf("Your ages of days is: %d\n", days);

	return 0;
}
