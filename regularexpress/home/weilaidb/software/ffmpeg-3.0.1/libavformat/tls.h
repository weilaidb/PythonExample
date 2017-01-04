#define AVFORMAT_TLS_H
#define CONFIG_TLS_PROTOCOL (CONFIG_TLS_GNUTLS_PROTOCOL | CONFIG_TLS_OPENSSL_PROTOCOL | CONFIG_TLS_SECURETRANSPORT_PROTOCOL | CONFIG_TLS_SCHANNEL_PROTOCOL)
typedef struct TLSShared  TLSShared;
#define TLS_OPTFL (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
#define TLS_COMMON_OPTIONS(pstruct, options_field) \
, \
, \
, \
, \
, \
, \
int ff_tls_open_underlying(TLSShared *c, URLContext *parent, const char *uri, AVDictionary **options);
void ff_gnutls_init(void);
void ff_gnutls_deinit(void);
int ff_openssl_init(void);
void ff_openssl_deinit(void);
