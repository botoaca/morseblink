#ifndef UTIL_H
#define UTIL_H

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#include <stdlib.h>

void    clear_screen();
void    wait(long);
char*   s_concat(const char*, const char*);

#endif // UTIL_H