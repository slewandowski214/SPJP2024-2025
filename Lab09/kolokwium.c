#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 20

int n = 0;

void printArr (char arr[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    } else {
            for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
    }
    printf("\n");
    }
}

void addSymbol(char arr[]) {
    int choose;
    if (n >= MAX_SIZE) {
        printf("Tablica jest pełna.");
        return;
    } 
    char newSymbol;
        printf("Podaj liczbę: ");
        scanf(" %c", &newSymbol);

        if(isdigit(newSymbol)) {
            arr[n] = newSymbol - '0';
            n++;
        printf("Dodano '%c' do tablicy.\n", newSymbol);
        }
        
        if (!isdigit(newSymbol)) {
            printf("To nie jest cyfra. Wpisać kod ASCII znaku?\n");
            printf("1. Tak\n");
            printf("2. Anuluj\n");
        scanf("%d", &choose);
        if (choose == 2) {
            return;
        }
        else {
        arr[n] = newSymbol;
        n++;
        printf("Dodano '%c' do tablicy.\n", newSymbol);
        }
    }
}
void rmSymbol(char arr[]) {
    int index;
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    }

    printf("Podaj indeks elementu do usunięcia (0-%d)\n", n - 1);
    scanf("%d", &index);
    if (index < 0 || index >= n) {
        printf("Nieprawidłowy indeks.\n");
        return;
        }
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Usunięto element.\n");
    }

int main() {
    char choice;
    char array[MAX_SIZE];
    while (1) {
    printf("\nWybierz opcję:\n");
    printf("e. Wyłącz program\n");
    printf("w. Wypisz elementy tablicy\n");
    printf("d. Dodaj element do tablicy\n");
    printf("u. Usuń element z tablicy\n");
    printf("Opcja: ");
    scanf(" %c", &choice);
    switch(choice) {
        case 'e':
            return 0;
        case 'w':
            printArr(array);
            break;
        case 'd':
            addSymbol(array);
            break;
        case 'u':
            rmSymbol(array);
            break;
        default:
            printf("Nieprawidłowa opcja.\n");
            break;
        }
    return 0;
    }
}