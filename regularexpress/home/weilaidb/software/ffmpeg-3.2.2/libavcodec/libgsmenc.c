#if HAVE_GSM_H
libgsm_encode_close
libgsm_encode_init
libgsm_encode_frame
#if CONFIG_LIBGSM_ENCODER
AVCodec ff_libgsm_encoder = ;
#if CONFIG_LIBGSM_MS_ENCODER
AVCodec ff_libgsm_ms_encoder = ;
