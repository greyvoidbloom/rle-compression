#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compressRLE(const char *inputString) {
    int inputlen = strlen(inputString);
    char *outputBuffer = (char *)malloc(2 * inputlen * sizeof(char));
    int outputIndex = 0;

    for (int i = 0; i < inputlen; i++) {
        int count = 1;
        while (i + 1 < inputlen && inputString[i] == inputString[i + 1]) {
            count++;
            i++;
        }
        // Store results in buffer
        outputBuffer[outputIndex++] = inputString[i];
        outputIndex += sprintf(outputBuffer + outputIndex, "%d", count);
    }
    printf("%s\n", outputBuffer);
    free(outputBuffer);
}