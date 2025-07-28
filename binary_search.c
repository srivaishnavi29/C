#include <stdio.h>
int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1, mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {5, 10, 15, 20, 25, 30, 35};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;
    printf("Enter the number to search: ");
    scanf("%d", &key);
    result = binarySearch(arr, size, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");
    return 0;
}
