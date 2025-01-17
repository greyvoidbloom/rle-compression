#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>
int extractCount(const char *inputString ,int *i){
    int count = 0;
    while(i&&isdigit(inputString[*i])){
        count = (count * 10) + (inputString[*i] - '0');
        (*i)++;
    } 
    return count;
}
void decompressRLE(const char *inputString) {
    int char_count = strlen(inputString);
    int max_output_size = 0;
    for (int i = 1; i < char_count; i ++) {
        if(isdigit(inputString[i])){
            int count = extractCount(inputString,&i);
            max_output_size+= count;
        }
    }
    //printf("max output len: %d",max_output_size);
    char *result = (char *)malloc(max_output_size + 1);
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    int resultIndex = 0;
    for (int i = 0; i < char_count;) {
        char character = inputString[i];
        i++;
        int count = extractCount(inputString,&i);
        for (int j = 0; j < count; j++) {
            result[resultIndex++] = character;
        }
    }
    result[resultIndex] = '\0';
    printf("%s\n", result);
    free(result);
}
