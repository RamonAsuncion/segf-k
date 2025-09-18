/**
 * \mainpage
 * # segf-k Web Framework
 *
 * segf-k is a minimal C web framework for experimentation.
 *
 * ## Usage
 * See the function documentation for details.
 */
#ifndef _SEG_FK_H_
#define _SEG_FK_H_

struct http_request {
  char *method;
  char *uri;
  char *headers;
  char *body;
};

struct http_response {
  char *status_code;
  char *headers;
  char *body;
};

typedef void (*router_handler)(struct http_request *req, struct http_response *res);

/**
 * @brief Starts the minimal HTTP server.
 * @param port The port to listen on.
 */
void segfk_run(int port);

// in progress...
void segfk_stop();
void segfk_add_route(const char *method, const char *path, router_handler handler);
struct http_request *segfk_create_request();
struct http_response *segfk_create_response();
void segfk_send_response(struct http_response *response);

#endif /* _SEG_FK_H_ */
