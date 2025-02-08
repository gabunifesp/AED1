#include <stdio.h>

int main() {

    float input[3];
    for (int i=0; i<3; i++){
        scanf("%f", &input[i]);
    }

    int temp;
    if (input[0]<input[1]){
        temp=input[0];
        input[0]=input[1];
        input[1]=temp;
    }
    if (input [1]<input[2]){
        temp=input[1];
        input[1]=input[2];
        input[2]=temp;
    }
    if (input[0]<input[1]){
        temp=input[0];
        input[0]=input[1];
        input[1]=temp;
    }


    float A=input[0], B=input[1], C=input[2];

    if (A>=B+C) printf("NAO FORMA TRIANGULO\n");
    else{
        if (A*A==B*B+C*C) printf("TRIANGULO RETANGULO\n");
        if (A*A>B*B+C*C) printf("TRIANGULO OBTUSANGULO\n");
        if (A*A<B*B+C*C) printf("TRIANGULO ACUTANGULO\n");
        if (A==B && A==C) printf("TRIANGULO EQUILATERO\n");
        else if (A==B || A==C || B==C) printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
