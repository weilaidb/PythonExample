#define PALETTE_COUNT 256
#define VQA_HEADER_SIZE 0x2A
#define MAX_CODEBOOK_VECTORS 0xFF00
#define SOLID_PIXEL_VECTORS 0x100
#define MAX_VECTORS (MAX_CODEBOOK_VECTORS + SOLID_PIXEL_VECTORS)
#define MAX_CODEBOOK_SIZE (MAX_VECTORS * 4 * 4)
MKBETAG
MKBETAG
MKBETAG
MKBETAG
MKBETAG
MKBETAG
MKBETAG
typedef struct VqaContext  VqaContext;
vqa_decode_init
CHECK_COUNT \
if (dest_index + count > dest_size)
CHECK_COPY \
if (idx < 0 || idx + count > dest_size)
decode_format80
vqa_decode_chunk
vqa_decode_frame
vqa_decode_end
AVCodec ff_vqa_decoder = ;
