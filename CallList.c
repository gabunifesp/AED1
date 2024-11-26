#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N, K;
    char temp[21];
    scanf("%d %d", &N, &K);
    char students[N][21];

    for (int i = 0; i < N; i++) {
        scanf("%s", students[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (strcmp(students[j], students[j + 1]) > 0) {
                strcpy(temp, students[j]);
                strcpy(students[j], students[j + 1]);
                strcpy(students[j + 1], temp);
            }
        }
    }

    printf("%s\n", students[K - 1]);

    return 0;
}
