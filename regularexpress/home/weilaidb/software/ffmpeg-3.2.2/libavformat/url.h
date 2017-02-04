#define AVFORMAT_URL_H
#define URL_PROTOCOL_FLAG_NESTED_SCHEME 1
#define URL_PROTOCOL_FLAG_NETWORK       2
extern const AVClass ffurl_context_class;
typedef struct URLContext  URLContext;
typedef struct URLProtocol  URLProtocol;
ffurl_alloc;
ffurl_connect;
ffurl_open_whitelist;
ffurl_open;
ffurl_accept;
ffurl_handshake;
ffurl_read;
ffurl_read_complete;
ffurl_write;
ffurl_seek;
ffurl_closep;
ffurl_close;
ffurl_size;
ffurl_get_file_handle;
ffurl_get_multi_file_handle;
ffurl_shutdown;
ff_check_interrupt;
ff_udp_set_remote_url;
ff_udp_get_local_port;
ff_url_join av_printf_format(7, 8);
ff_make_absolute_url;
*ff_alloc_dir_entry;
*ff_urlcontext_child_class_next;
**ffurl_get_protocols;
