#include <stdio.h>
#include <unistd.h> // for getting env vars
#include <stdlib.h>
#include "uwuShell-commands.h"

int main(void) {
    char* user = getenv("USER"); // yoink the username
    printf("Welcome to uwuShell, %s\n", user);


}
