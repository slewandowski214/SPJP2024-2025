#include <stdio.h>

int findandReset (int *tab, int size) {
	if (size <= 0) {
		return -1;
	}

	int maxIndex = 0;
	for (int i = 0; i < size; i++) {
		if (tab[i] > tab[maxIndex]) {
			maxIndex = i;
		}
	}

	int maxNumber = tab[maxIndex];
	tab[maxIndex] = 0;
	return maxNumber;
}

int main() {
	
	int num[] = {4, 2, 9, 12, 14, 23, 56, 6};
	int size = sizeof(num) / sizeof(num[0]);

	printf("Tablica przed zmianą: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");
	
	int maxNumber = findandReset (num, size);
	
	printf("Największy element tablicy: %d\n", maxNumber);
	printf("Tablica po zmianie: ");

	for (int i = 0; i < size; i++) {
		printf("%d ", num[i]);
	}
	printf("\n");

	return 0;

}
