#define HAS_IFRAME_IMAGE 0x02
#define HAS_PALLET_INFO 0x01
#define COLORSPACE_BGR 0x00
#define COLORSPACE_15_7 0x10
#define HAS_DIFF_BLOCKS 0x04
#define ZLIB_PRIME_COMPRESS_CURRENT 0x02
#define ZLIB_PRIME_COMPRESS_PREVIOUS 0x01
#define FLASHSV2_DUMB
typedef struct Block  Block;
typedef struct Palette  Palette;
typedef struct FlashSV2Context  FlashSV2Context;
cleanup
init_blocks
reset_stats
flashsv2_encode_init
new_key_frame
write_palette
write_header
write_block
encode_zlib
encode_zlibprime
encode_bgr
pixel_color15
chroma_diff
pixel_color7_fast
pixel_color7_slow
pixel_bgr
write_pixel_15_7
update_palette_index
static const unsigned int default_screen_video_v2_palette[128] = ;
generate_default_palette
generate_optimum_palette
encode_15_7_sl
encode_15_7
encode_block
compare_sl
mark_all_blocks
encode_all_blocks
write_all_blocks
write_bitstream
recommend_keyframe
static const double block_size_fraction = 1.0 / 300;
static const double use15_7_threshold = 8192;
static const double color15_7_factor = 100;
optimum_block_width
optimum_block_height
optimum_use15_7
optimum_dist
reconfigure_at_keyframe
flashsv2_encode_frame
flashsv2_encode_end
AVCodec ff_flashsv2_encoder = ;
