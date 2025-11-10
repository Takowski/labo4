#include <stdio.h>

void asciiToChar();
void inverseWord();

int main(void) {
asciiToChar();
    return 0;
}
// Labo 1.4
void asciiToChar () {
    printf("Ecrire un caractère :\n");
    int c =getchar();
    printf("Le code ASCII de ce caractère est : %d\n",c);
}
// Labo 1.5
void inverseWord () {
    char word[20];
     fgets(word,20,stdin);
}