/*
 *  Verify that the expression getchar() != EOF is 0 or 1 .
 */

#include <stdio.h>

main()
{
    int c;
    c = getchar();
    // when c = ctrl-z , c != EOF value is 0, otherwise 1 .
    printf("%d\n", c != EOF);
}
