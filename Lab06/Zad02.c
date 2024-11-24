#include <stdio.h>

int compare(char ch1, char ch2) {
	if (ch1 == ch2)
		return 1;
	else 
		return 0;
}

int main() {
	char a, b;
	
	printf("Podaj pierwszy znak: ");
	scanf(" %c", &a);
	printf("Podaj drugi znak: ");
	scanf(" %c", &b);
	
	if (compare(a, b)) {
		printf("Znaki są identyczne.\n");
	} else {
		printf("Znaki są różne.\n");
	}
return 0;
}
