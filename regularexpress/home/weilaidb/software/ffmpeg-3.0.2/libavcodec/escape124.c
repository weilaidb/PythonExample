#define BITSTREAM_READER_LE
typedef union MacroBlock  MacroBlock;
typedef union SuperBlock  SuperBlock;
typedef struct CodeBook  CodeBook;
typedef struct Escape124Context  Escape124Context;
static av_cold int escape124_decode_init(AVCodecContext *avctx)
static av_cold int escape124_decode_close(AVCodecContext *avctx)
static CodeBook unpack_codebook(GetBitContext* gb, unsigned depth,
unsigned size)
static unsigned decode_skip_count(GetBitContext* gb)
static MacroBlock decode_macroblock(Escape124Context* s, GetBitContext* gb,
int* codebook_index, int superblock_index)
static void insert_mb_into_sb(SuperBlock* sb, MacroBlock mb, unsigned index)
static void copy_superblock(uint16_t* dest, unsigned dest_stride,
uint16_t* src, unsigned src_stride)
static const uint16_t mask_matrix[] = ;
static int escape124_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_escape124_decoder = ;
