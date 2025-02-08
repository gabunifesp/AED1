#include <stdio.h>

int main() {

    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    double delta=b*b -4*a*c;

    if (a == 0 || delta<0) printf("Impossivel calcular\n");
    else{
        double R1 = (-b + sqrt(delta))/(2*a), R2 =(-b - sqrt(delta))/(2*a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }

    return 0;
}
