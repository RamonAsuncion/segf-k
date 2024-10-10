#ifndef _seg_fk_h_
#define _seg_fk_h_

typedef struct {
  char *method;
  char *uri;
  char *headers;
  char *body;
} HttpRequest;

typedef struct {
  char *status_code;
  char *headers;
  char *body;
} HttpResponse;

typedef void (*RouterHandler)(HttpRequest *req, HttpResponse *res);

void segfk_start_server(int port);
void segfk_stop_server();
void segfk_add_route(const char *method, const char *path, RouterHandler handler);
HttpRequest* segfk_create_request();
HttpResponse* segfk_create_response();
void segfk_send_response(HttpResponse *response);



#endif // _seg_fk_h_
