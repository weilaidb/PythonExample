#define AVFORMAT_SWF_H
#if CONFIG_ZLIB
#define DUMMY_FILE_SIZE   (100 * 1024 * 1024)
#define DUMMY_DURATION    600
enum ;
#define TAG_LONG         0x100
#define FLAG_MOVETO      0x01
#define FLAG_SETFILL0    0x02
#define FLAG_SETFILL1    0x04
#define AUDIO_FIFO_SIZE 65536
#define BITMAP_ID 0
#define VIDEO_ID 0
#define SHAPE_ID  1
typedef struct SWFContext  SWFContext;
extern const AVCodecTag ff_swf_codec_tags[];
