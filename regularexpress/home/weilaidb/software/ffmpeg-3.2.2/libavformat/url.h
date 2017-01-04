#define AVFORMAT_URL_H
#define URL_PROTOCOL_FLAG_NESTED_SCHEME 1
#define URL_PROTOCOL_FLAG_NETWORK       2
extern const AVClass ffurl_context_class;
typedef struct URLContext  URLContext;
typedef struct URLProtocol  URLProtocol;
int ffurl_alloc(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb);
int ffurl_connect(URLContext *uc, AVDictionary **options);
int ffurl_open_whitelist(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options,
const char *whitelist, const char* blacklist,
URLContext *parent);
int ffurl_open(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options);
int ffurl_accept(URLContext *s, URLContext **c);
int ffurl_handshake(URLContext *c);
int ffurl_read(URLContext *h, unsigned char *buf, int size);
int ffurl_read_complete(URLContext *h, unsigned char *buf, int size);
int ffurl_write(URLContext *h, const unsigned char *buf, int size);
int64_t ffurl_seek(URLContext *h, int64_t pos, int whence);
int ffurl_closep(URLContext **h);
int ffurl_close(URLContext *h);
int64_t ffurl_size(URLContext *h);
int ffurl_get_file_handle(URLContext *h);
int ffurl_get_multi_file_handle(URLContext *h, int **handles, int *numhandles);
int ffurl_shutdown(URLContext *h, int flags);
int ff_check_interrupt(AVIOInterruptCB *cb);
int ff_udp_set_remote_url(URLContext *h, const char *uri);
int ff_udp_get_local_port(URLContext *h);
int ff_url_join(char *str, int size, const char *proto,
const char *authorization, const char *hostname,
int port, const char *fmt, ...) av_printf_format(7, 8);
void ff_make_absolute_url(char *buf, int size, const char *base,
const char *rel);
AVIODirEntry *ff_alloc_dir_entry(void);
const AVClass *ff_urlcontext_child_class_next(const AVClass *prev);
const URLProtocol **ffurl_get_protocols(const char *whitelist,
const char *blacklist);
