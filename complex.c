#include <assert.h>
#include <complex.h>
#include <math.h>

int main(void)
{
    _Complex double p = 3 + 4 * I;

    assert(creal(p) == 3);
    assert(cimag(p) == 4);

    _Complex double o = 0 + 0 * I;

    double d = sqrt(pow(creal(p) - creal(o), 2) + pow(cimag(p) - cimag(o), 2));
    assert(d == 5.0);

    return 0;
}
