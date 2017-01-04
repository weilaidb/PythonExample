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
enum AVSideDataParamChangeFlags ;
struct AVCodecInternal;
enum AVFieldOrder ;
typedef struct AVCodecContext  AVCodecContext;
AVRational av_codec_get_pkt_timebase         (const AVCodecContext *avctx);
void       av_codec_set_pkt_timebase         (AVCodecContext *avctx, AVRational val);
const AVCodecDescriptor *av_codec_get_codec_descriptor(const AVCodecContext *avctx);
void                     av_codec_set_codec_descriptor(AVCodecContext *avctx, const AVCodecDescriptor *desc);
unsigned av_codec_get_codec_properties(const AVCodecContext *avctx);
int  av_codec_get_lowres(const AVCodecContext *avctx);
void av_codec_set_lowres(AVCodecContext *avctx, int val);
int  av_codec_get_seek_preroll(const AVCodecContext *avctx);
void av_codec_set_seek_preroll(AVCodecContext *avctx, int val);
uint16_t *av_codec_get_chroma_intra_matrix(const AVCodecContext *avctx);
void av_codec_set_chroma_intra_matrix(AVCodecContext *avctx, uint16_t *val);
typedef struct AVProfile  AVProfile;
typedef struct AVCodecDefault AVCodecDefault;
struct AVSubtitle;
typedef struct AVCodec  AVCodec;
int av_codec_get_max_lowres(const AVCodec *codec);
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
AVCodec *av_codec_next(const AVCodec *c);
unsigned avcodec_version(void);
const char *avcodec_configuration(void);
const char *avcodec_license(void);
void avcodec_register(AVCodec *codec);
void avcodec_register_all(void);
AVCodecContext *avcodec_alloc_context3(const AVCodec *codec);
void avcodec_free_context(AVCodecContext **avctx);
int avcodec_get_context_defaults3(AVCodecContext *s, const AVCodec *codec);
const AVClass *avcodec_get_class(void);
const AVClass *avcodec_get_frame_class(void);
const AVClass *avcodec_get_subtitle_rect_class(void);
int avcodec_copy_context(AVCodecContext *dest, const AVCodecContext *src);
int avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
int avcodec_close(AVCodecContext *avctx);
void avsubtitle_free(AVSubtitle *sub);
AVPacket *av_packet_alloc(void);
AVPacket *av_packet_clone(AVPacket *src);
void av_packet_free(AVPacket **pkt);
void av_init_packet(AVPacket *pkt);
int av_new_packet(AVPacket *pkt, int size);
void av_shrink_packet(AVPacket *pkt, int size);
int av_grow_packet(AVPacket *pkt, int grow_by);
int av_packet_from_data(AVPacket *pkt, uint8_t *data, int size);
#if FF_API_AVPACKET_OLD_API
attribute_deprecated
int av_dup_packet(AVPacket *pkt);
int av_copy_packet(AVPacket *dst, const AVPacket *src);
int av_copy_packet_side_data(AVPacket *dst, const AVPacket *src);
attribute_deprecated
void av_free_packet(AVPacket *pkt);
uint8_t* av_packet_new_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int size);
int av_packet_add_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
uint8_t *data, size_t size);
int av_packet_shrink_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int size);
uint8_t* av_packet_get_side_data(AVPacket *pkt, enum AVPacketSideDataType type,
int *size);
int av_packet_merge_side_data(AVPacket *pkt);
int av_packet_split_side_data(AVPacket *pkt);
const char *av_packet_side_data_name(enum AVPacketSideDataType type);
uint8_t *av_packet_pack_dictionary(AVDictionary *dict, int *size);
int av_packet_unpack_dictionary(const uint8_t *data, int size, AVDictionary **dict);
void av_packet_free_side_data(AVPacket *pkt);
int av_packet_ref(AVPacket *dst, const AVPacket *src);
void av_packet_unref(AVPacket *pkt);
void av_packet_move_ref(AVPacket *dst, AVPacket *src);
int av_packet_copy_props(AVPacket *dst, const AVPacket *src);
void av_packet_rescale_ts(AVPacket *pkt, AVRational tb_src, AVRational tb_dst);
AVCodec *avcodec_find_decoder(enum AVCodecID id);
AVCodec *avcodec_find_decoder_by_name(const char *name);
int avcodec_default_get_buffer2(AVCodecContext *s, AVFrame *frame, int flags);
#if FF_API_EMU_EDGE
attribute_deprecated
unsigned avcodec_get_edge_width(void);
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height);
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
int linesize_align[AV_NUM_DATA_POINTERS]);
int avcodec_enum_to_chroma_pos(int *xpos, int *ypos, enum AVChromaLocation pos);
enum AVChromaLocation avcodec_chroma_pos_to_enum(int xpos, int ypos);
int avcodec_decode_audio4(AVCodecContext *avctx, AVFrame *frame,
int *got_frame_ptr, const AVPacket *avpkt);
int avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
int *got_picture_ptr,
const AVPacket *avpkt);
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
int *got_sub_ptr,
AVPacket *avpkt);
enum AVPictureStructure ;
typedef struct AVCodecParserContext  AVCodecParserContext;
typedef struct AVCodecParser  AVCodecParser;
AVCodecParser *av_parser_next(const AVCodecParser *c);
void av_register_codec_parser(AVCodecParser *parser);
AVCodecParserContext *av_parser_init(int codec_id);
int av_parser_parse2(AVCodecParserContext *s,
AVCodecContext *avctx,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size,
int64_t pts, int64_t dts,
int64_t pos);
int av_parser_change(AVCodecParserContext *s,
AVCodecContext *avctx,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size, int keyframe);
void av_parser_close(AVCodecParserContext *s);
AVCodec *avcodec_find_encoder(enum AVCodecID id);
AVCodec *avcodec_find_encoder_by_name(const char *name);
int avcodec_encode_audio2(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr);
int avcodec_encode_video2(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr);
int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
const AVSubtitle *sub);
#if FF_API_AVCODEC_RESAMPLE
struct ReSampleContext;
struct AVResampleContext;
typedef struct ReSampleContext ReSampleContext;
attribute_deprecated
ReSampleContext *av_audio_resample_init(int output_channels, int input_channels,
int output_rate, int input_rate,
enum AVSampleFormat sample_fmt_out,
enum AVSampleFormat sample_fmt_in,
int filter_length, int log2_phase_count,
int linear, double cutoff);
attribute_deprecated
int audio_resample(ReSampleContext *s, short *output, short *input, int nb_samples);
attribute_deprecated
void audio_resample_close(ReSampleContext *s);
attribute_deprecated
struct AVResampleContext *av_resample_init(int out_rate, int in_rate, int filter_length, int log2_phase_count, int linear, double cutoff);
attribute_deprecated
int av_resample(struct AVResampleContext *c, short *dst, short *src, int *consumed, int src_size, int dst_size, int update_ctx);
attribute_deprecated
void av_resample_compensate(struct AVResampleContext *c, int sample_delta, int compensation_distance);
attribute_deprecated
void av_resample_close(struct AVResampleContext *c);
#if FF_API_AVPICTURE
attribute_deprecated
int avpicture_alloc(AVPicture *picture, enum AVPixelFormat pix_fmt, int width, int height);
attribute_deprecated
void avpicture_free(AVPicture *picture);
attribute_deprecated
int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
enum AVPixelFormat pix_fmt, int width, int height);
attribute_deprecated
int avpicture_layout(const AVPicture *src, enum AVPixelFormat pix_fmt,
int width, int height,
unsigned char *dest, int dest_size);
attribute_deprecated
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height);
attribute_deprecated
void av_picture_copy(AVPicture *dst, const AVPicture *src,
enum AVPixelFormat pix_fmt, int width, int height);
attribute_deprecated
int av_picture_crop(AVPicture *dst, const AVPicture *src,
enum AVPixelFormat pix_fmt, int top_band, int left_band);
attribute_deprecated
int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width, enum AVPixelFormat pix_fmt,
int padtop, int padbottom, int padleft, int padright, int *color);
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift);
unsigned int avcodec_pix_fmt_to_codec_tag(enum AVPixelFormat pix_fmt);
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt, enum AVPixelFormat src_pix_fmt,
int has_alpha);
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(const enum AVPixelFormat *pix_fmt_list,
enum AVPixelFormat src_pix_fmt,
int has_alpha, int *loss_ptr);
enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);
attribute_deprecated
#if AV_HAVE_INCOMPATIBLE_LIBAV_ABI
enum AVPixelFormat avcodec_find_best_pix_fmt2(const enum AVPixelFormat *pix_fmt_list,
enum AVPixelFormat src_pix_fmt,
int has_alpha, int *loss_ptr);
enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr);
enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat * fmt);
#if FF_API_SET_DIMENSIONS
attribute_deprecated
void avcodec_set_dimensions(AVCodecContext *s, int width, int height);
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag);
void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode);
const char *av_get_profile_name(const AVCodec *codec, int profile);
const char *avcodec_profile_name(enum AVCodecID codec_id, int profile);
int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2),void *arg, int *ret, int count, int size);
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int, int),void *arg, int *ret, int count);
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
enum AVSampleFormat sample_fmt, const uint8_t *buf,
int buf_size, int align);
void avcodec_flush_buffers(AVCodecContext *avctx);
int av_get_bits_per_sample(enum AVCodecID codec_id);
enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be);
int av_get_exact_bits_per_sample(enum AVCodecID codec_id);
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes);
typedef struct AVBitStreamFilterContext  AVBitStreamFilterContext;
typedef struct AVBitStreamFilter  AVBitStreamFilter;
void av_register_bitstream_filter(AVBitStreamFilter *bsf);
AVBitStreamFilterContext *av_bitstream_filter_init(const char *name);
int av_bitstream_filter_filter(AVBitStreamFilterContext *bsfc,
AVCodecContext *avctx, const char *args,
uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size, int keyframe);
void av_bitstream_filter_close(AVBitStreamFilterContext *bsf);
AVBitStreamFilter *av_bitstream_filter_next(const AVBitStreamFilter *f);
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size);
void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size);
unsigned int av_xiphlacing(unsigned char *s, unsigned int v);
#if FF_API_MISSING_SAMPLE
attribute_deprecated
void av_log_missing_feature(void *avc, const char *feature, int want_sample);
attribute_deprecated
void av_log_ask_for_sample(void *avc, const char *msg, ...) av_printf_format(2, 3);
void av_register_hwaccel(AVHWAccel *hwaccel);
AVHWAccel *av_hwaccel_next(const AVHWAccel *hwaccel);
enum AVLockOp ;
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op));
enum AVMediaType avcodec_get_type(enum AVCodecID codec_id);
const char *avcodec_get_name(enum AVCodecID id);
int avcodec_is_open(AVCodecContext *s);
int av_codec_is_encoder(const AVCodec *codec);
int av_codec_is_decoder(const AVCodec *codec);
const AVCodecDescriptor *avcodec_descriptor_get(enum AVCodecID id);
const AVCodecDescriptor *avcodec_descriptor_next(const AVCodecDescriptor *prev);
const AVCodecDescriptor *avcodec_descriptor_get_by_name(const char *name);
AVCPBProperties *av_cpb_properties_alloc(size_t *size);
