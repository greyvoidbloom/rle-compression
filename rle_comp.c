#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char c;
    int count;
} char_det;
void compressRLE(char *inputString){
    int inputlen = strlen(inputString);
    char_det return_arr[50];
    int index=0;
    for(int i = 0;i<inputlen;i++){
        int count = 1;
        while (i+1<inputlen && inputString[i]==inputString[i+1]){
            count++;
            i++;
        }
        printf("%c%d",inputString[i],count);
        return_arr[index].c = inputString[i];
        return_arr[index].count = count;
        index++;
    }
    
    
    

}
int main(){
    char* teststr = "aaabbbccioeee";
    compressRLE(teststr);
    return 0;

}