#include <assert.h>                 /*  1 */

/* DON'T DO THIS IN PRODUCTION. */  /*  2 */
int i = 3;                          /*  3 */

int main(void)                      /*  4 */
{                                   /*  5 */
    int *i_p = &i;                  /*  6 */
    assert(*i_p == 3);              /*  7 */

    *i_p = 4;                       /*  8 */
    assert(i == 4);                 /*  9 */

    return 0;                       /* 10 */
}                                   /* 11 */
