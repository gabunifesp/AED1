#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int increments[] = {20000, 40000, 60000, 80000, 100000, 120000, 140000, 160000, 180000, 200000, 220000, 240000, 260000, 280000, 300000, 320000, 340000, 360000, 380000, 400000};
    int num_increments = sizeof(increments) / sizeof(increments[0]);

    srand(time(0));

    for (int i = 0; i < num_increments; i++) {
        int n = increments[i];

        int *arr = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            arr[j] = rand() % 400001;
        }

        clock_t start_time = clock();

        insertionSort(arr, n);

        clock_t end_time = clock();

        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time for size %d: %f seconds\n", n, time_taken);

        free(arr);
    }

    return 0;
}
