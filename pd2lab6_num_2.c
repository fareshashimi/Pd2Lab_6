#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *nameAndSurname; // Pointer to store name and surname
    const char *firstName = "John";
    const char *lastName = "Doe";

    // Calculate the total memory required, including space for a space character and the null terminator
    size_t totalLength = strlen(firstName) + strlen(lastName) + 2; // +1 for space, +1 for null terminator

    // Allocate memory for the name and surname
    nameAndSurname = (char *)malloc(totalLength);

    // Check if memory allocation was successful
    if (nameAndSurname == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use strcpy to concatenate the first name and last name with a space in between
    strcpy(nameAndSurname, firstName);
    strcat(nameAndSurname, " "); // Add a space
    strcat(nameAndSurname, lastName);

    // Print the result
    printf("Name and Surname: %s\n", nameAndSurname);

    // Free the dynamically allocated memory
    free(nameAndSurname);

    return 0;
}
