#include <stdio.h>

void switchValue(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	
	int a = 5;
	int b = 8;

	printf("Wartość a przed zamianą: %d\nAdres zmiennej a przed zamianą: %p\n", a, (void*)&a);
	printf("Wartość b przed zamianą: %d\nAdres zmiennej b przed zamianą: %p\n", b, (void*)&b);
	
	switchValue(&a, &b);

	printf("Wartość a po zamianie: %d\nAdres zmiennej a przed zamianą: %p\n", a, (void*)&a);
	printf("Wartość b po zamianie: %d\nAdres zmiennej b po zamianie: %p\n", b, (void*)&b);

	return 0;

}
