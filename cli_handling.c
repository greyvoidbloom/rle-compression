#include <stdio.h>
#include <string.h>
void showHelp();
char* getArgument(char* arg_val[]);
int modeSelection(int arg_count,char *arg_val[]){
    if (arg_count < 2) {
        fprintf(stderr, "Error: Missing arguments.\n");
        showHelp();
        return -1;
    }
    if (strcmp(arg_val[1], "-h") == 0) {
        showHelp();
        return 0;
    } else if (strcmp(arg_val[1], "-c") == 0) {
        if (arg_count == 3) {
            return 1;
        } else {
            fprintf(stderr, "Error: Missing string for compression.\n");
            return -1;
        }
    } else if (strcmp(arg_val[1], "-d") == 0) {

        if (arg_count == 3) {
            return 2;
        } else {
            fprintf(stderr, "Error: Missing string for decompression.\n");
            return -1;
        }
    } else {
        fprintf(stderr, "Error: Invalid option '%s'.\n", arg_val[1]);
        showHelp();
        return -1;
    }
}
void showHelp() {
    printf("Usage: ./prog_name [option] [string]\n");
    printf("Options:\n");
    printf("  -h            Show this help menu.\n");
    printf("  -c <string>   Compress the given string.\n");
    printf("  -d <string>   Decompress the given string.\n");
}
    


char* getArgument(char* arg_val[]){
    return arg_val[2];
}