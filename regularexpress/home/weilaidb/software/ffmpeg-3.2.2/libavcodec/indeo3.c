enum ;
#define BS_8BIT_PEL     (1 << 1)
#define BS_KEYFRAME     (1 << 2)
#define BS_MV_Y_HALF    (1 << 4)
#define BS_MV_X_HALF    (1 << 5)
#define BS_NONREF       (1 << 8)
#define BS_BUFFER        9
typedef struct Plane  Plane;
#define CELL_STACK_MAX  20
typedef struct Cell  Cell;
typedef struct Indeo3DecodeContext  Indeo3DecodeContext;
static uint8_t requant_tab[8][128];
build_requant_tab
free_frame_buffers
allocate_frame_buffers
copy_cell
AVG_32 \
AV_WN32A(dst, ((AV_RN32(src) + AV_RN32(ref)) >> 1) & 0x7F7F7F7FUL)
AVG_64 \
AV_WN64A(dst, ((AV_RN64(src) + AV_RN64(ref)) >> 1) & 0x7F7F7F7F7F7F7F7FULL)
replicate64
replicate32
fill_64
enum ;
#define BUFFER_PRECHECK \
if (*data_ptr >= last_ptr) \
return IV3_OUT_OF_DATA; \
#define RLE_BLOCK_COPY \
if (cell->mv_ptr || !skip_flag) \
copy_block4(dst, ref, row_offset, row_offset, 4 << v_zoom)
#define RLE_BLOCK_COPY_8 \
pix64 = AV_RN64(ref);\
if (is_first_row)  else \
fill_64(dst, pix64, 8, row_offset)
#define RLE_LINES_COPY \
copy_block4(dst, ref, row_offset, row_offset, num_lines << v_zoom)
#define RLE_LINES_COPY_M10 \
pix64 = AV_RN64(ref);\
if (is_top_of_cell)  else \
fill_64(dst, pix64, num_lines << 1, row_offset)
#define APPLY_DELTA_4 \
AV_WN16A(dst + line_offset    ,\
(AV_RN16(ref    ) + delta_tab->deltas[dyad1]) & 0x7F7F);\
AV_WN16A(dst + line_offset + 2,\
(AV_RN16(ref + 2) + delta_tab->deltas[dyad2]) & 0x7F7F);\
if (mode >= 3)
#define APPLY_DELTA_8 \\
if (is_top_of_cell)  else  \\\\
if (is_top_of_cell && !cell->ypos)  else \
AVG_64(dst, ref, dst + row_offset);
#define APPLY_DELTA_1011_INTER \
if (mode == 10)  else
decode_cell_data
decode_cell
enum ;
SPLIT_CELL (new_size) = ((size) > 2) ? ((((size) + 2) >> 2) << 1) : 1
UPDATE_BITPOS \
ctx->skip_bits  += (n); \
ctx->need_resync = 1
#define RESYNC_BITSTREAM \
if (ctx->need_resync && !(get_bits_count(&ctx->gb) & 7))
#define CHECK_CELL \
if (curr_cell.xpos + curr_cell.width > (plane->width >> 2) ||               \
curr_cell.ypos + curr_cell.height > (plane->height >> 2))
parse_bintree
decode_plane
MKBETAG
decode_frame_headers
output_plane
decode_init
decode_frame
decode_close
AVCodec ff_indeo3_decoder = ;
