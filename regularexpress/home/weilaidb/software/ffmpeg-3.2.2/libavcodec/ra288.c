#define BITSTREAM_READER_LE
#define MAX_BACKWARD_FILTER_ORDER  36
#define MAX_BACKWARD_FILTER_LEN    40
#define MAX_BACKWARD_FILTER_NONREC 35
#define RA288_BLOCK_SIZE        5
#define RA288_BLOCKS_PER_FRAME 32
typedef struct RA288Context  RA288Context;
ra288_decode_close
ra288_decode_init
convolve
decode
do_hybrid_window
backward_filter
ra288_decode_frame
AVCodec ff_ra_288_decoder = ;
