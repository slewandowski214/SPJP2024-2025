#include <stdio.h>

int binarySearch(int arr[], int left, int right, int n) {

	if (right >= left) {
		int mid = left + (right - left) / 2;
	if (arr[mid] == n)
		return mid;
	if (arr[mid] > n) {
		return binarySearch(arr, left, mid - 1, n);
	}
		return binarySearch(arr, mid + 1, right, n);
	}
	return -1;
}

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int size = sizeof(arr) / sizeof(arr[0]);
	int n;

	printf("Podaj liczbę: ");
	scanf("%d", &n);
	
	int index = binarySearch(arr, 0, size - 1, n);
	
	if (index == -1)
		printf("Podana liczba nie jest elementem tablicy.\n");
	else
		printf("Liczba jest elementem tablicy na miejscu %d.\n", index);

	return 0;
}
