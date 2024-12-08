#include <stdio.h>

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
	       return 1;	
	} else
	       return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;

	printf("Podaj liczbę: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("Liczba poza zakresem.\n");
	} else { 
		printf("%d wyraz ciągu Fibonacciego jest równy %d.\n", n, fibonacci(n));
	}

return 0;
}
