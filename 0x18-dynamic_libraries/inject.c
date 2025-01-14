#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Custom function to replace the original one */

int main(int argc, char **argv)
{
    /* Modify the arguments to match the desired ones */
    char *new_args[] = {"gm", "9", "8", "10", "24", "75", "9", NULL};
    
    /* Call the original main function with the new arguments */
    return execvp("gm", new_args);
    /* Executes the gm program with the altered arguments */
}
