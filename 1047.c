#include <stdio.h>

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int inicio =60*a + b, fim=60*c + d;
    if (fim<=inicio) fim+=1440;

    int duracao = fim-inicio;
    int horas = floor(duracao/60);
    int minutos = duracao - 60*horas;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
