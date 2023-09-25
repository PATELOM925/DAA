#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main() {
    printf("Enter size of the array: ");
    int size;
    scanf("%d", &size);

    printf("Enter elements of the array: ");
    int arr[size];
    for(int i = 0; i < size; ++i)
        scanf("%d", arr+i);

    selection_sort(arr,size);

    printf("Sorted array:\n");
    for(int i = 0; i < size; ++i)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}