#include <stdio.h>

int main(void)
{
    // Go to stdout.
    printf("Some information\n");

    // Go to stderr.
    fprintf(stderr, "Something wrong\n");

    return 0;
}
