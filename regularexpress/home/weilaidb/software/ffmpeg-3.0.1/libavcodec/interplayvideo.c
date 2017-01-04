#define BITSTREAM_READER_LE
#define PALETTE_COUNT 256
typedef struct IpvideoContext  IpvideoContext;
static int copy_from(IpvideoContext *s, AVFrame *src, AVFrame *dst, int delta_x, int delta_y)
static int ipvideo_decode_block_opcode_0x0(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x1(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x2(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x3(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x4(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x5(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x6(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x7(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x8(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x9(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xA(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xB(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xC(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xD(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xE(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xF(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x6_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x7_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x8_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0x9_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xA_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xB_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xC_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xD_16(IpvideoContext *s, AVFrame *frame)
static int ipvideo_decode_block_opcode_0xE_16(IpvideoContext *s, AVFrame *frame)
static int (* const ipvideo_decode_block[])(IpvideoContext *s, AVFrame *frame) = ;
static int (* const ipvideo_decode_block16[])(IpvideoContext *s, AVFrame *frame) = ;
static void ipvideo_decode_opcodes(IpvideoContext *s, AVFrame *frame)
static av_cold int ipvideo_decode_init(AVCodecContext *avctx)
static int ipvideo_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int ipvideo_decode_end(AVCodecContext *avctx)
AVCodec ff_interplay_video_decoder = ;
