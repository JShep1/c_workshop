#include <stdio.h>


void foo()
{
    char *x = 0;
    *x = 3;
    return;
}

int
main(int argc, char **argv)
{
    foo();

    return 0;
}
