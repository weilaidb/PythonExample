enum ExrCompr ;
enum ExrPixelType ;
enum ExrTileLevelMode ;
enum ExrTileLevelRound ;
typedef struct EXRChannel  EXRChannel;
typedef struct EXRTileAttribute  EXRTileAttribute;
typedef struct EXRThreadData  EXRThreadData;
typedef struct EXRContext  EXRContext;
#define HALF_FLOAT_MIN_BIASED_EXP_AS_SINGLE_FP_EXP 0x38000000
#define HALF_FLOAT_MAX_BIASED_EXP_AS_SINGLE_FP_EXP 0x47800000
#define FLOAT_MAX_BIASED_EXP (0xFF << 23)
#define HALF_FLOAT_MAX_BIASED_EXP (0x1F << 10)
exr_half2float
exr_flt2uint
exr_halflt2uint
predictor
reorder_pixels
zip_uncompress
rle_uncompress
#define USHORT_RANGE (1 << 16)
#define BITMAP_SIZE  (1 << 13)
reverse_lut
apply_lut
#define HUF_ENCBITS 16
#define HUF_DECBITS 14
#define HUF_ENCSIZE ((1 << HUF_ENCBITS) + 1)
#define HUF_DECSIZE (1 << HUF_DECBITS)
#define HUF_DECMASK (HUF_DECSIZE - 1)
typedef struct HufDec  HufDec;
huf_canonical_code_table
#define SHORT_ZEROCODE_RUN  59
#define LONG_ZEROCODE_RUN   63
#define SHORTEST_LONG_RUN   (2 + LONG_ZEROCODE_RUN - SHORT_ZEROCODE_RUN)
#define LONGEST_LONG_RUN    (255 + SHORTEST_LONG_RUN)
huf_unpack_enc_table
huf_build_dec_table
get_char                                                   \
get_code                           \
huf_decode
huf_uncompress
wdec14
#define NBITS      16
#define A_OFFSET  (1 << (NBITS - 1))
#define MOD_MASK  ((1 << NBITS) - 1)
wdec16
wav_decode
piz_uncompress
pxr24_uncompress
unpack_14
unpack_3
b44_uncompress
decode_block
check_header_variable
decode_header
decode_frame
decode_init
#if HAVE_THREADS
decode_init_thread_copy
decode_end
OFFSET offsetof(EXRContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass exr_class = ;
AVCodec ff_exr_decoder = ;
