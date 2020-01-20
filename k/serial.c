#include "io.h"

int write(char *c)
{
   int i = 0;
   while (c[i])
   {
       outb(0x3F8, c[i++]);
   }
}