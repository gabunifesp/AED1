#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

        quickSort(arr, 0, n);

        clock_t end_time = clock();

        double time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
        printf("Time for size %d: %f seconds\n", n, time_taken);

        free(arr);
    }

    return 0;
}


