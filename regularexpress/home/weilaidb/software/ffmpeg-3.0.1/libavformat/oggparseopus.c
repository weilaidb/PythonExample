struct oggopus_private ;
#define OPUS_SEEK_PREROLL_MS 80
#define OPUS_HEAD_SIZE 19
static int opus_header(AVFormatContext *avf, int idx)
static int opus_duration(uint8_t *src, int size)
static int opus_packet(AVFormatContext *avf, int idx)
const struct ogg_codec ff_opus_codec = ;
