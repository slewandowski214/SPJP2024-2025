#include <stdio.h>

void fill(int *start, int *end) {
	int n = end - start + 1;

	for (int i = 0; i < n; i++) {
		start[i] = i + 1;
	}
}

int main() {
	int tab[10];

	int *start = tab;
	int *end = tab + 9;

	fill(start, end);

	printf("Tablica po wypełnieniu: ");
	for (int i = 0; i < 10; i++) {
	printf("%d ", tab[i]);
	}
	printf("\n");
	
	return 0;
}
	
