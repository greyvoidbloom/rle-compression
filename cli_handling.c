#include <stdio.h>
char* argument_handling(int arg_count,char *arg_val[]){
    switch (arg_count)
    {
    case 2:
        break;
    case 1:
        fprintf(stderr,"Too few arguments(%d). Need 1\n",arg_count-1);
        exit(-1);
    default:
        fprintf(stderr,"Too many arguments(%d). Need 1\n",arg_count-1);
        exit(-1);
    }
    return arg_val[1];
}