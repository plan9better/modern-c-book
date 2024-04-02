#include <stdio.h>

int main(void){

	int n1, d1, n2, d2, rn, rd;
	printf("Enter the first fraction: ");
	scanf("%d/%d", &n1, &d1);

	printf("Enter the second fraction: ");
	scanf("%d/%d", &n2, &d2);

	rn = n1 * d2 + n2 * d1;
	rd = d1 * d2;

	printf("The result is: %d/%d\n", rn, rd);
	return 0;
}
