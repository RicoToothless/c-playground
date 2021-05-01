#include <assert.h>

int main(void)
{
    unsigned max = 5 > 3 ? 5 : 3;

    assert(max == 5);

    return 0;
}
