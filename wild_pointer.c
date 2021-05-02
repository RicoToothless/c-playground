#include <stdio.h>                             /*  1 */
#include <stdlib.h>                            /*  2 */

#define PUTS(format, ...) { \
    fprintf(stdout, "(%s:%d) " format "\n", \
        __FILE__, __LINE__, ##__VA_ARGS__); \
}

#define PUTERR(format, ...) { \
    fprintf(stderr, "(%s:%d) " format "\n", \
        __FILE__, __LINE__, ##__VA_ARGS__); \
}

int main(void)                                 /*  3 */
{                                              /*  4 */
    int *i_p;  /* Wild pointer. */             /*  5 */

    if (i_p == NULL) {                         /*  6 */
        PUTS("i_p is NULL");                   /*  7 */
    }                                          /*  8 */

    if (!i_p) {                                /*  9 */
        PUTS("i_p is EMPTY");                  /* 10 */
    }                                          /* 11 */

    i_p = NULL;  /* NULL pointer. */           /* 12 */

    if (i_p == NULL) {                         /* 13 */
        PUTS("i_p is NULL");                   /* 14 */
    }                                          /* 15 */

    if (!i_p) {                                /* 16 */
        PUTS("i_p is EMPTY");                  /* 17 */
    }                                          /* 18 */

    i_p = (int *) malloc(sizeof(int));         /* 19 */
    if (!i_p) {                                /* 20 */
        PUTERR("Failed to allocate memory");   /* 21 */
        goto ERROR;                            /* 22 */
    }                                          /* 23 */

    if (i_p == NULL) {                         /* 24 */
        PUTS("i_p is NULL");                   /* 25 */
    }                                          /* 26 */

    if (!i_p) {                                /* 27 */
        PUTS("i_p is EMPTY");                  /* 28 */
    }                                          /* 29 */

    free(i_p);                                 /* 30 */

    return 0;                                  /* 31 */

ERROR:                                         /* 32 */
    if (i_p)                                   /* 33 */
        free(i_p);                             /* 34 */

    return 1;                                  /* 35 */
}                                              /* 36 */
