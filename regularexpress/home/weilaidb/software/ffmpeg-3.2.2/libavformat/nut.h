#define AVFORMAT_NUT_H
#define      MAIN_STARTCODE (0x7A561F5F04ADULL + (((uint64_t)('N'<<8) + 'M')<<48))
#define    STREAM_STARTCODE (0x11405BF2F9DBULL + (((uint64_t)('N'<<8) + 'S')<<48))
#define SYNCPOINT_STARTCODE (0xE4ADEECA4569ULL + (((uint64_t)('N'<<8) + 'K')<<48))
#define     INDEX_STARTCODE (0xDD672F23E64EULL + (((uint64_t)('N'<<8) + 'X')<<48))
#define      INFO_STARTCODE (0xAB68B596BA78ULL + (((uint64_t)('N'<<8) + 'I')<<48))
#define ID_STRING "nut/multimedia container\0"
#define MAX_DISTANCE (1024*32-1)
#define NUT_MAX_VERSION 4
#define NUT_STABLE_VERSION 3
#define NUT_MIN_VERSION 2
typedef enum Flag;
typedef struct Syncpoint  Syncpoint;
typedef struct FrameCode  FrameCode;
typedef struct StreamContext  StreamContext;
typedef struct ChapterContext  ChapterContext;
typedef struct NUTContext  NUTContext;
extern const AVCodecTag ff_nut_subtitle_tags[];
extern const AVCodecTag ff_nut_video_tags[];
extern const AVCodecTag ff_nut_audio_tags[];
extern const AVCodecTag ff_nut_audio_extra_tags[];
extern const AVCodecTag ff_nut_data_tags[];
extern const AVCodecTag * const ff_nut_codec_tags[];
typedef struct Dispositions  Dispositions;
void ff_nut_reset_ts(NUTContext *nut, AVRational time_base, int64_t val);
int64_t ff_lsb2full(StreamContext *stream, int64_t lsb);
int ff_nut_sp_pos_cmp(const void *a, const void *b);
int ff_nut_sp_pts_cmp(const void *a, const void *b);
int ff_nut_add_sp(NUTContext *nut, int64_t pos, int64_t back_ptr, int64_t ts);
void ff_nut_free_sp(NUTContext *nut);
extern const Dispositions ff_nut_dispositions[];
extern const AVMetadataConv ff_nut_metadata_conv[];
