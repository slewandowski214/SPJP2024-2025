#include <stdio.h>

int printnum(int n) {
	if (n == 0) {
		return 0;
	}
	printnum(n - 1);
	printf("%d ", n);
}

int main() {
	int n;

	printf("Podaj liczbę: ");
	scanf("%d", &n);

	if (n <= 0) {
		printf("Podaj liczbę większą od 0.\n");
	} else {
		printf("Lista liczb: ");
		printnum(n);
		printf("\n");
	}
return 0;
}
