typedef struct FFBufferEntry  FFBufferEntry;
typedef struct FFPoolRef  FFPoolRef;
typedef struct FFBufferRef  FFBufferRef;
typedef struct MMALDecodeContext  MMALDecodeContext;
#define MAX_DELAYED_FRAMES 16
ffmmal_poolref_unref
ffmmal_release_frame
ffmmal_set_ref
ffmmal_stop_decoder
ffmmal_close_decoder
input_callback
output_callback
control_port_cb
ffmmal_fill_output_port
ffmmal_csp_to_av_csp
ffmal_update_format
ffmmal_init_decoder
ffmmal_flush
ffmmal_add_packet
ffmmal_fill_input_port
ffmal_copy_frame
ffmmal_read_frame
ffmmal_decode
AVHWAccel ff_h264_mmal_hwaccel = ;
AVHWAccel ff_mpeg2_mmal_hwaccel = ;
AVHWAccel ff_mpeg4_mmal_hwaccel = ;
AVHWAccel ff_vc1_mmal_hwaccel = ;
static const AVOption options[]=;
FFMMAL_DEC_CLASS \
static const AVClass ffmmal_##NAME##_dec_class = ;
FFMMAL_DEC \
FFMMAL_DEC_CLASS(NAME) \
AVCodec ff_##NAME##_mmal_decoder = ;
FFMMAL_DEC(h264, AV_CODEC_ID_H264)
FFMMAL_DEC(mpeg2, AV_CODEC_ID_MPEG2VIDEO)
FFMMAL_DEC(mpeg4, AV_CODEC_ID_MPEG4)
FFMMAL_DEC(vc1, AV_CODEC_ID_VC1)
