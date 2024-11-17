#include <stdio.h>
int main() {
	int a, b;
	int c = 0;
	long int power = 1;
	
	printf("Podaj parę liczb: ");
	scanf("%d %d", &a, &b);
	
	if (a == 0) {
		printf("Nie ma takiego c, bo 0 do dowolnej potęgi nie przekroczy %d.\n", b);
		return 0;
	} else if (a == 1) {
		printf("Nie ma takiego c, bo 1 do dowolnej potęgi nie przekroczy %d.\n", b);
		return 0;
	}
	
	while (power <= b) {
		c++;
		power *= a;
	}

	printf("Pierwsza liczba c dla której %d^c przekroczy %d wynosi: %d\n", a, b, c);
	
	return 0;
}
