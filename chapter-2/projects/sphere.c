#include <stdio.h>

#define FORMULA ((4.0f / 3.0f) * 3.14f)

int main(void){
	float r;
	printf("Radius: ");
	scanf("%f", &r);

	float volume = r * r * r * FORMULA;
	printf("Volume: %f\n", volume);
}
