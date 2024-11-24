#include <stdio.h>

int returnletter(char s[], int i) {
	return s[i];
}

int main() {
	char text[] = "Hello, world!";
	int number;

	printf("Podaj liczbę: ");
	scanf("%d", &number);


	if (number >= 0 && number < sizeof(text)) {
		printf("Znak na pozycji %d to: %c\n", number, returnletter(text, number));
	} else {
		printf("Liczba poza zakresem.\n");
	}

	return 0;
}

