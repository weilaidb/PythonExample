#define AVCODEC_IVI_H
enum ;
#define IVI_VLC_BITS 13
#define IVI5_IS_PROTECTED       0x20
typedef struct IVIHuffDesc  IVIHuffDesc;
typedef struct IVIHuffTab  IVIHuffTab;
enum ;
extern const uint8_t ff_ivi_vertical_scan_8x8[64];
extern const uint8_t ff_ivi_horizontal_scan_8x8[64];
extern const uint8_t ff_ivi_direct_scan_4x4[16];
typedef void (InvTransformPtr)(const int32_t *in, int16_t *out, uint32_t pitch, const uint8_t *flags);
typedef void (DCTransformPtr) (const int32_t *in, int16_t *out, uint32_t pitch, int blk_size);
typedef struct RVMapDesc  RVMapDesc;
extern const RVMapDesc ff_ivi_rvmap_tabs[9];
typedef struct IVIMbInfo  IVIMbInfo;
typedef struct IVITile  IVITile;
typedef struct IVIBandDesc  IVIBandDesc;
typedef struct IVIPlaneDesc  IVIPlaneDesc;
typedef struct IVIPicConfig  IVIPicConfig;
typedef struct IVI45DecContext  IVI45DecContext;
ivi_pic_config_cmp
IVI_NUM_TILES (((stride) + (tile_size) - 1) / (tile_size))
IVI_MBs_PER_TILE \
((((tile_width) + (mb_size) - 1) / (mb_size)) * (((tile_height) + (mb_size) - 1) / (mb_size)))
IVI_TOSIGNED (-(((val) >> 1) ^ -((val) & 1)))
ivi_scale_mv
ff_ivi_init_static_vlc;
ff_ivi_dec_huff_desc;
ff_ivi_init_planes;
ff_ivi_init_tiles;
ff_ivi_decode_frame;
ff_ivi_decode_close;
