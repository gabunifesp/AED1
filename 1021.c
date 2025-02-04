#include <stdio.h>

int main (){
    float input;
    scanf ("%f", &input);
    int n=100*input;
    int C=n/10000;
    n-= C*10000;
    int L=n/5000;
    n-= L*5000;
    int XX=n/2000;
    n-= XX*2000;
    int X=n/1000;
    n-= X*1000;
    int V=n/500;
    n-= V*500;
    int II=n/200;
    n-= II*200;
    int I=n/100;
    n-= I*100;
    int l=n/50;
    n-= l*50;
    int xxv=n/25;
    n-= xxv*25;
    int x=n/10;
    n-= x*10;
    int v=n/5;
    n-=v*5;

    printf("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", C, L, XX, X, V, II);
    printf("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", I, l, xxv, x, v, n);

    return 0;
}
