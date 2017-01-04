#define AVCODEC_FLAC_H
#define FLAC_STREAMINFO_SIZE   34
#define FLAC_MAX_CHANNELS       8
#define FLAC_MIN_BLOCKSIZE     16
#define FLAC_MAX_BLOCKSIZE  65535
#define FLAC_MIN_FRAME_SIZE    11
enum ;
enum ;
enum FLACExtradataFormat ;
#define FLACCOMMONINFO \
int samplerate;\
int channels;\
int bps;\
#define FLACSTREAMINFO \
FLACCOMMONINFO \
int max_blocksize;\
int max_framesize;\
int64_t samples;\
typedef struct FLACStreaminfo  FLACStreaminfo;
typedef struct FLACFrameInfo  FLACFrameInfo;
void ff_flac_parse_streaminfo(AVCodecContext *avctx, struct FLACStreaminfo *s,
const uint8_t *buffer);
int ff_flac_is_extradata_valid(AVCodecContext *avctx,
enum FLACExtradataFormat *format,
uint8_t **streaminfo_start);
int ff_flac_get_max_frame_size(int blocksize, int ch, int bps);
int ff_flac_decode_frame_header(AVCodecContext *avctx, GetBitContext *gb,
FLACFrameInfo *fi, int log_level_offset);
void ff_flac_set_channel_layout(AVCodecContext *avctx);
static av_always_inline void flac_parse_block_header(const uint8_t *block_header,
int *last, int *type, int *size)
