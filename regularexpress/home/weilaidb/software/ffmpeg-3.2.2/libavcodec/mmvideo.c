#define MM_PREAMBLE_SIZE    6
#define MM_TYPE_INTER       0x5
#define MM_TYPE_INTRA       0x8
#define MM_TYPE_INTRA_HH    0xc
#define MM_TYPE_INTER_HH    0xd
#define MM_TYPE_INTRA_HHV   0xe
#define MM_TYPE_INTER_HHV   0xf
#define MM_TYPE_PALETTE     0x31
typedef struct MmContext  MmContext;
mm_decode_init
mm_decode_pal
mm_decode_intra
mm_decode_inter
mm_decode_frame
mm_decode_end
AVCodec ff_mmvideo_decoder = ;
