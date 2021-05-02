#include <assert.h>                                      /*  1 */
#include <stdio.h>                                       /*  2 */
#include <stdlib.h>                                      /*  3 */

int main(void)                                           /*  4 */
{                                                        /*  5 */
    int *i_p = (int *) malloc(sizeof(int));              /*  6 */
    if (!i_p) {                                          /*  7 */
        fprintf(stderr, "Failed to allocate memory\n");  /*  8 */
        goto ERROR;                                      /*  9 */
    }                                                    /* 10 */

    *i_p = 3;                                            /* 11 */
    if (!(*i_p == 3)) {                                  /* 12 */
        fprintf(stderr, "Wrong value: %d\n", *i_p);      /* 13 */
        goto ERROR;                                      /* 14 */
    }                                                    /* 15 */

    free(i_p);                                           /* 16 */

    return 0;                                            /* 17 */

ERROR:                                                   /* 18 */
    if (i_p)                                             /* 19 */
        free(i_p);                                       /* 20 */

    return 1;                                            /* 21 */
}                                                        /* 22 */
