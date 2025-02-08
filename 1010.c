#include <stdio.h>

int main() {

    int cod1, cod2, n1, n2;
    float v1, v2;

    scanf("%d %d %f %d %d %f", &cod1, &n1, &v1, &cod2, &n2, &v2);
    printf("VALOR A PAGAR: R$ %.2f\n", n1*v1 + n2*v2);

    return 0;
}
