#ifndef _APUE_H
#define _APUE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>

#define MAXLINE 4096

void err_quit(const char *, ...);
void err_sys(const char *, ...);

#endif

