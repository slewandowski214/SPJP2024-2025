#include <stdio.h>
#define SIZE 10

int main() {
	int tab[SIZE];
	int *ptr;
	
	printf("Podaj %d elementów tablicy\n", SIZE);

	for(ptr = tab; ptr < tab + SIZE; ptr++) {
	printf("Element %ld: ", ptr - tab + 1);
	scanf("%d", ptr);
	}

	printf("Wprowadzone elementy\n");
	
	for(ptr = tab; ptr < tab + SIZE; ptr++) {
	printf("Element %ld: %d\n", ptr - tab + 1, *ptr);
	}

	return 0;
}
