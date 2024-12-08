#include <stdio.h>

int gcd(int a, int b) {
	if (b != 0) 
		return gcd(b, a % b);
	else
		return a;
}

int main() {
	int num1, num2;
	
	printf("Podaj 2 liczby: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < 0) num1 = -num1;
	if (num2 < 0) num2 = -num2;

	printf("NWD(%d, %d) = %d\n", num1, num2, gcd(num1, num2));

return 0;
}
