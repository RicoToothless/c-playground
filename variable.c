#include <assert.h>                 /*  1 */
#include <stdio.h>                  /*  2 */

int main(void)                      /*  3 */
{                                   /*  4 */
    int a = 4;                      /*  5 */
    int b = 3;                      /*  6 */

    printf("4 + 3 = %d\n", a + b);  /*  7 */
    printf("4 - 3 = %d\n", a - b);  /*  8 */

    assert(a == 4);                 /*  9 */
    assert(b == 3);                 /* 10 */

    return 0;                       /* 11 */
}                                   /* 12 */
