#include <stdio.h>
int main() {

	int n;

	printf("Podaj liczbę elementów w  tablicy: ");
	scanf("%d", &n);

	int tab[n];
	
	printf("Podaj %d liczb:\n", n);
	for (int i = 0; i < n; i++) {
		printf("Liczba %d: ", i + 1);
		scanf("%d", &tab[i]);
	}
	
	printf("Tablica liczb:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", tab[i]);
	}
	printf("\n");

	return 0;
}	
	



