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
ivi_mc
inv_bits
ivi_create_huff_from_desc
ff_ivi_init_static_vlc
ivi_huff_desc_copy
ivi_huff_desc_cmp
ff_ivi_dec_huff_desc
ivi_free_buffers
ff_ivi_init_planes
ivi_init_tiles
ff_ivi_init_tiles
ivi_dec_tile_data_size
ivi_dc_transform
ivi_decode_coded_blocks
ivi_decode_blocks
ivi_process_empty_tile
ivi_calc_band_checksum
ivi_output_plane
decode_band
ff_ivi_decode_frame
ff_ivi_decode_close
const uint8_t ff_ivi_vertical_scan_8x8[64] = ;
const uint8_t ff_ivi_horizontal_scan_8x8[64] = ;
const uint8_t ff_ivi_direct_scan_4x4[16] = ;
const RVMapDesc ff_ivi_rvmap_tabs[9] = ;
