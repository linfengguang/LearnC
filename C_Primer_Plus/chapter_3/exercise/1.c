#include <stdio.h>
int main(void)
{
	int in;
	float fl1, fl2;

	in = 2147483648;
	fl1 = 3.4E38;
	fl2 = 0.1234E-38;
	printf("the int number overflow is %d\n", in + 1);
	printf("the float number overflow is %e\n", fl1 * 100.0f);
	printf("the float number underflow is %e\n", fl2 / 10);

	return 0;
}
