#define BITSTREAM_READER_LE
typedef union MacroBlock  MacroBlock;
typedef union SuperBlock  SuperBlock;
typedef struct CodeBook  CodeBook;
typedef struct Escape124Context  Escape124Context;
escape124_decode_init
escape124_decode_close
unpack_codebook
decode_skip_count
decode_macroblock
insert_mb_into_sb
copy_superblock
static const uint16_t mask_matrix[] = ;
escape124_decode_frame
AVCodec ff_escape124_decoder = ;
