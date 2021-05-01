#include <assert.h>
#include <stdbool.h>
#include <string.h>

int main(void)
{
    assert(4 == 4);
    assert(4 != 5);

    assert(5 > 4);
    assert(5 >= 4);

    assert(3 < 4);
    assert(3 <= 4);

    assert(strcmp("C", "C++") < 0);
    assert(strcmp("C", "Ada") > 0);

    return 0;
}
