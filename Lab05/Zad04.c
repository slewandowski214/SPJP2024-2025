#include <stdio.h>
int main() {

	int n;

	printf("Podaj liczbę elementów w tablicy: ");
	scanf("%d", &n);
	
	int tab[n], pow[n];

	printf("Podaj %d liczb:\n", n);
	for (int i = 0; i < n; i++) {
		printf("Liczba %d: ", i + 1);
		scanf("%d", &tab[i]);
	}

	for (int i = 0; i < n; i++) {
		pow[i] = tab[i] * tab[i];
	}

	printf("Tablica kwadratów:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", pow[i]);
	}
	printf("\n");

	return 0;
}
