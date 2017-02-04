#define AVCODEC_INTERNAL_H
#define FF_CODEC_CAP_INIT_THREADSAFE        (1 << 0)
#define FF_CODEC_CAP_INIT_CLEANUP           (1 << 1)
#define FF_CODEC_CAP_SETS_PKT_DTS           (1 << 2)
#define FF_CODEC_CAP_SKIP_FRAME_FILL_PARAM  (1 << 3)
ff_tlog av_log(ctx, AV_LOG_TRACE, __VA_ARGS__)
while
#if !FF_API_QUANT_BIAS
#define FF_DEFAULT_QUANT_BIAS 999999
#define FF_SANE_NB_CHANNELS 64U
sizeof - 1)
#if HAVE_AVX
#   define STRIDE_ALIGN 32
#elif HAVE_SIMD_ALIGN_16
#   define STRIDE_ALIGN 16
#   define STRIDE_ALIGN 8
typedef struct FramePool  FramePool;
typedef struct AVCodecInternal  AVCodecInternal;
struct AVCodecDefault ;
extern const uint8_t ff_log2_run[41];
ff_match_2uint16[2], int size, int a, int b);
avpriv_toupper4;
ff_init_buffer_info;
ff_color_frame;
extern volatile int ff_avcodec_locked;
ff_lock_avcodec;
ff_unlock_avcodec;
avpriv_lock_avformat;
avpriv_unlock_avformat;
#define FF_MAX_EXTRADATA_SIZE ((1 << 28) - AV_INPUT_BUFFER_PADDING_SIZE)
ff_alloc_packet2;
ff_alloc_packet;
ff_samples_to_time_base
ff_exp2fi
ff_get_buffer;
ff_reget_buffer;
ff_thread_can_start_frame;
avpriv_h264_has_num_reorder_frames;
ff_codec_open2_recursive;
avpriv_bprint_to_extradata;
*avpriv_find_start_code;
avpriv_codec_get_cap_skip_frame_fill_param;
ff_set_dimensions;
ff_set_sar;
ff_side_data_update_matrix_encoding;
ff_get_format;
ff_decode_frame_props;
*ff_add_cpb_side_data;
ff_side_data_set_encoder_stats;
ff_alloc_a53_sei;
