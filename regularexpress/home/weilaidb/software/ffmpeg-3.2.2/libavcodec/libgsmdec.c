#if HAVE_GSM_H
typedef struct LibGSMDecodeContext  LibGSMDecodeContext;
libgsm_decode_init
libgsm_decode_close
libgsm_decode_frame
libgsm_flush
#if CONFIG_LIBGSM_DECODER
AVCodec ff_libgsm_decoder = ;
#if CONFIG_LIBGSM_MS_DECODER
AVCodec ff_libgsm_ms_decoder = ;
