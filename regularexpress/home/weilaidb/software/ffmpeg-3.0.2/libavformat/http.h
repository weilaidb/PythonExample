#define AVFORMAT_HTTP_H
#define HTTP_HEADERS_SIZE 4096
void ff_http_init_auth_state(URLContext *dest, const URLContext *src);
int ff_http_do_new_request(URLContext *h, const char *uri);
int ff_http_averror(int status_code, int default_averror);
