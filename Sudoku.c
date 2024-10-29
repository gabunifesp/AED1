#include <stdio.h>

int main (){
    int MATRIX[9][9], n, k, i, j, o, p, x, y, boolean;

    scanf("%d", &n); //O numero de instancias

    for (k=1; k<=n; k++){
        //Leitor da matriz
        for (i=0; i<9; i++){
            for (j=0; j<9; j++){
                scanf("%d", &MATRIX[i][j]);
            }
        }

        boolean=1; //Valor para determinar se a instancia é verdadeira ou falsa. Começa verdadeiro

        for (i=0; i<9 && boolean==1; i++){ //Verificador de linhas e colunas
            int  counter1[9] = {0}, counter2[9] = {0};

            for (j=0; j<9; j++){
                if ( MATRIX[i][j]>9 || MATRIX[i][j]<1 || counter1[MATRIX[i][j]-1]){
                    boolean=0;
                    break;
                }
                counter1[MATRIX[i][j]-1]=1;

                if ( MATRIX[j][i]>9 || MATRIX[j][i]<1 || counter2[MATRIX[j][i]-1]){
                    boolean=0;
                    break;
                }
                counter2[MATRIX[j][i]-1]=1;
            }
        }

        for (o=0;o<3 && boolean==1;o++){ //Verificador das sub-matrizes
           for (p=0;p<3 && boolean==1;p++){
                int counter3[9]={0};
                for (i=o*3, x=o*3 + 3; i<x && boolean==1; i++){
                    for (j=p*3, y=p*3 + 3; j<y; j++){
                        if ( MATRIX[i][j]>9 || MATRIX[i][j]<1 || counter3[MATRIX[i][j]-1]){
                            boolean=0;
                            break;
                        }
                        counter3[MATRIX[i][j]-1]=1;
                    }
                }
           }
        }

        printf("\nInstancia %d\n", k);
        if (boolean) printf("SIM\n\n");
        else printf("NAO\n\n");

    }










    return (0);
}
