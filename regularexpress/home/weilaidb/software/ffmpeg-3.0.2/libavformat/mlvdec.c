#define MLV_VERSION "v2.0"
#define MLV_VIDEO_CLASS_RAW  1
#define MLV_VIDEO_CLASS_YUV  2
#define MLV_VIDEO_CLASS_JPEG 3
#define MLV_VIDEO_CLASS_H264 4
#define MLV_AUDIO_CLASS_WAV  1
#define MLV_CLASS_FLAG_DELTA 0x40
#define MLV_CLASS_FLAG_LZMA  0x80
typedef struct  MlvContext;
static int probe(AVProbeData *p)
static int check_file_header(AVIOContext *pb, uint64_t guid)
static void read_string(AVFormatContext *avctx, AVIOContext *pb, const char *tag, int size)
static void read_uint8(AVFormatContext *avctx, AVIOContext *pb, const char *tag, const char *fmt)
static void read_uint16(AVFormatContext *avctx, AVIOContext *pb, const char *tag, const char *fmt)
static void read_uint32(AVFormatContext *avctx, AVIOContext *pb, const char *tag, const char *fmt)
static void read_uint64(AVFormatContext *avctx, AVIOContext *pb, const char *tag, const char *fmt)
static int scan_file(AVFormatContext *avctx, AVStream *vst, AVStream *ast, int file)
static int read_header(AVFormatContext *avctx)
static int read_packet(AVFormatContext *avctx, AVPacket *pkt)
static int read_seek(AVFormatContext *avctx, int stream_index, int64_t timestamp, int flags)
static int read_close(AVFormatContext *s)
AVInputFormat ff_mlv_demuxer = ;
