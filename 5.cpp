#include <iostream>

void trim(char * text) {
    char * c = text;
    char * result = text;

    while (*c) {
        if (*c != ' ')
            *result++ = *c;
        c++;
    }

    *result = '\0';
}

int getSize(char * text) {
    int size = 0;

    char * tmp = text;

    while (*tmp) {
        tmp++;
        size++;
    }

    return size;
}

bool isPalindrome(char * text) {
    trim(text);
    int size = getSize(text);

    bool isIt = true;

    for (int i = 0; i < size / 2; i++) {
        if (*(text + i) != *(text + size - i - 1))
            isIt = false;
    }

    return isIt;
}

int main() {

    char someText[] = "kobyla ma maly bok";

    printf("Czy \"%s\" jest palindromem: %s.\n", someText, isPalindrome(someText) ? "tak" : "nie");

    system("pause");

    return 0;
}
