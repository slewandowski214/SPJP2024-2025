#include <stdio.h>
#include <ctype.h>
int main()
{	
	int num, choose;
	char ch;	
		printf("Wybierz opcję:\n");
		printf("1. Znak ASCII\n");
		printf("2. Kod ASCII\n");
		printf("Twój wybór: ");
		scanf("%d", &choose);

	if (choose == 1) {
		printf("Wpisz znak:");
		scanf(" %c", &ch);
		
		if (isalpha(ch)) {
			printf("%c jest w alfabecie.\n", ch);
	}	else {
			printf("%c nie jest w alfabecie.\n", ch);
		}
	}

	else if (choose == 2) {
		printf("Wpisz kod ASCII: ");
		scanf("%d", &num);

		if (num >= 0 && num <= 127) {
			char ch = (char)num;
			if (isalpha(ch)) {
			  printf("Kod ASCII %d (%c) jest w alfabecie.\n", num, ch);
		} 	else {
			  printf("Kod ASCII %d (%c) nie jest w alfabecie.\n", num, ch);
		}
	       
		}	else {
			  printf("Niepoprawny kod ASCII.\n");
		}
	} else {
	    printf("Niepoprawny wybór.\n");
	}
	return 0;
}
