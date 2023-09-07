#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char sentence[1000];
    char **words = NULL;
    char *token;
    int wordCount = 0;

    // Input the sentence
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence into words
    token = strtok(sentence, " \t\n");

    while (token != NULL) {
        // Reallocate memory for the words array
        words = (char **)realloc(words, (wordCount + 1) * sizeof(char *));
        if (words == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        // Allocate memory for the current word and copy it
        words[wordCount] = (char *)malloc(strlen(token) + 1);
        if (words[wordCount] == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }
        strcpy(words[wordCount], token);

        wordCount++;

        // Get the next token
        token = strtok(NULL, " \t\n");
    }

    // Print the words in reverse order
    printf("Reversed sentence: ");
    for (int i = wordCount - 1; i >= 0; i--) {
        printf("%s ", words[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    for (int i = 0; i < wordCount; i++) {
        free(words[i]);
    }
    free(words);

    return 0;
}
