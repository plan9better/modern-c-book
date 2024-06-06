#include <stdio.h>

int main(void){
	float a =  9.99f;
	int b;
	a = b = a;

	// Wypisze 9.00 xd
	printf("%f\n", a);
	return 0;
}
