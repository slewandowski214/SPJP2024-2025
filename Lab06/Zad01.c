#include <stdio.h>

float sum(float a, float b) {
	return a + b;
}
float sub(float a, float b) {
	return a - b;
}
float multi(float a, float b) {
	return a * b;
}
float div(float a, float b) {
	if (b != 0) {
		return a / b;
	} else {
	    	printf("Nie można dzielić przez zero!\n");
		return 0;
	}
}
int main() {
	float num1, num2, result;
	int choice;

	printf("Wpisz pierwszą liczbę:\n");
	scanf("%f", &num1);
	printf("Wpisz drugą liczbę:\n");
	scanf("%f", &num2);

	printf("Wybierz działanie:\n");
	printf("1. Dodawanie\n");
	printf("2. Odejmowanie\n");
	printf("3. Mnożenie\n");
	printf("4. Dzielenie\n");
	printf("Twój wybór: ");
	scanf("%d", &choice);
       	
		switch (choice) {
			case 1: 
				result = sum(num1, num2);
				printf("Wynik: %.2f\n", result);
				break;	
			case 2:
				result = sub(num1, num2);
				printf("Wynik: %.2f\n", result);	
				break;	
			case 3:
				result = multi(num1, num2);
				printf("Wynik: %.2f\n", result);	
				break;	
			case 4:
				result = div(num1, num2);
		       		if (num2 != 0) {
					printf("Wynik: %.2f\n", result);
				}
				break;
			default:
				printf("Nieprawidłowy wybór!");
				break;
}

return 0;
}
