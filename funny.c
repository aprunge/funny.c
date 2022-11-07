#include "modules/invertcolors.h"
#include "modules/randfilemove.h"
#include "modules/movecursor.h"
#include <pthread.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main() { 
  pthread_t invert;
  pthread_t mvfile;

  pthread_create(&invert, NULL, invertcolors, NULL); 
  pthread_create(&mvfile, NULL, mvfile, NULL);
  movecursor(2);
}
