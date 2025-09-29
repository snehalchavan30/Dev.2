#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int key) {
    // Iterate through the array from the first element to the last
    for (int i = 0; i < n; i++) {
        // If the key is found, return its index
        if (arr[i] == key) {
            return i;
        }
    }
    // If the key is not found after traversing the entire array, return -1
    return -1;
}

int main() {
    int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int key = 110; // The element to search for

    // Call the linearSearch function
    int result = linearSearch(arr, n, key);

    // Print the result based on the value returned by the function
    if (result == -1) {
        printf("Element %d is not present in the array.\n", key);
    } else {
        printf("Element %d found at index: %d\n", key, result);
    }

    // Example for an element not found
    key = 99;
    result = linearSearch(arr, n, key);
    if (result == -1) {
        printf("Element %d is not present in the array.\n", key);
    } else {
        printf("Element %d found at index: %d\n", key, result);
    }

    return 0;
}
