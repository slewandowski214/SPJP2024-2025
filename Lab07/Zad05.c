#include <stdio.h>

int decimaltoBinary(int n) {
	if (n == 0)
		return 0;
	else
		return (n % 2 + 10 * decimaltoBinary(n / 2));
}

int main() {
	int n;
	printf("Podaj liczbę: ");
	scanf("%d", &n);
	printf("Liczba %d w systemie binarnym: %d\n", n, decimaltoBinary(n));

return 0;
}

