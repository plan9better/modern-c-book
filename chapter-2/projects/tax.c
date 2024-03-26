#include <stdio.h>

#define TAX 0.05f

int main(void){
	float value;
	printf("Enter value in $: ");
	scanf("%f", &value);

	printf("After 5 percent tax: %.2f\n", value + (TAX * value));
}
