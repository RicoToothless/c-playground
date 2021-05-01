#include <assert.h>
#include <stdbool.h>

int main(void)
{
    assert((true && true) == true);
    assert((true && false) == false);
    assert((false && true) == false);
    assert((false && false) == false);

    assert((true || true) == true);
    assert((true || false) == true);
    assert((false || true) == true);
    assert((false || false) == false);

    assert((!true) == false);
    assert((!false) == true);

    return 0;
}
