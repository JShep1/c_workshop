#include <stdio.h>

int
main(int argc, char **argv)
{
    char a[2];

    a[0] = 'a';

    if(!strcmp(a, "a")) {
        printf("a is \"a\"");
    }

    return 0;
}
