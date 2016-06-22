#include <iostream>

char mostInstances(char * napis) {

    const int tabSize = 'z' - 'a' + 1;
    int tab[tabSize] = { 0 };

    while(*napis != '\0'){
        printf("Element tab[%d] inkrementuje bo znalazlem litere '%c'.\n", tolower(*napis) - 'a', *napis);
        tab[tolower(*napis) - 'a']++;
        napis++;
    }

    int max = tab[0];
    int index = 0;

    printf("\n\n------------------------\n");

    for (int i = 0; i < tabSize; i++) {
        printf("Litera %c = %d\n", i + 'a', tab[i]);
        if (tab[i] > max){
            max = tab[i];
            index = i;
        }
    }

    printf("------------------------\n\n");

    printf("Ilosc wystapien litery '%c': %d\n\n", index + 'a', max);

    return index + 'a';
}

int main() {

    printf("Znak: %c", mostInstances("OdgkwWAkalgrpibncAzxcnafpwWNAOdnfpqfnds"));

    return 0;
}
