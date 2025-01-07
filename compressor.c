#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cli_handling.h"
#include "rle_compress.h"

int main(int argc, char *argv[]){
    int mode = modeSelection(argc,argv);
    switch (mode)
    {
    case -1:
        return -1;
    case 0:
        return 0;
    case 1: {
        char *inputstring = getArgument(argv);
        compressRLE(inputstring);
        break;
    }   
    case 2:
        printf("Didnt make yet");
        break;
    
    default:
        break;
    }
    return 0;
    
}