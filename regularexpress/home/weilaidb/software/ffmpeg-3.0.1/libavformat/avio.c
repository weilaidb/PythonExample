#if CONFIG_NETWORK
static URLProtocol *first_protocol = NULL;
URLProtocol *ffurl_protocol_next(const URLProtocol *prev)
static const char *urlcontext_to_name(void *ptr)
static void *urlcontext_child_next(void *obj, void *prev)
static const AVClass *urlcontext_child_class_next(const AVClass *prev)
#define OFFSET(x) offsetof(URLContext,x)
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
const AVClass ffurl_context_class = ;
const char *avio_enum_protocols(void **opaque, int output)
int ffurl_register_protocol(URLProtocol *protocol)
static int url_alloc_for_protocol(URLContext **puc, struct URLProtocol *up,
const char *filename, int flags,
const AVIOInterruptCB *int_cb)
int ffurl_connect(URLContext *uc, AVDictionary **options)
int ffurl_accept(URLContext *s, URLContext **c)
int ffurl_handshake(URLContext *c)
#define URL_SCHEME_CHARS                        \
"abcdefghijklmnopqrstuvwxyz"                \
"ABCDEFGHIJKLMNOPQRSTUVWXYZ"                \
"0123456789+-."
static struct URLProtocol *url_find_protocol(const char *filename)
int ffurl_alloc(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb)
int ffurl_open_whitelist(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options, const char *whitelist)
int ffurl_open(URLContext **puc, const char *filename, int flags,
const AVIOInterruptCB *int_cb, AVDictionary **options)
static inline int retry_transfer_wrapper(URLContext *h, uint8_t *buf,
int size, int size_min,
int (*transfer_func)(URLContext *h,
uint8_t *buf,
int size))
int ffurl_read(URLContext *h, unsigned char *buf, int size)
int ffurl_read_complete(URLContext *h, unsigned char *buf, int size)
int ffurl_write(URLContext *h, const unsigned char *buf, int size)
int64_t ffurl_seek(URLContext *h, int64_t pos, int whence)
int ffurl_closep(URLContext **hh)
int ffurl_close(URLContext *h)
const char *avio_find_protocol_name(const char *url)
int avio_check(const char *url, int flags)
int avpriv_io_move(const char *url_src, const char *url_dst)
int avpriv_io_delete(const char *url)
int avio_open_dir(AVIODirContext **s, const char *url, AVDictionary **options)
int avio_read_dir(AVIODirContext *s, AVIODirEntry **next)
int avio_close_dir(AVIODirContext **s)
void avio_free_directory_entry(AVIODirEntry **entry)
int64_t ffurl_size(URLContext *h)
int ffurl_get_file_handle(URLContext *h)
int ffurl_get_multi_file_handle(URLContext *h, int **handles, int *numhandles)
int ffurl_shutdown(URLContext *h, int flags)
int ff_check_interrupt(AVIOInterruptCB *cb)
