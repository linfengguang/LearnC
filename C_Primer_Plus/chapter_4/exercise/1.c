#include <stdio.h>

int main(void)
{
	char firstname[40], lastname[40];	

	printf("Please enter your first name: ");
	scanf("%s", firstname);
	printf("Please enter your last name: ");
	scanf("%s", lastname);
	printf("Your name is: %s,%s\n", lastname, firstname);

	return 0;
}


