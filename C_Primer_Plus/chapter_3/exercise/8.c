#include <stdio.h>

int main(void)
{
	float volume;

	printf("Enter the volume in cups: ");
	scanf("%f", &volume);
	printf("%.2fcups = %.2founces\n", volume, volume * 8);
	printf("%.2fcups = %.2fspoons\n", volume, volume * 8 * 2);
	printf("%.2fcups = %.2ftea-spoons\n", volume, volume * 8 * 2 * 3);

	return 0;
}
