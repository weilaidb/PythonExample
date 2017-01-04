#define AVCODEC_VC1_COMMON_H
enum VC1Code ;
#define IS_MARKER(x) (((x) & ~0xFF) == VC1_CODE_RES0)
enum Profile ;
static av_always_inline const uint8_t* find_next_marker(const uint8_t *src, const uint8_t *end)
static av_always_inline int vc1_unescape_buffer(const uint8_t *src, int size, uint8_t *dst)
