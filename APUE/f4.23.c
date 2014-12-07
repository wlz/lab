#include "apue.h"

int main(void)
{
    if(chdir("/tmp"))
        err_sys("chdir failed");
    printf("chdir to /tmp succeeded\n"); 
    exit(0);
}
