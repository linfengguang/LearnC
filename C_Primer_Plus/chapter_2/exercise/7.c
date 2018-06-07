#include <stdio.h>
void mul_output(int n, char outchar[]);

int main(void)
{
	mul_output(3, "Smile!");

	return 0;
}

void mul_output(int n, char outchar[])
{

	for (int i = n; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("%s", outchar);

		printf("\n");
	}	
	
}
