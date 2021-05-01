#include <stdio.h>

int main(void)
{
    /* Positive infinity. */
    double PosInf = 1.0 / 0.0;
    /* Negative infinity. */
    double NegInf = -1.0 / 0.0;
    /* Not a number. */
    double NaN = 0.0 / 0.0;

    printf("%e\n", PosInf);
    printf("%e\n", NegInf);
    printf("%e\n", NaN);

    printf("\n");  /* Line separator. */

    printf("inf + inf = %e\n", PosInf + PosInf);
    printf("-inf + -inf = %e\n", NegInf + NegInf);
    printf("inf + -inf = %e\n", PosInf + NegInf);

    printf("inf + nan = %e", PosInf + NaN);

    return 0;
}
