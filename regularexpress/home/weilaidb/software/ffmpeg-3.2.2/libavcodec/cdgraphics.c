#define CDG_FULL_WIDTH           300
#define CDG_FULL_HEIGHT          216
#define CDG_DISPLAY_WIDTH        294
#define CDG_DISPLAY_HEIGHT       204
#define CDG_BORDER_WIDTH           6
#define CDG_BORDER_HEIGHT         12
#define CDG_COMMAND             0x09
#define CDG_MASK                0x3F
#define CDG_INST_MEMORY_PRESET     1
#define CDG_INST_BORDER_PRESET     2
#define CDG_INST_TILE_BLOCK        6
#define CDG_INST_SCROLL_PRESET    20
#define CDG_INST_SCROLL_COPY      24
#define CDG_INST_TRANSPARENT_COL  28
#define CDG_INST_LOAD_PAL_LO      30
#define CDG_INST_LOAD_PAL_HIGH    31
#define CDG_INST_TILE_BLOCK_XOR   38
#define CDG_PACKET_SIZE           24
#define CDG_DATA_SIZE             16
#define CDG_TILE_HEIGHT           12
#define CDG_TILE_WIDTH             6
#define CDG_MINIMUM_PKT_SIZE       6
#define CDG_MINIMUM_SCROLL_SIZE    3
#define CDG_HEADER_SIZE            8
#define CDG_PALETTE_SIZE          16
typedef struct CDGraphicsContext  CDGraphicsContext;
cdg_decode_init
cdg_border_preset
cdg_load_palette
cdg_tile_block
#define UP    2
#define DOWN  1
#define LEFT  2
#define RIGHT 1
cdg_copy_rect_buf
cdg_fill_rect_preset
cdg_fill_wrapper
cdg_scroll
cdg_decode_frame
cdg_decode_end
AVCodec ff_cdgraphics_decoder = ;
