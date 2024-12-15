#include <stdio.h>

int global = 5;

void printAddress(int a, int b) {
	printf("Adres wskaźnika a: %p\n", (void*)&a);
	printf("Adres wskaźnika b: %p\n", (void*)&b);
	}

int main() {

	int local = global;
	
	printf("Adres zmiennej globalnej: %p\n", (void*)&global);	
	printf("Adres zmiennej lokalnej: %p\n", (void*)&local);

	printAddress(global, local);

	return 0;
}
