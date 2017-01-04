static void decode_rowskip(uint8_t* plane, int width, int height, int stride,
GetBitContext *gb)
static void decode_colskip(uint8_t* plane, int width, int height, int stride,
GetBitContext *gb)
static int bitplane_decoding(uint8_t* data, int *raw_flag, VC1Context *v)
static int vop_dquant_decoding(VC1Context *v)
static int decode_sequence_header_adv(VC1Context *v, GetBitContext *gb);
int ff_vc1_decode_sequence_header(AVCodecContext *avctx, VC1Context *v, GetBitContext *gb)
static int decode_sequence_header_adv(VC1Context *v, GetBitContext *gb)
int ff_vc1_decode_entry_point(AVCodecContext *avctx, VC1Context *v, GetBitContext *gb)
#define INIT_LUT(lumscale, lumshift, luty, lutuv, chain) do  while(0)
static void rotate_luts(VC1Context *v)
static int read_bfraction(VC1Context *v, GetBitContext* gb)
int ff_vc1_parse_frame_header(VC1Context *v, GetBitContext* gb)
int ff_vc1_parse_frame_header_adv(VC1Context *v, GetBitContext* gb)
static const uint32_t vc1_ac_tables[AC_MODES][186][2] = ;
static const uint16_t vlc_offs[] = ;
av_cold int ff_vc1_init_common(VC1Context *v)
