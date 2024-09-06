#include <stdio.h>

int main() {
    char c = 'a';
    int i = 0;

    do {
        printf("%c, ", c);
        c = c + 4; // increment by 4 to skip 3 alphabets
        i++;
    } while (i < 26/4); // loop 26/4 times to cover all alphabets

    return 0;
}