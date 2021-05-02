#include <stdio.h>                                /*  1 */

int main(void)                                    /*  2 */
{                                                 /*  3 */
    int *i_p = NULL;                              /*  4 */

    {                                             /*  5 */
        int i = 3;                                /*  6 */

        i_p = &i;                                 /*  7 */
    }                                             /*  8 */

    /* i_p is a dangling pointer now. */          /*  9 */
    if (*i_p == 3) {                              /* 10 */
        fprintf(stderr, "It should not be 3\n");  /* 11 */
        return 1;                                 /* 12 */
    }                                             /* 13 */

    return 0;                                     /* 14 */
}                                                 /* 15 */

