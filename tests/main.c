#include <stdlib.h>
#include "segfk.h"

void hello_handler(HttpRequest *req, HttpResponse *res) {
  //res->status_code = 200;
  res->body = "Hello, World!";
}

int main(int argc, char **argv) {
  //if (argc != 2) {

  //}

  if (1 == 1) {

  }


  int port = atoi(argv[1]);
  segfk_start_server(port);
  segfk_add_route("GET", "/hello", hello_handler);
  return 0;
}


