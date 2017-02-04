#define UNCHECKED_BITSTREAM_READER 1
#define classic_shift_luma_table_size 42
static const unsigned char classic_shift_luma[classic_shift_luma_table_size + AV_INPUT_BUFFER_PADDING_SIZE] = ;
#define classic_shift_chroma_table_size 59
static const unsigned char classic_shift_chroma[classic_shift_chroma_table_size + AV_INPUT_BUFFER_PADDING_SIZE] = ;
static const unsigned char classic_add_luma[256] = ;
static const unsigned char classic_add_chroma[256] = ;
read_len_table
generate_joint_tables
read_huffman_tables
read_old_huffman_tables
decode_end
decode_init
#if HAVE_THREADS
decode_init_thread_copy
VLC_INTERN   \
code = table[index][0];                                 \
n    = table[index][1];                                 \
if (max_depth > 1 && n < 0)                                                        \
dst = code;                                             \
LAST_SKIP_BITS(name, gb, n)
GET_VLC_DUAL                           \
do  while (0)
OP8bits dst0 = code>>8; dst1 = code
READ_2PIX                                   \
UPDATE_CACHE(re, &s->gb);                                           \
GET_VLC_DUAL(dst0, dst1, re, &s->gb, s->vlc[4+plane1].table,        \
s->vlc[0].table, s->vlc[plane1].table, VLC_BITS, 3, OP8bits)
decode_422_bitstream
READ_2PIX_PLANE \
UPDATE_CACHE(re, &s->gb); \
GET_VLC_DUAL(dst0, dst1, re, &s->gb, s->vlc[4+plane].table, \
s->vlc[plane].table, s->vlc[plane].table, VLC_BITS, 3, OP)
OP14bits dst0 = code>>8; dst1 = sign_extend(code, 8)
READ_2PIX_PLANE16
decode_plane_bitstream
decode_gray_bitstream
decode_bgr_1
decode_bgr_bitstream
draw_slice
left_prediction
add_bytes
add_median_prediction
decode_frame
AVCodec ff_huffyuv_decoder = ;
#if CONFIG_FFVHUFF_DECODER
AVCodec ff_ffvhuff_decoder = ;
