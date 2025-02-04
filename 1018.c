#include <stdio.h>

int main (){
    int a;
    scanf ("%d", &a);
    int C=a/100,
    L=(a-(C*100))/50,
    XX=(a-(C*100 + L*50))/20,
    X=(a-(C*100 + L*50 + XX*20))/10,
    V= (a-(C*100 + L*50 + XX*20 + X*10))/5,
    II=(a-(C*100 + L*50 + XX*20 + X*10 + V*5))/2,
    I=a-(C*100 + L*50 + XX*20 + X*10 + V*5+II*2);
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", a, C, L, XX, X, V, II, I);
    return 0;
}
