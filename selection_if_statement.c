#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Prompt for input.
    printf("Input an integer: ");

    int num;
    // Valid input.
    if (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }
    }
    // Invalid input.
    else {
        fprintf(stderr, "Invalid input\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
