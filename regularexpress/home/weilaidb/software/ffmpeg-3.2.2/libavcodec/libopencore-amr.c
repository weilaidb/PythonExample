amr_decode_fix_avctx
#if CONFIG_LIBOPENCORE_AMRNB
typedef struct AMRContext  AMRContext;
#if CONFIG_LIBOPENCORE_AMRNB_DECODER
amr_nb_decode_init
amr_nb_decode_close
amr_nb_decode_frame
AVCodec ff_libopencore_amrnb_decoder = ;
#if CONFIG_LIBOPENCORE_AMRNB_ENCODER
typedef struct AMR_bitrates  AMR_bitrates;
get_bitrate_mode
static const AVOption options[] = ;
static const AVClass amrnb_class = ;
amr_nb_encode_init
amr_nb_encode_close
amr_nb_encode_frame
AVCodec ff_libopencore_amrnb_encoder = ;
#if CONFIG_LIBOPENCORE_AMRWB_DECODER
typedef struct AMRWBContext  AMRWBContext;
amr_wb_decode_init
amr_wb_decode_frame
amr_wb_decode_close
AVCodec ff_libopencore_amrwb_decoder = ;
