#include <stdio.h>

int main() {
    int inputSecondi;
    int ore, minuti, secondi;
    int secondiRimanenti;
    printf("Inserisci il numero di secondi: ");
    scanf("%d", &inputSecondi);
    ore = inputSecondi / 3600;
    secondiRimanenti = inputSecondi % 3600;
    minuti = secondiRimanenti / 60;
    secondi = secondiRimanenti % 60;
    printf("%d ore, %d minuti e %d secondi\n", ore, minuti, secondi);

    return 0;
}
