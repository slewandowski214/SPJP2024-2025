#include <stdio.h>
int main() {
	int a, b, i;
	long int result = 1;
	
	printf("Podaj liczbę naturalną: ");
	scanf("%d", &a);
		
	if (a < 0) {
		printf("Podana liczba nie jest naturalna.\n");
		return 1;
	}

	printf("Podaj naturalny wykładnik potęgi: ");
	scanf("%d", &b);
	
	if (b < 0) {
		printf("Potęga musi być liczbą naturalną.\n");
		return 1;
	}

	for (i = 0; i < b; i++) {
		result *= a;
	}

	printf("Liczba %d do potęgi %d wynosi: %ld\n", a, b, result);
	
	return 0;
}
