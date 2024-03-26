#include <stdio.h>

int main(void){
	printf("Enter a dollar amount: ");
	int value;
	scanf("%d", &value);

	int twenty = 0, ten = 0, five = 0, one = 0;
	twenty = value/20;
	value -= twenty * 20;

	ten = value / 10;
	value -= ten * 10;

	five = value / 5;
	value -= five * 5;

	one = value;

	printf("$20:\t%d\n$10:\t%d\n$5:\t%d\n$1:\t%d\n", twenty, ten, five, one);

	return 0;
}
