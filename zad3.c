#include <stdio.h>
#include <stdbool.h>

int main() {
    int liczba1;
    int liczba2;
    char operacja;
    double wynik;
    
    printf("Podaj pierwsza liczbe:");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe:");
    scanf("%d", &liczba2);
    printf("Podaj operacje: ");
    scanf(" %c", &operacja);

    if (operacja == '+') {
        wynik = (liczba1 + liczba2);
       } else if (operacja == '-') {
            wynik = (liczba1 - liczba2);
        } else if (operacja == '*') {
                wynik = (liczba1 * liczba2);
        } else if (operacja == '/') {
                wynik = (liczba1 - liczba2);
        } else printf("Blad");
    
    printf("Wynik rowna sie %f", wynik);

    return 0;
}
