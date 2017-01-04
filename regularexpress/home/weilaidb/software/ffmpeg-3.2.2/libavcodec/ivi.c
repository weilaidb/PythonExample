#define BITSTREAM_READER_LE
static const IVIHuffDesc ivi_mb_huff_desc[8] = ;
static const IVIHuffDesc ivi_blk_huff_desc[8] = ;
static VLC ivi_mb_vlc_tabs [8];
static VLC ivi_blk_vlc_tabs[8];
typedef void (*ivi_mc_func) (int16_t *buf, const int16_t *ref_buf,
uint32_t pitch, int mc_type);
typedef void (*ivi_mc_avg_func) (int16_t *buf, const int16_t *ref_buf1,
const int16_t *ref_buf2,
uint32_t pitch, int mc_type, int mc_type2);
static int ivi_mc(IVIBandDesc *band, ivi_mc_func mc, ivi_mc_avg_func mc_avg,
int offs, int mv_x, int mv_y, int mv_x2, int mv_y2,
int mc_type, int mc_type2)
static uint16_t inv_bits(uint16_t val, int nbits)
static int ivi_create_huff_from_desc(const IVIHuffDesc *cb, VLC *vlc, int flag)
av_cold void ff_ivi_init_static_vlc(void)
static void ivi_huff_desc_copy(IVIHuffDesc *dst, const IVIHuffDesc *src)
static int ivi_huff_desc_cmp(const IVIHuffDesc *desc1,
const IVIHuffDesc *desc2)
int ff_ivi_dec_huff_desc(GetBitContext *gb, int desc_coded, int which_tab,
IVIHuffTab *huff_tab, AVCodecContext *avctx)
static av_cold void ivi_free_buffers(IVIPlaneDesc *planes)
av_cold int ff_ivi_init_planes(IVIPlaneDesc *planes, const IVIPicConfig *cfg,
int is_indeo4)
static int ivi_init_tiles(IVIBandDesc *band, IVITile *ref_tile,
int p, int b, int t_height, int t_width)
av_cold int ff_ivi_init_tiles(IVIPlaneDesc *planes,
int tile_width, int tile_height)
static int ivi_dec_tile_data_size(GetBitContext *gb)
static int ivi_dc_transform(IVIBandDesc *band, int *prev_dc, int buf_offs,
int blk_size)
static int ivi_decode_coded_blocks(GetBitContext *gb, IVIBandDesc *band,
ivi_mc_func mc, ivi_mc_avg_func mc_avg,
int mv_x, int mv_y,
int mv_x2, int mv_y2,
int *prev_dc, int is_intra,
int mc_type, int mc_type2,
uint32_t quant, int offs,
AVCodecContext *avctx)
static int ivi_decode_blocks(GetBitContext *gb, IVIBandDesc *band,
IVITile *tile, AVCodecContext *avctx)
static int ivi_process_empty_tile(AVCodecContext *avctx, IVIBandDesc *band,
IVITile *tile, int32_t mv_scale)
static uint16_t ivi_calc_band_checksum(IVIBandDesc *band)
static void ivi_output_plane(IVIPlaneDesc *plane, uint8_t *dst, int dst_pitch)
static int decode_band(IVI45DecContext *ctx,
IVIBandDesc *band, AVCodecContext *avctx)
int ff_ivi_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
av_cold int ff_ivi_decode_close(AVCodecContext *avctx)
const uint8_t ff_ivi_vertical_scan_8x8[64] = ;
const uint8_t ff_ivi_horizontal_scan_8x8[64] = ;
const uint8_t ff_ivi_direct_scan_4x4[16] = ;
const RVMapDesc ff_ivi_rvmap_tabs[9] = ;
