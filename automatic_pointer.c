#include <assert.h>     /*  1 */

int main(void)          /*  2 */
{                       /*  3 */
    int i = 3;          /*  4 */
    int *i_p = &i;      /*  5 */

    assert(*i_p == 3);  /*  6 */

    *i_p = 4;           /*  7 */
    assert(i == 4);     /*  8 */

    return 0;           /*  9 */
}                       /* 10 */
