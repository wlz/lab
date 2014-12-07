#include "apue.h"

void pr_studio(const char *, FILE *);

int main(void)
{
    FILE    *fp;
    fputs("enter any character\n", stdout);
    if(getchar() == EOF)
        err_sys("getchar error");
    fputs("one line to standard error\n", stderr);

    pr_studio("stdin", stdin);
    pr_studio("stdout", stdout);
    pr_studio("stderr", stderr); 

    if((fp = fopen("/etc/motd", "r")) == NULL)
        err_sys("fopen error");
    if(getc(fp) == EOF)
        err_sys("getc error");
    pr_studio("/etc/motd", fp);

    exit(0);
}

void pr_studio(const char *name, FILE *fp)
{
    printf("stream = %s, ", name); 

    if(fp->_IO_file_flags & _IO_UNBUFFERED)
        printf("unbuffered"); 
    else if(fp->_IO_file_flags & _IO_LINE_BUF)
        printf("line buffered"); 
    else
        printf("fully buffered"); 

    printf(", buffer size = %d\n", fp->_IO_buf_end - fp->_IO_buf_base); 
}
