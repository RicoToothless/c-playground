#include <stdio.h>
#include <time.h>

int main(void)
{
    // Get the object to `tm *` for current time.
    time_t t = time(NULL);
    struct tm *now = localtime(&t);

    switch (now->tm_wday) {
    case 0:  // Sunday.
    case 6:  // Saturday.
        // Fallthrough.
        printf("Weekend\n");
        break;
    case 5:  // Friday.
        printf("Thank God. It's Friday.\n");
        break;
    case 3:  // Wednesday.
        printf("Hump day\n");
        break;
    default:  // All other days of week.
        printf("Week\n");
        break;
    }

    return 0;
}
