#include <stdio.h>
int main()
{
	int num1, num2;

	printf("Podaj liczby:\n");
	scanf("%d %d", &num1, &num2);

	if (num1 == num2)
	  printf("Obie liczby są równe\n");
	else if (num1 > num2)
	  printf("Liczba %d jest większa\n", num1);
	else
	  printf("Liczba %d jest większa\n", num2);

	 return 0;
}

