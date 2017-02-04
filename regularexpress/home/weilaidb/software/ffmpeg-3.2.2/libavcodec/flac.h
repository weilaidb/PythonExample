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
ff_flac_parse_streaminfo;
ff_flac_is_extradata_valid;
ff_flac_get_max_frame_size;
ff_flac_decode_frame_header;
ff_flac_set_channel_layout;
flac_parse_block_header
