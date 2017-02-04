#define AVCODEC_AVCODEC_H
enum AVCodecID ;
typedef struct AVCodecDescriptor  AVCodecDescriptor;
#define AV_CODEC_PROP_INTRA_ONLY    (1 << 0)
#define AV_CODEC_PROP_LOSSY         (1 << 1)
#define AV_CODEC_PROP_LOSSLESS      (1 << 2)
#define AV_CODEC_PROP_REORDER       (1 << 3)
#define AV_CODEC_PROP_BITMAP_SUB    (1 << 16)
#define AV_CODEC_PROP_TEXT_SUB      (1 << 17)
#define AV_INPUT_BUFFER_PADDING_SIZE 32
#define AV_INPUT_BUFFER_MIN_SIZE 16384
#if FF_API_WITHOUT_PREFIX
#define FF_INPUT_BUFFER_PADDING_SIZE 32
#define FF_MIN_BUFFER_SIZE 16384
#if FF_API_MOTION_EST
enum Motion_Est_ID ;
enum AVDiscard;
enum AVAudioServiceType ;
typedef struct RcOverride RcOverride;
#if FF_API_MAX_BFRAMES
#define FF_MAX_B_FRAMES 16
#define AV_CODEC_FLAG_UNALIGNED       (1 <<  0)
#define AV_CODEC_FLAG_QSCALE          (1 <<  1)
#define AV_CODEC_FLAG_4MV             (1 <<  2)
#define AV_CODEC_FLAG_OUTPUT_CORRUPT  (1 <<  3)
#define AV_CODEC_FLAG_QPEL            (1 <<  4)
#define AV_CODEC_FLAG_PASS1           (1 <<  9)
#define AV_CODEC_FLAG_PASS2           (1 << 10)
#define AV_CODEC_FLAG_LOOP_FILTER     (1 << 11)
#define AV_CODEC_FLAG_GRAY            (1 << 13)
#define AV_CODEC_FLAG_PSNR            (1 << 15)
#define AV_CODEC_FLAG_TRUNCATED       (1 << 16)
#define AV_CODEC_FLAG_INTERLACED_DCT  (1 << 18)
#define AV_CODEC_FLAG_LOW_DELAY       (1 << 19)
#define AV_CODEC_FLAG_GLOBAL_HEADER   (1 << 22)
#define AV_CODEC_FLAG_BITEXACT        (1 << 23)
#define AV_CODEC_FLAG_AC_PRED         (1 << 24)
#define AV_CODEC_FLAG_INTERLACED_ME   (1 << 29)
#define AV_CODEC_FLAG_CLOSED_GOP      (1U << 31)
#define AV_CODEC_FLAG2_FAST           (1 <<  0)
#define AV_CODEC_FLAG2_NO_OUTPUT      (1 <<  2)
#define AV_CODEC_FLAG2_LOCAL_HEADER   (1 <<  3)
#define AV_CODEC_FLAG2_DROP_FRAME_TIMECODE (1 << 13)
#define AV_CODEC_FLAG2_CHUNKS         (1 << 15)
#define AV_CODEC_FLAG2_IGNORE_CROP    (1 << 16)
#define AV_CODEC_FLAG2_SHOW_ALL       (1 << 22)
#define AV_CODEC_FLAG2_EXPORT_MVS     (1 << 28)
#define AV_CODEC_FLAG2_SKIP_MANUAL    (1 << 29)
#define AV_CODEC_FLAG2_RO_FLUSH_NOOP  (1 << 30)
#define AV_CODEC_CAP_DRAW_HORIZ_BAND     (1 <<  0)
#define AV_CODEC_CAP_DR1                 (1 <<  1)
#define AV_CODEC_CAP_TRUNCATED           (1 <<  3)
#define AV_CODEC_CAP_DELAY               (1 <<  5)
#define AV_CODEC_CAP_SMALL_LAST_FRAME    (1 <<  6)
#if FF_API_CAP_VDPAU
#define AV_CODEC_CAP_HWACCEL_VDPAU       (1 <<  7)
#define AV_CODEC_CAP_SUBFRAMES           (1 <<  8)
#define AV_CODEC_CAP_EXPERIMENTAL        (1 <<  9)
#define AV_CODEC_CAP_CHANNEL_CONF        (1 << 10)
#define AV_CODEC_CAP_FRAME_THREADS       (1 << 12)
#define AV_CODEC_CAP_SLICE_THREADS       (1 << 13)
#define AV_CODEC_CAP_PARAM_CHANGE        (1 << 14)
#define AV_CODEC_CAP_AUTO_THREADS        (1 << 15)
#define AV_CODEC_CAP_VARIABLE_FRAME_SIZE (1 << 16)
#define AV_CODEC_CAP_AVOID_PROBING       (1 << 17)
#define AV_CODEC_CAP_INTRA_ONLY       0x40000000
#define AV_CODEC_CAP_LOSSLESS         0x80000000
#if FF_API_WITHOUT_PREFIX
#define CODEC_FLAG_UNALIGNED AV_CODEC_FLAG_UNALIGNED
#define CODEC_FLAG_QSCALE AV_CODEC_FLAG_QSCALE
#define CODEC_FLAG_4MV    AV_CODEC_FLAG_4MV
#define CODEC_FLAG_OUTPUT_CORRUPT AV_CODEC_FLAG_OUTPUT_CORRUPT
#define CODEC_FLAG_QPEL   AV_CODEC_FLAG_QPEL
#if FF_API_GMC
#define CODEC_FLAG_GMC    0x0020
#if FF_API_MV0
#define CODEC_FLAG_MV0    0x0040
#if FF_API_INPUT_PRESERVED
#define CODEC_FLAG_INPUT_PRESERVED 0x0100
#define CODEC_FLAG_PASS1           AV_CODEC_FLAG_PASS1
#define CODEC_FLAG_PASS2           AV_CODEC_FLAG_PASS2
#define CODEC_FLAG_GRAY            AV_CODEC_FLAG_GRAY
#if FF_API_EMU_EDGE
#define CODEC_FLAG_EMU_EDGE        0x4000
#define CODEC_FLAG_PSNR            AV_CODEC_FLAG_PSNR
#define CODEC_FLAG_TRUNCATED       AV_CODEC_FLAG_TRUNCATED
#if FF_API_NORMALIZE_AQP
#define CODEC_FLAG_NORMALIZE_AQP  0x00020000
#define CODEC_FLAG_INTERLACED_DCT AV_CODEC_FLAG_INTERLACED_DCT
#define CODEC_FLAG_LOW_DELAY      AV_CODEC_FLAG_LOW_DELAY
#define CODEC_FLAG_GLOBAL_HEADER  AV_CODEC_FLAG_GLOBAL_HEADER
#define CODEC_FLAG_BITEXACT       AV_CODEC_FLAG_BITEXACT
#define CODEC_FLAG_AC_PRED        AV_CODEC_FLAG_AC_PRED
#define CODEC_FLAG_LOOP_FILTER    AV_CODEC_FLAG_LOOP_FILTER
#define CODEC_FLAG_INTERLACED_ME  AV_CODEC_FLAG_INTERLACED_ME
#define CODEC_FLAG_CLOSED_GOP     AV_CODEC_FLAG_CLOSED_GOP
#define CODEC_FLAG2_FAST          AV_CODEC_FLAG2_FAST
#define CODEC_FLAG2_NO_OUTPUT     AV_CODEC_FLAG2_NO_OUTPUT
#define CODEC_FLAG2_LOCAL_HEADER  AV_CODEC_FLAG2_LOCAL_HEADER
#define CODEC_FLAG2_DROP_FRAME_TIMECODE AV_CODEC_FLAG2_DROP_FRAME_TIMECODE
#define CODEC_FLAG2_IGNORE_CROP   AV_CODEC_FLAG2_IGNORE_CROP
#define CODEC_FLAG2_CHUNKS        AV_CODEC_FLAG2_CHUNKS
#define CODEC_FLAG2_SHOW_ALL      AV_CODEC_FLAG2_SHOW_ALL
#define CODEC_FLAG2_EXPORT_MVS    AV_CODEC_FLAG2_EXPORT_MVS
#define CODEC_FLAG2_SKIP_MANUAL   AV_CODEC_FLAG2_SKIP_MANUAL
#define CODEC_CAP_DRAW_HORIZ_BAND AV_CODEC_CAP_DRAW_HORIZ_BAND
#define CODEC_CAP_DR1             AV_CODEC_CAP_DR1
#define CODEC_CAP_TRUNCATED       AV_CODEC_CAP_TRUNCATED
#if FF_API_XVMC
#define CODEC_CAP_HWACCEL         0x0010
#define CODEC_CAP_DELAY           AV_CODEC_CAP_DELAY
#define CODEC_CAP_SMALL_LAST_FRAME AV_CODEC_CAP_SMALL_LAST_FRAME
#if FF_API_CAP_VDPAU
#define CODEC_CAP_HWACCEL_VDPAU    AV_CODEC_CAP_HWACCEL_VDPAU
#define CODEC_CAP_SUBFRAMES        AV_CODEC_CAP_SUBFRAMES
#define CODEC_CAP_EXPERIMENTAL     AV_CODEC_CAP_EXPERIMENTAL
#define CODEC_CAP_CHANNEL_CONF     AV_CODEC_CAP_CHANNEL_CONF
#if FF_API_NEG_LINESIZES
#define CODEC_CAP_NEG_LINESIZES    0x0800
#define CODEC_CAP_FRAME_THREADS    AV_CODEC_CAP_FRAME_THREADS
#define CODEC_CAP_SLICE_THREADS    AV_CODEC_CAP_SLICE_THREADS
#define CODEC_CAP_PARAM_CHANGE     AV_CODEC_CAP_PARAM_CHANGE
#define CODEC_CAP_AUTO_THREADS     AV_CODEC_CAP_AUTO_THREADS
#define CODEC_CAP_VARIABLE_FRAME_SIZE AV_CODEC_CAP_VARIABLE_FRAME_SIZE
#define CODEC_CAP_INTRA_ONLY       AV_CODEC_CAP_INTRA_ONLY
#define CODEC_CAP_LOSSLESS         AV_CODEC_CAP_LOSSLESS
#define HWACCEL_CODEC_CAP_EXPERIMENTAL     0x0200
#if FF_API_MB_TYPE
#define MB_TYPE_INTRA4x4   0x0001
#define MB_TYPE_INTRA16x16 0x0002
#define MB_TYPE_INTRA_PCM  0x0004
#define MB_TYPE_16x16      0x0008
#define MB_TYPE_16x8       0x0010
#define MB_TYPE_8x16       0x0020
#define MB_TYPE_8x8        0x0040
#define MB_TYPE_INTERLACED 0x0080
#define MB_TYPE_DIRECT2    0x0100
#define MB_TYPE_ACPRED     0x0200
#define MB_TYPE_GMC        0x0400
#define MB_TYPE_SKIP       0x0800
#define MB_TYPE_P0L0       0x1000
#define MB_TYPE_P1L0       0x2000
#define MB_TYPE_P0L1       0x4000
#define MB_TYPE_P1L1       0x8000
#define MB_TYPE_L0         (MB_TYPE_P0L0 | MB_TYPE_P1L0)
#define MB_TYPE_L1         (MB_TYPE_P0L1 | MB_TYPE_P1L1)
#define MB_TYPE_L0L1       (MB_TYPE_L0   | MB_TYPE_L1)
#define MB_TYPE_QUANT      0x00010000
#define MB_TYPE_CBP        0x00020000
typedef struct AVPanScanAVPanScan;
typedef struct AVCPBProperties  AVCPBProperties;
#if FF_API_QSCALE_TYPE
#define FF_QSCALE_TYPE_MPEG1 0
#define FF_QSCALE_TYPE_MPEG2 1
#define FF_QSCALE_TYPE_H264  2
#define FF_QSCALE_TYPE_VP56  3
#define AV_GET_BUFFER_FLAG_REF (1 << 0)
enum AVPacketSideDataType ;
#define AV_PKT_DATA_QUALITY_FACTOR AV_PKT_DATA_QUALITY_STATS
typedef struct AVPacketSideData  AVPacketSideData;
typedef struct AVPacket  AVPacket;
#define AV_PKT_FLAG_KEY     0x0001
#define AV_PKT_FLAG_CORRUPT 0x0002
#define AV_PKT_FLAG_DISCARD   0x0004
enum AVSideDataParamChangeFlags ;
struct AVCodecInternal;
enum AVFieldOrder ;
typedef struct AVCodecContext  AVCodecContext;
AVRational av_codec_get_pkt_timebase         (const AVCodecContext *avctx);
void       av_codec_set_pkt_timebase         (AVCodecContext *avctx, AVRational val);
*av_codec_get_codec_descriptor;
av_codec_set_codec_descriptor;
av_codec_get_codec_properties;
av_codec_get_lowres;
av_codec_set_lowres;
av_codec_get_seek_preroll;
av_codec_set_seek_preroll;
*av_codec_get_chroma_intra_matrix;
av_codec_set_chroma_intra_matrix;
typedef struct AVProfile  AVProfile;
typedef struct AVCodecDefault AVCodecDefault;
struct AVSubtitle;
typedef struct AVCodec  AVCodec;
av_codec_get_max_lowres;
struct MpegEncContext;
typedef struct AVHWAccel  AVHWAccel;
#define AV_HWACCEL_FLAG_IGNORE_LEVEL (1 << 0)
#define AV_HWACCEL_FLAG_ALLOW_HIGH_DEPTH (1 << 1)
#if FF_API_AVPICTURE
typedef struct AVPicture  AVPicture;
enum AVSubtitleType ;
#define AV_SUBTITLE_FLAG_FORCED 0x00000001
typedef struct AVSubtitleRect  AVSubtitleRect;
typedef struct AVSubtitle  AVSubtitle;
typedef struct AVCodecParameters  AVCodecParameters;
*av_codec_next;
avcodec_version;
*avcodec_configuration;
*avcodec_license;
avcodec_register;
avcodec_register_all;
*avcodec_alloc_context3;
avcodec_free_context;
#if FF_API_GET_CONTEXT_DEFAULTS
avcodec_get_context_defaults3;
*avcodec_get_class;
#if FF_API_COPY_CONTEXT
*avcodec_get_frame_class;
*avcodec_get_subtitle_rect_class;
attribute_deprecated
avcodec_copy_context;
*avcodec_parameters_alloc;
avcodec_parameters_free;
avcodec_parameters_copy;
avcodec_parameters_from_context;
avcodec_parameters_to_context;
avcodec_open2;
avcodec_close;
avsubtitle_free;
*av_packet_alloc;
*av_packet_clone;
av_packet_free;
av_init_packet;
av_new_packet;
av_shrink_packet;
av_grow_packet;
av_packet_from_data;
#if FF_API_AVPACKET_OLD_API
attribute_deprecated
av_dup_packet;
av_copy_packet;
av_copy_packet_side_data;
attribute_deprecated
av_free_packet;
av_packet_new_side_data;
av_packet_add_side_data;
av_packet_shrink_side_data;
av_packet_get_side_data;
av_packet_merge_side_data;
av_packet_split_side_data;
*av_packet_side_data_name;
*av_packet_pack_dictionary;
av_packet_unpack_dictionary;
av_packet_free_side_data;
av_packet_ref;
av_packet_unref;
av_packet_move_ref;
av_packet_copy_props;
av_packet_rescale_ts;
*avcodec_find_decoder;
*avcodec_find_decoder_by_name;
avcodec_default_get_buffer2;
#if FF_API_EMU_EDGE
attribute_deprecated
avcodec_get_edge_width;
avcodec_align_dimensions;
avcodec_align_dimensions2;
avcodec_enum_to_chroma_pos;
avcodec_chroma_pos_to_enum;
attribute_deprecated
avcodec_decode_audio4;
attribute_deprecated
avcodec_decode_video2;
avcodec_decode_subtitle2;
avcodec_send_packet;
avcodec_receive_frame;
avcodec_send_frame;
avcodec_receive_packet;
enum AVPictureStructure ;
typedef struct AVCodecParserContext  AVCodecParserContext;
typedef struct AVCodecParser  AVCodecParser;
*av_parser_next;
av_register_codec_parser;
*av_parser_init;
av_parser_parse2;
av_parser_change;
av_parser_close;
*avcodec_find_encoder;
*avcodec_find_encoder_by_name;
attribute_deprecated
avcodec_encode_audio2;
attribute_deprecated
avcodec_encode_video2;
avcodec_encode_subtitle;
#if FF_API_AVCODEC_RESAMPLE
struct ReSampleContext;
struct AVResampleContext;
typedef struct ReSampleContext ReSampleContext;
attribute_deprecated
*av_audio_resample_init;
attribute_deprecated
audio_resample;
attribute_deprecated
audio_resample_close;
attribute_deprecated
*av_resample_init;
attribute_deprecated
av_resample;
attribute_deprecated
av_resample_compensate;
attribute_deprecated
av_resample_close;
#if FF_API_AVPICTURE
attribute_deprecated
avpicture_alloc;
attribute_deprecated
avpicture_free;
attribute_deprecated
avpicture_fill;
attribute_deprecated
avpicture_layout;
attribute_deprecated
avpicture_get_size;
attribute_deprecated
av_picture_copy;
attribute_deprecated
av_picture_crop;
attribute_deprecated
av_picture_pad;
avcodec_get_chroma_sub_sample;
avcodec_pix_fmt_to_codec_tag;
avcodec_get_pix_fmt_loss;
avcodec_find_best_pix_fmt_of_list;
avcodec_find_best_pix_fmt_of_2;
attribute_deprecated
avcodec_find_best_pix_fmt2;
avcodec_default_get_format;
#if FF_API_SET_DIMENSIONS
attribute_deprecated
avcodec_set_dimensions;
av_get_codec_tag_string;
avcodec_string;
*av_get_profile_name;
*avcodec_profile_name;
avcodec_default_execute(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
avcodec_default_execute2(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
avcodec_fill_audio_frame;
avcodec_flush_buffers;
av_get_bits_per_sample;
av_get_pcm_codec;
av_get_exact_bits_per_sample;
av_get_audio_frame_duration;
av_get_audio_frame_duration2;
#if FF_API_OLD_BSF
typedef struct AVBitStreamFilterContext  AVBitStreamFilterContext;
typedef struct AVBSFInternal AVBSFInternal;
typedef struct AVBSFContext  AVBSFContext;
typedef struct AVBitStreamFilter  AVBitStreamFilter;
#if FF_API_OLD_BSF
attribute_deprecated
av_register_bitstream_filter;
attribute_deprecated
*av_bitstream_filter_init;
attribute_deprecated
av_bitstream_filter_filter;
attribute_deprecated
av_bitstream_filter_close;
attribute_deprecated
*av_bitstream_filter_next;
*av_bsf_get_by_name;
*av_bsf_next;
av_bsf_alloc;
av_bsf_init;
av_bsf_send_packet;
av_bsf_receive_packet;
av_bsf_free;
*av_bsf_get_class;
typedef struct AVBSFList AVBSFList;
*av_bsf_list_alloc;
av_bsf_list_free;
av_bsf_list_append;
av_bsf_list_append2;
av_bsf_list_finalize;
av_bsf_list_parse_str;
av_bsf_get_null_filter;
av_fast_padded_malloc;
av_fast_padded_mallocz;
av_xiphlacing;
#if FF_API_MISSING_SAMPLE
attribute_deprecated
av_log_missing_feature;
attribute_deprecated
av_log_ask_for_sample av_printf_format(2, 3);
av_register_hwaccel;
*av_hwaccel_next;
enum AVLockOp ;
av_lockmgr_register(void **mutex, enum AVLockOp op));
avcodec_get_type;
*avcodec_get_name;
avcodec_is_open;
av_codec_is_encoder;
av_codec_is_decoder;
*avcodec_descriptor_get;
*avcodec_descriptor_next;
*avcodec_descriptor_get_by_name;
*av_cpb_properties_alloc;
