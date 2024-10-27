#include <stdio.h>
int main()
{
	int num1, num2, num3;

	printf("Podaj 3 liczby:\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num1 == num3)
		printf("Wszystkie liczby są równe\n");

	if (num1 > num2 && num1 > num3)
		printf("Liczba %d jest największa\n", num1);

	if (num2 > num1 && num2 > num3)
		printf("Liczba %d jest największa\n", num2);

	if (num3 > num1 && num3 > num2)
		printf("Liczba %d jest największa\n", num3);

	return 0;
}
	



