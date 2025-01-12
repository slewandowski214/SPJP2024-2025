#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 100
int n = 0;

void listAll(char arr[]) {
    if (n == 0) {
        printf("Tablica jest pusta!\n");
        return;
    } else {
            for (int i = 0; i < n; i++) {
            printf("%c ", arr[i]);
    }
    printf("\n");
    }
}

void addNum(char arr[]) {
    if (n >= MAX_SIZE) {
        printf("Tablica jest pełna.");
        return;
    } 
    char newSymbol;
        printf("Podaj cyfrę: ");
        scanf(" %c", &newSymbol);

        if (!isdigit(newSymbol)) {
            printf("To nie jest cyfra!\n");
            return;
        }

        arr[n] = newSymbol;
        n++;
        printf("Dodano '%c' do tablicy.\n", newSymbol);
    }

void rmNum(char arr[]) {
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

int sumDigits(char arr[]) {
    if (n == 0) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(arr[i])) {
        sum += arr[i] - '0';
        }
    }
    return sum;
}

void binaryTree(char arr[]) {
    int level = 1;
    int elements = 1;
    int index = 0;

    while (index < n) {
        for (int i = 0; i < elements; i++) {
            printf("%c ", arr[index++]);
        }
        printf("\n");

        elements *= 2;
        level++;
    }
}

int main() {
    int choice;
    char array[MAX_SIZE];
    while (1) {
    printf("\nWybierz opcję:\n");
    printf("0. Wyłącz program.\n");
    printf("1. Wypisz elementy tablicy.\n");
    printf("2. Dodaj nowy element tablicy.\n");
    printf("3. Usuń element z tablicy.\n");
    printf("4. Zsumuj cyfry w tablicy.\n");
    printf("5. Wypisz tablicę w formie drzewa binarnego.\n");
    printf("Opcja: ");
    scanf("%d", &choice);

    switch(choice) {
        case 0:
            return 0;
        case 1:
            listAll(array);
            break;
        case 2:
            addNum(array);
            break;
        case 3:
            rmNum(array);
            break;
        case 4: {
            int sum = sumDigits(array);
            if (sum == -1) {
                printf("Tablica jest pusta!\n");
            } else {
                printf("Suma cyfr w tablicy: %d\n", sum);
            }
            break;
        }
        case 5:
            binaryTree(array);
            break;
        default:
        printf("Nieprawidłowa opcja.\n");
        break;
        }
    }
    return 0;
}