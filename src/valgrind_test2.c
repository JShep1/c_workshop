#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char *s;
        int num_bytes = 64, i = 0;

        s = malloc(num_bytes);

        for (i = 0; i < num_bytes; i++){
            s[i] = ('a' + (i % 26));
            printf("Storing %c at %i\n",s[i], i);
        }

        printf("Done executing.\n");

        return 0;
}
