#define AVFORMAT_TLS_H
#define CONFIG_TLS_PROTOCOL (CONFIG_TLS_GNUTLS_PROTOCOL | CONFIG_TLS_OPENSSL_PROTOCOL | CONFIG_TLS_SECURETRANSPORT_PROTOCOL | CONFIG_TLS_SCHANNEL_PROTOCOL)
typedef struct TLSShared  TLSShared;
#define TLS_OPTFL (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
TLS_COMMON_OPTIONS \
, \
, \
, \
, \
, \
, \
ff_tls_open_underlying;
ff_gnutls_init;
ff_gnutls_deinit;
ff_openssl_init;
ff_openssl_deinit;
