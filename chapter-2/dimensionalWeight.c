// Calculates the dimensional weight of a box.
// Used by shipping companies to calculate cost.

#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void){
	int height, width, length;

	printf("Height: ");
	scanf("%d", &height);
	printf("Width: ");
	scanf("%d", &width);
	printf("Length: ");
	scanf("%d", &length);

	int volume, weight;
	volume = height * width * length;
	printf("Volume (cubic inches): %d\n", volume);
	weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
	printf("Dimensional weight: %d\n", weight);
	return 0;
}
