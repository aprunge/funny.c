#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include <string.h>
#include <stdlib.h>

int invertcolors() {
  char command[15];
  strcpy(command, "xcalib -i -a > /dev/null");

  while(1) {
    system(command);
  } 
}

