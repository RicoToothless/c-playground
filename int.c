#include <limits.h>
#include <stdio.h>

int main(void)
{    
    printf("Max of signed char: %d\n", CHAR_MAX);
    printf("Min of signed char: %d\n", CHAR_MIN);

    printf("Max of signed short: %d\n", SHRT_MAX);
    printf("Min of signed short: %d\n", SHRT_MIN);

    printf("Max of signed int: %d\n", INT_MAX);
    printf("Min of signed int: %d\n", INT_MIN);

    printf("Max of signed long: %ld\n", LONG_MAX);
    printf("Min of signed long: %ld\n", LONG_MIN);

    printf("Max of signed long long: %lld\n", LLONG_MAX);
    printf("Min of signed long long: %lld\n", LLONG_MIN);

    printf("\n");  /* Line separator. */

    printf("Max of unsigned char: %u\n", UCHAR_MAX);

    printf("Max of unsigned short: %u\n", USHRT_MAX);

    printf("Max of unsigned int: %u\n", UINT_MAX);

    printf("Max of unsigned long: %lu\n", ULONG_MAX);

    printf("Max of unsigned long long: %llu\n", ULLONG_MAX);

    return 0;
}
