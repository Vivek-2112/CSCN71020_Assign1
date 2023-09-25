#include <stdio.h>

void printWelcomeMenu();
void printOptions();
void add();


int main() {

	double num1, num2, result;

	// printWelcomeMenu
	printf(" **********************\n");
	printf("**   Welcome to the   **\n");
	printf("**   BCS Calculator   **\n");
	printf(" **********************\n");

	// printOptions
	int option;

	printf("Enter first number: ");
	scanf_s("%lf", &num1);

	printf("Enter second number: ");
	scanf_s("%lf", &num2);

	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("Please select 1 for add and 2 for subtract: ");
	scanf_s("%d", &option);

	switch (option) {
	case 1:
		add();
	case 2:
		result = num1 - num2;
		printf("Difference: %lf\n", result);
	}

}


void add() {
	double num1, num2, result;
	printf("Enter the first value:");
	scanf_s("%lf", &num1);
	printf("Enter the second value:");
	scanf_s("%lf", &num2);
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}