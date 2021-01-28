#include <stdio.h>
#include "colors.h"
#include <unistd.h> // for getting env vars and stuff
#include <stdlib.h>
#include <string.h>
#include "uwuShell-commands.h"

int main(void) {
    char* currentDir = getcwd(currentDir, sizeof(currentDir)); // FIX-ME: this doesnt fucking work
    char* user = getenv("USER");         // yoink the username
    printf("Welcome to Shell, %s\n", user);
    char *cmd[2048];                 // command we executing
    char *lastcmd[2048];             // previous command (used for !! bangers)
    while (1) {
        printf(BBLU "%s >" reset BLU " %s => " reset, user, currentDir);
        gets(cmd, 2048, stdin);                // this will probably wail
        if (strcmp(cmd, "!!") == 0) {          // if command is !!
            strcpy(cmd, lastcmd);   // make the current command the last command
	    system(cmd); 	    // run dat bitch
        }
            system(cmd);	    // run dat bitch
    }
}
