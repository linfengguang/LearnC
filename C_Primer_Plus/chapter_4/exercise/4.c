#include <stdio.h>

int main(void)
{
	float height;
	char name[40];

	printf("Please enter your name: ");
	scanf("%s", name);
	printf("Please enter your height: ");
	scanf("%f", &height);
	printf("%s, you ar %.3f feet tall\n", name, height);

	return 0;
}
