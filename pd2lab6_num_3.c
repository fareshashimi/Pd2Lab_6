#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *firstName = "John";  // Your first name
    char *lastName = "Doe";    // Your last name

    // Allocate memory for the first name
    char *fullName = (char *)malloc(strlen(firstName) + 1);

    // Check if memory allocation was successful
    if (fullName == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Copy the first name to the allocated memory
    strcpy(fullName, firstName);

    // Expand the memory area to include the last name
    fullName = (char *)realloc(fullName, strlen(fullName) + strlen(lastName) + 2);

    // Check if realloc was successful
    if (fullName == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Add a space and then concatenate the last name
    strcat(fullName, " ");
    strcat(fullName, lastName);

    // Print the result
    printf("Full Name: %s\n", fullName);

    // Free the dynamically allocated memory
    free(fullName);

    return 0;
}
