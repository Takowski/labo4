#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int asciiToChar();

char* inverseWord();

void palindrome();

int main(void) {
    char *reverse=inverseWord();
    // printf("Le code ASCII de ce caractère est :%d \n", asciiToChar());
    printf(" le mot inversé est : %s \n",reverse);
    // palindrome();
    free(reverse);
    return 0;
}

// Labo 4.1
int asciiToChar() {
    printf("Ecrire un caractère :\n");
    int c = getchar();
    return c;
}

// Labo 4.2
char* inverseWord() {
    char word[20];
    printf("Introduire un mot:\n");
    fgets(word, 20,stdin);
    size_t len=strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
        len--;
    }
    char *reverse=malloc(sizeof(char)*(len+1));
    for (int i=0 ,j=len-1;i<len;i++,j--) {
        reverse[i]=word[j];
    }
    reverse[len]='\0';
    return reverse;

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

