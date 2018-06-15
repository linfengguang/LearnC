#include <stdio.h>

int main(void)
{
	char name[40];
	float cash = 45.555;

	printf("What's your name?\n");
	scanf("%s", name);
	printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
}
