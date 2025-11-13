#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int asciiToChar();

char *inverseWord();

bool palindrome();

int main(void) {
    // char *reverse = inverseWord();
    // printf("Le code ASCII de ce caractère est :%d \n", asciiToChar());
    // printf(" le mot inversé est : %s \n", reverse);
    printf("%s", palindrome() ? "est un palindrome" : "n'est pas un palindrome");
    // free(reverse);
    return 0;
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
        word[len - 1] = '\0';
        len--;
    }
    char *reverse = malloc(sizeof(char) * (len + 1));
    for (int i = 0, j = len - 1; i < len; i++, j--) {
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
    printf("Introduisez un mot: \n");
    fgets(word, 20,stdin);
    }
