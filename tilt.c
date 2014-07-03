#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
    int a = 0;
    for (a = 2; a > 0 a--) 
    {
      int b = 0;
      for(b = 3; b >= 1; b--) 
      {
        if (line [b] != 0 && line [b-1] == 0) 
        {
          line [b-1] = line[b];
          line [b] = 0;
        }
      }
    }
  // combine tiles as required

  return 0;
}
