#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    printf("Size of bool: %u\n", sizeof(true));

    printf("Size of char: %u\n", sizeof('c'));

    printf("Size of short: %u\n", sizeof((short) 3));
    printf("Size of int: %u\n", sizeof(3));
    printf("Size of long: %u\n", sizeof(3l));
    printf("Size of long long: %u\n", sizeof(3ll));

    printf("Size of float: %u\n", sizeof(3.4f));
    printf("Size of double: %u\n", sizeof(3.4));
    printf("Size of double: %u\n", sizeof(3.4l));

    return 0;
}
