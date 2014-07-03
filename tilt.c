#include <stdio.h>
#include "2048.h"

int tilt_line_left(int length,int *line)
{
  // make sure vector length is sensible
  if (length<1||length>255) return -1;

  // slide tiles to the left
  int a = 0; 
  for (a = 3; a >= 1; a --) {
    if (line[a] != 0 && line [a - 1] == 0) {
      line[a - 1] = line[a];
      line[a]= 0;
    }
  }
  // combine tiles as required
  int b = 0;
  for (b = 3; b >= 1; b --) {
    if (line[b] == line[b + 1]) {
      line[b] = line[b] * 2;
      line([b + 1] = 0);
    }
  }

  return 0;
}
