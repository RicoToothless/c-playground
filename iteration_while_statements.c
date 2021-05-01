#include <stdio.h>

int main(void)
{
    int i = 10;

    while (i > 0) {
        printf("Counting down %d\n", i);

        i--;
    }

    printf("Blast\n");

    return 0;
}
