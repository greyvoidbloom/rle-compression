#ifndef CLI_HANDLING_H
#define CLI_HANDLING_H

void showHelp();
void showVersion();
char* getArgument(char* arg_val[]);
int modeSelection(int arg_count, char *arg_val[]);

#endif
