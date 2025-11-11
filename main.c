#include <stdio.h>

void asciiToChar();

void inverseWord();

void palindrome();

int main(void) {
    // asciiToChar();
    // inverseWord();
    palindrome();
    return 0;
}

// Labo 4.1
void asciiToChar() {
    printf("Ecrire un caractère :\n");
    int c = getchar();
    printf("Le code ASCII de ce caractère est : %d\n", c);
}

// Labo 4.2
void inverseWord() {
    char word[20];
    fgets(word, 20,stdin);
    printf("%s", word);
}

// Labo 4.3

void palindrome() {
    int strl = 0;
    char word[30];
    int is_palindrome = 1;
printf("ecrire un mot pour verifier si c'est un palindrome :\n");
    fgets(word, 30,stdin);

    while (word[strl] != '\0' && word[strl] != '\n') {
        strl++;
    }
    for (int i = 0, j = strl-1;  i < j ; i++, j--) {
        if (word[i] != word[j]) {
            is_palindrome = 0;
            break;
        }
    }
    if (is_palindrome)
        printf("c'est un palindrome");
}

// Labo 4.4

