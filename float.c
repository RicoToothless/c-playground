#include <float.h>
#include <stdio.h>

int main(void)
{
    printf("Max of float: %e\n", FLT_MAX);
    printf("Min pos of float: %e\n", FLT_MIN);

    printf("Max of double: %e\n", DBL_MAX);
    printf("Min pos of double: %e\n", DBL_MIN);

    printf("Max of long double: %Le\n", LDBL_MAX);
    printf("Min pos of long double: %Le\n", LDBL_MIN);

    printf("\n");  /* Line separator. */

    printf("Digit of float: %u\n", FLT_DIG);
    printf("Digit of double: %u\n", DBL_DIG);
    printf("Digit of long double: %u\n", LDBL_DIG);

    return 0;
}
