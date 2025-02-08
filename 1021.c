#include <stdio.h>

int main() {
    double input;
    int notas, moedas;
    int notasprint[6] = {100, 50, 20, 10, 5, 2};
    int moedasprint[6] = {100, 50, 25, 10, 5, 1};
    scanf("%lf", &input);

    int centavos = (int)(input * 100 + 0.5);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        notas = centavos / (notasprint[i] * 100);
        centavos %= (notasprint[i] * 100);
        printf("%d nota(s) de R$ %d.00\n", notas, notasprint[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        moedas = centavos / moedasprint[i];
        centavos %= moedasprint[i];
        printf("%d moeda(s) de R$ %.2f\n", moedas, moedasprint[i] / 100.0);
    }

    return 0;
}
