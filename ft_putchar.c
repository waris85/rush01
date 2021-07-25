#include <unistd.h>

void boxwrite( char c)
{
    write (1,&c, 1);
}