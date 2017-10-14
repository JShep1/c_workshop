#include <stdio.h>


void foo()
{
        char *x = 0;
        *x = 3;
        return;
}

int main(void)
{
        foo();

        return 0;
}
