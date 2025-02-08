#include <stdio.h>

int MaiorAB(int a, int b){
    return (a+b+abs(a-b))/2;
}

int main() {
    int a, b , c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d eh o maior\n", MaiorAB(MaiorAB(a, b), c));
    return 0;
}
