#include <stdio.h>
#include "colors.h"
#include <unistd.h> // for getting env vars and stuff
#include <stdlib.h>
#include <string.h>
#include "uwuShell-commands.h"
#define true = 0;
#define false = !0;

int main(void) {
    char* currentDir = getcwd(currentDir, sizeof(currentDir));
    char* user = getenv("USER");         // yoink the username
    printf("Welcome to uwuShell, %s\n", user);
    char* cmd[2048];                 // command we executing
    char* lastcmd[2048];             // previous command (used for !! bangers)
    while (1) {
        printf(BBLU "%s >" reset BLU " %s => " reset, user, currentDir);
        scanf("%s", cmd);           // read the command
        if (strcmp(cmd, "!!") == 0) {          // if command is !!
            strcpy(cmd, lastcmd);   // make the current command the last command
        }
            system(cmd);
    }
}
