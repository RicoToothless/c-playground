#include <stdio.h>                                     /*  1 */

int main(void)                                         /*  2 */
{                                                      /*  3 */
    FILE *fp;                                          /*  4 */

    fp = fopen("file.txt", "r");                       /*  5 */
    if (!fp) {                                         /*  6 */
        fprintf(stderr, "Failed to open the file\n");  /*  7 */
        return 1;                                      /*  8 */
    }                                                  /*  9 */

//    if (fp == NULL) {
//        fprintf(stderr, "Failed to open the file\n");
//        return 1;
//    }

    fclose(fp);                                        /* 10 */

    return 0;                                          /* 11 */
}                                                      /* 12 */
