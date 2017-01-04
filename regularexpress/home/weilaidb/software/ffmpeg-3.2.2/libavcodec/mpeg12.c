#define UNCHECKED_BITSTREAM_READER 1
uint8_t ff_mpeg12_static_rl_table_store[2][2][2*MAX_RUN + MAX_LEVEL + 3];
static const uint8_t table_mb_ptype[7][2] = ;
static const uint8_t table_mb_btype[11][2] = ;
#define INIT_2D_VLC_RL(rl, static_size)\
static av_cold void init_2d_vlc_rl(RLTable *rl, unsigned static_size)
av_cold void ff_mpeg12_common_init(MpegEncContext *s)
void ff_mpeg1_clean_buffers(MpegEncContext *s)
VLC ff_mv_vlc;
VLC ff_dc_lum_vlc;
VLC ff_dc_chroma_vlc;
VLC ff_mbincr_vlc;
VLC ff_mb_ptype_vlc;
VLC ff_mb_btype_vlc;
VLC ff_mb_pat_vlc;
av_cold void ff_mpeg12_init_vlcs(void)
int ff_mpeg1_find_frame_end(ParseContext *pc, const uint8_t *buf, int buf_size, AVCodecParserContext *s)
#define MAX_INDEX (64 - 1)
int ff_mpeg1_decode_block_intra(GetBitContext *gb,
const uint16_t *quant_matrix,
uint8_t *const scantable, int last_dc[3],
int16_t *block, int index, int qscale)
