#include <stdio.h>

int factorial(int n) {
	if (n == 0 || n == 1) {
		return 1;
	} return n * factorial(n - 1);
}

int main() {
	int number;

	printf("Podaj liczbę: ");
	scanf("%d", &number);

	if (number < 0) {
		printf("Nie można obliczyć silnii.\n");
	} else {
		printf("Silnia %d! jest równa %d.\n", number, factorial(number));
	}

return 0;
}	
