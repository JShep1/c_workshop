#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char **argv)
{
    char *s;
    int num_bytes = 100, num_cycles = 100, i = 0;

    s = malloc(num_bytes);

    for (i = 0; i < num_cycles; i++){
        printf("Cool operations here.\n");
    }

    printf("Done executing.\n");

    return 0;
}
