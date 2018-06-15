#include <stdio.h>

int main(void)
{
	float speed, size, time;

	printf("Please input the speed(Mb/s) and file size(MB): ");
	scanf("%f %f", &speed, &size);
	time = (size * 8) / speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n", speed, size, time);

	return 0;
}
