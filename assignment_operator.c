#include <assert.h>

int main(void)
{
    unsigned short n = 4;

    n += 3;
    assert(n == 7);

    return 0;
}
