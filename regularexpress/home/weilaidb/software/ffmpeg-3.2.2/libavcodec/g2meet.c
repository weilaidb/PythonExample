#define EPIC_PIX_STACK_SIZE 1024
#define EPIC_PIX_STACK_MAX  (EPIC_PIX_STACK_SIZE - 1)
enum ChunkType ;
enum Compression ;
static const uint8_t luma_quant[64] = ;
static const uint8_t chroma_quant[64] = ;
typedef struct ePICPixListElem  ePICPixListElem;
typedef struct ePICPixHashElem  ePICPixHashElem;
#define EPIC_HASH_SIZE 256
typedef struct ePICPixHash  ePICPixHash;
typedef struct ePICContext  ePICContext;
typedef struct JPGContext  JPGContext;
typedef struct G2MContext  G2MContext;
build_vlc
jpg_init
jpg_free_context
jpg_unescape
jpg_decode_block
yuv2rgb
jpg_decode_data
LOAD_NEIGHBOURS      \
W   = curr_row[(x)   - 1];  \
N   = above_row[(x)];       \
WW  = curr_row[(x)   - 2];  \
NW  = above_row[(x)  - 1];  \
NE  = above_row[(x)  + 1];  \
NN  = above2_row[(x)];      \
NNW = above2_row[(x) - 1];  \
NWW = above_row[(x)  - 2];  \
NNE = above2_row[(x) + 1]
UPDATE_NEIGHBOURS    \
NNW = NN;                   \
NN  = NNE;                  \
NWW = NW;                   \
NW  = N;                    \
N   = NE;                   \
NE  = above_row[(x)  + 1];  \
NNE = above2_row[(x) + 1]
#define R_shift 16
#define G_shift  8
#define B_shift  0
*pPix = (ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << R_shift) |
(ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << G_shift) |
(ff_els_decode_unsigned(&dc->els_ctx, &dc->unsigned_rung) << B_shift);
return 1;
}
if (x)
if (y)
return 0;
}
epic_decode_run_length
epic_predict_pixel2
epic_predict_from_NW_NE
epic_decode_from_cache
epic_decode_tile
epic_jb_decode_tile
kempf_restore_buf
kempf_decode_tile
g2m_init_buffers
g2m_load_cursor
APPLY_ALPHA \
src = (src * (256 - alpha) + new * alpha) >> 8
g2m_paint_cursor
g2m_decode_frame
g2m_decode_init
g2m_decode_end
AVCodec ff_g2m_decoder = ;
