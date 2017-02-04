typedef enum  mask_type;
typedef struct IffContext  IffContext;
LUT8_PART                             \
AV_LE2NE64C(UINT64_C(0x0000000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010000)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010100)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010001)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0000101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1000101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x0010101)<<32 | v) << plane,  \
AV_LE2NE64C(UINT64_C(0x1010101)<<32 | v) << plane
LUT8
static const uint64_t plane8_lut[8][256] = ;
LUT32
static const uint32_t plane32_lut[32][16*4] = ;
gray2rgb
cmap_read_palette
extract_header
decode_end
decode_init
decodeplane8
decodeplane32
DECODE_HAM_PLANE32       \
first       = buf[x] << 1;      \
second      = buf[(x)+1] << 1;  \
delta      &= pal[first++];     \
delta      |= pal[first];       \
dst[x]      = delta;            \
delta      &= pal[second++];    \
delta      |= pal[second];      \
dst[(x)+1]  = delta
decode_ham_plane32
lookup_pal_indicies
decode_byterun
DECODE_RGBX_COMMON \
if (!length)  \
for (i = 0; i < length; i++)
decode_rgb8
decode_rgbn
decode_deep_rle32
decode_deep_tvdc32
decode_short_horizontal_delta
decode_byte_vertical_delta
decode_delta_j
decode_short_vertical_delta
decode_long_vertical_delta
decode_short_vertical_delta2
decode_long_vertical_delta2
decode_delta_d
decode_delta_e
decode_delta_l
unsupported
decode_frame
#if CONFIG_IFF_ILBM_DECODER
AVCodec ff_iff_ilbm_decoder = ;
