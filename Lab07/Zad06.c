#include <stdio.h>

int sum(int n) {
	if (n == 0)
		return 0;
	else 
		return n % 10 + sum(n / 10);
}

int main() {
	int n;

	printf("Podaj liczbę: ");
	scanf("%d", &n);
	
	printf("Suma cyfr liczby %d wynosi: %d\n", n, sum(n));

	return 0;
}
