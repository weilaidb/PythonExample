static void put_swf_tag(AVFormatContext *s, int tag)
static void put_swf_end_tag(AVFormatContext *s)
static inline void max_nbits(int *nbits_ptr, int val)
static void put_swf_rect(AVIOContext *pb,
int xmin, int xmax, int ymin, int ymax)
static void put_swf_line_edge(PutBitContext *pb, int dx, int dy)
#define FRAC_BITS 16
static void put_swf_matrix(AVIOContext *pb,
int a, int b, int c, int d, int tx, int ty)
static int swf_write_header(AVFormatContext *s)
static int swf_write_video(AVFormatContext *s,
AVCodecParameters *par, const uint8_t *buf, int size)
static int swf_write_audio(AVFormatContext *s,
AVCodecParameters *par, uint8_t *buf, int size)
static int swf_write_packet(AVFormatContext *s, AVPacket *pkt)
static int swf_write_trailer(AVFormatContext *s)
#if CONFIG_SWF_MUXER
AVOutputFormat ff_swf_muxer = ;
#if CONFIG_AVM2_MUXER
AVOutputFormat ff_avm2_muxer = ;
