#include <stdio.h>

int main(void)
{
    printf("Input a number: ");

    int n;
    if (scanf("%d", &n) == 1)
        printf("You input %d\n", n);
    else
        fprintf(stderr, "Invalid input (It's not number)\n");

    return 0;
}
