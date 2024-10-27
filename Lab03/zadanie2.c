#include <stdio.h>
int main()
{
	int num1, num2, sum, subtract, multiply, divide_rest;
	float divide;

		printf("Podaj 2 liczby:\n");
		scanf("%d %d", &num1, &num2);

		sum = num1 + num2;
		subtract = num1 - num2;
		multiply = num1 * num2;
		divide = (float)num1 / num2;
		divide_rest = num1 % num2;

		printf("Suma: %d\n", sum);
		printf("Różnica: %d\n", subtract);
		printf("Iloczyn: %d\n", multiply);
		printf("Iloraz: %.2f\n", divide);
		printf("Reszta: %d\n", divide_rest);

		return 0;
}
