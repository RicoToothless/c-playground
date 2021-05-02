#include <stdio.h>                                          /*  1 */

int main(void)                                              /*  2 */
{                                                           /*  3 */
    int a = 3;                                              /*  4 */
    int b = 3;                                              /*  5 */

    int *p = &a;                                            /*  6 */
    int *q = &a;                                            /*  7 */
    int *r = &b;                                            /*  8 */

    if (!(p == q)) {                                        /*  9 */
        fprintf(stderr, "Wrong addresses: %p %p\n", p, q);  /* 10 */
        goto ERROR;                                         /* 11 */
    }                                                       /* 12 */

    if (p == r) {                                           /* 13 */
        fprintf(stderr, "Wrong addresses: %p %p\n", p, r);  /* 14 */
        goto ERROR;                                         /* 15 */
    }                                                       /* 16 */

    if (!(*p == *q)) {                                      /* 17 */
        fprintf(stderr, "Wrong values: %d %d\n", *p, *q);   /* 18 */
        goto ERROR;                                         /* 19 */
    }                                                       /* 20 */

    if (!(*p == *r)) {                                      /* 21 */
        fprintf(stderr, "Wrong values: %d %d\n", *p, *r);   /* 22 */
        goto ERROR;                                         /* 23 */
    }                                                       /* 24 */

    return 0;                                               /* 25 */

ERROR:                                                      /* 26 */
    return 1;                                               /* 27 */
}                                                           /* 28 */
