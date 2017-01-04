static int ogm_chapter(AVFormatContext *as, uint8_t *key, uint8_t *val)
int ff_vorbis_stream_comment(AVFormatContext *as, AVStream *st,
const uint8_t *buf, int size)
int ff_vorbis_comment(AVFormatContext *as, AVDictionary **m,
const uint8_t *buf, int size,
int parse_picture)
struct oggvorbis_private ;
static int fixup_vorbis_headers(AVFormatContext *as,
struct oggvorbis_private *priv,
uint8_t **buf)
static void vorbis_cleanup(AVFormatContext *s, int idx)
static int vorbis_update_metadata(AVFormatContext *s, int idx)
static int vorbis_header(AVFormatContext *s, int idx)
static int vorbis_packet(AVFormatContext *s, int idx)
const struct ogg_codec ff_vorbis_codec = ;
