#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[100], str2[100]; // Arrays to store the input strings
    char *combined; // Pointer to store the combined string

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", str2);

    // Allocate memory for the combined string
    combined = (char *)malloc(strlen(str1) + strlen(str2) + 1);

    // Check if memory allocation was successful
    if (combined == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Use strcpy and strcat to combine the strings
    strcpy(combined, str1);
    strcat(combined, str2);

    // Print the combined string
    printf("Combined String: %s\n", combined);

    // Free the dynamically allocated memory
    free(combined);

    return 0;
}
