#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cli_handling.c"

void compressRLE(char *inputString,char *outputString){
    int inputlen = strlen(inputString);
    int outputlen = 0;

}

int main(int argc, char *argv[]){
    char *inputstring = argument_handling(argc,argv);
    printf("%s\n",inputstring);
}