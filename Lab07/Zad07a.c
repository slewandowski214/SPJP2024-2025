#include <stdio.h>

int searchfromLeft(int arr[], int size, int num, int index) {
	if (index == size) {
		return 0;
	}
	if (arr[index] == num) {
		return 1;
	} 
		return searchfromLeft(arr, size, num, index + 1);
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int size = sizeof(arr) / sizeof(arr[0]);
	int num;
	
	printf("Podaj liczbę: ");
	scanf("%d", &num);

	int result = searchfromLeft(arr, size, num, 0);
	
	if (result) 
		printf("Liczba %d znajduje się w tablicy.\n", num);
	else
		printf("Liczba nie znajduje się w tablicy.\n");

	return 0;
}
