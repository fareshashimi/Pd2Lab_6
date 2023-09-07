#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr; // Pointer to store the dynamically allocated array
    int n;    // Number of elements

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the user entered a non-positive number
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }

    // Allocate memory for the array using calloc
    arr = (int *)calloc(n, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input the elements from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the largest value in the array
    int *ptr = arr; // Pointer to iterate through the array
    int largest = *ptr; // Initialize largest with the first element

    for (int i = 1; i < n; i++) {
        ptr++; // Move the pointer to the next element
        if (*ptr > largest) {
            largest = *ptr; // Update largest if a larger value is found
        }
    }

    // Print the largest value
    printf("The largest value entered is: %d\n", largest);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
