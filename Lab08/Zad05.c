#include <stdio.h>

void sortNum(int *a, int *b, int *c) {
	int temp;

	if (*a > *b) {
	    temp = *a;
	    *a = *b;
	    *b = temp;
	}
	if (*b > *c) {
	    temp = *b;
	    *b = *c;
	    *c = temp;
	}
	if (*a > *b) {
	    temp = *a;
	    *a = *b;
	    *b = temp;
	}
}

int main() {
	
	int a, b, c;
	
	printf("Podaj 3 liczby: ");
	scanf("%d %d %d", &a, &b, &c);
	
	printf("Przed sortowaniem:\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	
	sortNum(&a, &b, &c);

	printf("Po sortowaniu:\n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);

	return 0;

}
