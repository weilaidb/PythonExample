#define MAX_CHANNELS 8
#define MAX_BLOCKSIZE 65535
#define OUT_BUFFER_SIZE 16384
#define ULONGSIZE 2
#define WAVE_FORMAT_PCM 0x0001
#define DEFAULT_BLOCK_SIZE 256
#define TYPESIZE 4
#define CHANSIZE 0
#define LPCQSIZE 2
#define ENERGYSIZE 3
#define BITSHIFTSIZE 2
#define TYPE_S8    1
#define TYPE_U8    2
#define TYPE_S16HL 3
#define TYPE_U16HL 4
#define TYPE_S16LH 5
#define TYPE_U16LH 6
#define NWRAP 3
#define NSKIPSIZE 1
#define LPCQUANT 5
#define V2LPCQOFFSET (1 << LPCQUANT)
#define FNSIZE 2
#define FN_DIFF0        0
#define FN_DIFF1        1
#define FN_DIFF2        2
#define FN_DIFF3        3
#define FN_QUIT         4
#define FN_BLOCKSIZE    5
#define FN_BITSHIFT     6
#define FN_QLPC         7
#define FN_ZERO         8
#define FN_VERBATIM     9
static const uint8_t is_audio_command[10] = ;
#define VERBATIM_CKSIZE_SIZE 5
#define VERBATIM_BYTE_SIZE 8
#define CANONICAL_HEADER_SIZE 44
typedef struct ShortenContext  ShortenContext;
shorten_decode_init
allocate_buffers
get_uint
fix_bitshift
init_offset
decode_aiff_header
decode_wave_header
static const int fixed_coeffs[][3] = ;
decode_subframe_lpc
read_header
shorten_decode_frame
shorten_decode_close
AVCodec ff_shorten_decoder = ;
