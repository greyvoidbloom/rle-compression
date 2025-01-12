#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decompressRLE(const char *inputString) {
    int char_count = strlen(inputString);
    int max_output_size = 0;
    for (int i = 1; i < char_count; i += 2) {
        max_output_size += (inputString[i] - '0');
    }
    char *result = (char *)malloc(max_output_size + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    int resultIndex = 0;
    for (int i = 1; i < char_count; i += 2) {
        char character = inputString[i - 1];
        int count = inputString[i] - '0';
        for (int j = 0; j < count; j++) {
            result[resultIndex++] = character;
        }
    }
    result[resultIndex] = '\0';
    printf("%s\n", result);
    free(result);
}
