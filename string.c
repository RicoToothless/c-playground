#include <assert.h>
#include <string.h>

int main(void)
{
    char s1[] = "Hello World";
    char s2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

    assert(strcmp(s1, s2) == 0);

    return 0;
}
