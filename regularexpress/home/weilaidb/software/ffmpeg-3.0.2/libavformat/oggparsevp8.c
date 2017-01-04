#define VP8_HEADER_SIZE 26
static int vp8_header(AVFormatContext *s, int idx)
static uint64_t vp8_gptopts(AVFormatContext *s, int idx,
uint64_t granule, int64_t *dts)
static int vp8_packet(AVFormatContext *s, int idx)
const struct ogg_codec ff_vp8_codec = ;
