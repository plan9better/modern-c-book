// Calculates celcius temperature from farenheit

#include <stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)

int main(void){
	float farenheit, celcius;
	printf("Farenheit temperature: ");
	scanf("%f", &farenheit);

	celcius = (farenheit - FREEZING_PT) * SCALE_FACTOR;
	printf("Temperature in celcius: %.1f", celcius);

	return 0;
}
