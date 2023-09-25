#include <stdio.h>

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
		result = num1 + num2;
		printf("Addition: %lf\n", result);
	case 2:
		result = num1 - num2;
		printf("Difference: %lf\n", result);
	}

	return 0;
}