#include <stdbool.h>
#include <stdio.h>

int main()
{
    int num;
    char b[256];
    // Run infinitely until the user input a valid number.
    while(true) {
        // Prompt for user input.
        printf("Input a number: ");

        if (scanf("%d", &num) != 1) {
            // Trick to prevent infinite loop.
            scanf("%s", b);

            // Show error message to the user.
            fprintf(stderr, "Invalid input\n");

            continue;  // Re-start the loop.
        }

        // Show info message to the user.
        printf("You input %d\n", num);

        break;  // Exit the loop.
    }

    return 0;
}
