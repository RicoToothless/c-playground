#include <stdio.h>                             /*  1 */
#include <stdlib.h>                            /*  2 */

#define PUTERR(format, ...) { \
    fprintf(stderr, "(%s:%d) " format "\n", \
        __FILE__, __LINE__, ##__VA_ARGS__); \
}

int main(void)                                 /*  3 */
{                                              /*  4 */
    int *i_p = (int *) malloc(sizeof(int));    /*  5 */
    if (!i_p) {                                /*  6 */
        PUTERR("Failed to allocate int");      /*  7 */
        goto ERROR;                            /*  8 */
    }                                          /*  9 */

    free(i_p);                                 /* 10 */

    /* i_p is a dangling pointer now. */       /* 11 */
    *i_p = 3;                                  /* 12 */

    if (*i_p == 3) {                           /* 13 */
        PUTERR("It should not be 3");          /* 14 */
        goto ERROR;                            /* 15 */
    }                                          /* 16 */

    return 0;                                  /* 17 */

ERROR:                                         /* 18 */
    if (i_p)                                   /* 19 */
        free(i_p);                             /* 20 */

    return 1;                                  /* 21 */
}                                              /* 22 */
