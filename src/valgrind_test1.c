#include <stdio.h>
#include <string.h>

int main(void)
{
        char a[2];

        a[0] = 'a';

        if(!strcmp(a, "a")) {
            printf("a is \"a\"");
        }

        return 0;
}
