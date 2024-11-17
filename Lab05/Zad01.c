#include <stdio.h>
int main() {
	int n, i;
	long int sum = 0;

	printf("Podaj liczbę naturalną: ");
	scanf("%d", &n);;

	if (n < 1) {
		printf("Podana liczba nie jest naturalna (n >= 1).\n");
		return 1;
	}

	for (i = 1; i <= n; i++) {
		sum += i * i;
	}
	
	printf("Suma kwadratów od 1 do %d wynosi: %ld\n", n, sum);

	return 0;
}


