#include <assert.h>

int main(void)
{
    assert(4 + 3 == 7);
    assert(4 - 3 == 1);
    assert(4 * 3 == 12);
    assert(4 / 3 == 1);
    assert(4 % 3 == 1);

    unsigned n = 3;

    assert(++n == 4);
    assert(n++ == 4);
    assert(n == 5);


    return 0;
}
