#include <stdio.h>
#include <stdlib.h>
#include "segfk.h"

int main(int argc, char **argv)
{
  int port = 8080;
  if (argc > 1) {
    port = atoi(argv[1]);
  }
  segfk_run(port);
  return 0;
}
