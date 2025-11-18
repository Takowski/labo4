#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int asciiToChar();

char *inverseWord();

bool palindrome();

void voyelle();

size_t sizeOfArray(char const *array1, char const
                   *array2);

void selectionMenu();

int main(void) {
    // char *reverse = inverseWord();
    // char *sizeArray1 = "Bonjour comment allez vous";
    // char *sizeArray2 = "Ca va bien et vous";
    // char *sizeArray3 = "Ca va bien et vous";
    // printf("Le code ASCII de ce caractère est :%d \n", asciiToChar());
    // printf(" le mot inversé est : %s \n", reverse);
    // printf("%s", palindrome() ? "est un palindrome" : "n'est pas un palindrome");
    // free(reverse);
    // voyelle();
    // printf("%zu", sizeOfArray(sizeArray3, sizeArray2));
    // return 0;
    selectionMenu();
}

// Labo 4.1
int asciiToChar() {
    printf("Ecrire un caractère :\n");
    int c = getchar();
    return c;
}

// Labo 4.2
char *inverseWord() {
    char word[20];
    printf("Introduire un mot:\n");
    fgets(word, 20,stdin);
    size_t len = strlen(word);

    if (len > 0 && word[len - 1] == '\n') {
        word[len-1] = '\0';
        len--;
    }
    char *reverse = malloc(sizeof(char) * (len + 1));
    for (size_t i = 0, j = len - 1; i < len; i++, j--) {
        reverse[i] = word[j];
    }
    reverse[len] = '\0';
    return reverse;
}

// Labo 4.3

bool palindrome() {
    int len = 0;
    char word[30];
    bool is_palindrome = true;
    printf("ecrire un mot pour verifier si c'est un palindrome :\n");
    fgets(word, 30,stdin);

    while (word[len] != '\0' && word[len] != '\n') {
        len++;
    }
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            is_palindrome = false;
            break;
        }
    }

    return is_palindrome;
}

// Labo 4.4

void voyelle() {
    char word[20];
    int i = 0, countVoyelle = 0;

    printf("Introduisez un mot: \n");
    fgets(word, 20,stdin);
    while (word[i] != '\0' && word[i] != '\n') {
        i++;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y') {
            countVoyelle++;
        }
    }
    printf("Nombre de voyelles: %d ", countVoyelle);
}

// Labo 4.5

size_t sizeOfArray(char const *array1, char const *array2) {
    int const equal = strcasecmp(array1, array2);
    return (equal == 0) ? strlen(array1) : (size_t) 0;
}

//Labo 4.6

//Labo 4.7

void selectionMenu() {
        int choice;
        printf("Menu:\n");
        printf("1. ASCII to Char\n");
        printf("2. Inverse Word\n");
        printf("3. Palindrome\n");
        printf("4. Voyelle\n");
        printf("5. Comparaison de la taille de 2 strings\n");
        printf("0. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Le code ASCII de ce caractère est : %d\n", asciiToChar());
                break;
            case 2: {
                char *reverse = inverseWord();
                printf("Le mot inversé est : %s\n", reverse);
                free(reverse);
                break;
            }
            case 3:
                printf("%s\n", palindrome() ? "est un palindrome" : "n'est pas un palindrome");
                break;
            case 4:
                voyelle();
                break;
            case 5: {
                char *a = "Bonjour";
                char *b = "Bonjour";
                printf("Taille: %zu\n", sizeOfArray(a, b));
                break;
            }
            case 0:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide.\n");
        }
}
