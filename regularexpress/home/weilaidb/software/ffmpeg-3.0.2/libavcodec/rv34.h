#define AVCODEC_RV34_H
#define MB_TYPE_SEPARATE_DC 0x01000000
#define IS_SEPARATE_DC(a)   ((a) & MB_TYPE_SEPARATE_DC)
enum RV40BlockTypes;
typedef struct RV34VLCRV34VLC;
typedef struct SliceInfoSliceInfo;
typedef struct RV34DecContextRV34DecContext;
int ff_rv34_get_start_offset(GetBitContext *gb, int blocks);
int ff_rv34_decode_init(AVCodecContext *avctx);
int ff_rv34_decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt);
int ff_rv34_decode_end(AVCodecContext *avctx);
int ff_rv34_decode_init_thread_copy(AVCodecContext *avctx);
int ff_rv34_decode_update_thread_context(AVCodecContext *dst, const AVCodecContext *src);
