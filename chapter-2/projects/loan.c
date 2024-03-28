#include <stdio.h>

int main(void){

	float loan, interest, payment;
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter monthly interest: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	float interest_m = (interest / 100.0) / 12;
	float loan_original = loan;

	// a loop would be nice here but i want to 
	// go at the pace of the book
	loan = (loan - payment);
	loan += loan_original * interest_m;
	printf("Loan after 1 month: %.2f\n", loan);

	loan = (loan - payment);
	loan += loan_original * interest_m;
	printf("Loan after 2 months: %.2f\n", loan);

	loan = (loan - payment);
	loan += loan_original * interest_m;
	printf("Loan after 3 months: %.2f\n", loan);
	return 0;
}
