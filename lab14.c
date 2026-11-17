#include <stdio.h>

const int *findValue(const int *a, int n, int value) {
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            return &a[i];
        }
    }
    return NULL;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    const int *result = findValue(arr, n, target);

    if (result != NULL) {
        printf("Элемент найден: %d\n", *result);
    } else {
        printf("Элемент не найден\n");
    }

    return 0;
}
