#define MAX_PAGE_SIZE 65307
#define DECODER_BUFFER_SIZE MAX_PAGE_SIZE
static const struct ogg_codec * const ogg_codecs[] = ;
static int64_t ogg_calc_pts(AVFormatContext *s, int idx, int64_t *dts);
static int ogg_new_stream(AVFormatContext *s, uint32_t serial);
static int ogg_restore(AVFormatContext *s, int discard);
static int ogg_save(AVFormatContext *s)
static int ogg_restore(AVFormatContext *s, int discard)
static int ogg_reset(AVFormatContext *s)
static const struct ogg_codec *ogg_find_codec(uint8_t *buf, int size)
static int ogg_replace_stream(AVFormatContext *s, uint32_t serial, int nsegs)
static int ogg_new_stream(AVFormatContext *s, uint32_t serial)
static int ogg_new_buf(struct ogg *ogg, int idx)
static int data_packets_seen(const struct ogg *ogg)
static int ogg_read_page(AVFormatContext *s, int *sid)
static int ogg_packet(AVFormatContext *s, int *sid, int *dstart, int *dsize,
int64_t *fpos)
static int ogg_get_length(AVFormatContext *s)
static int ogg_read_close(AVFormatContext *s)
static int ogg_read_header(AVFormatContext *s)
static int64_t ogg_calc_pts(AVFormatContext *s, int idx, int64_t *dts)
static void ogg_validate_keyframe(AVFormatContext *s, int idx, int pstart, int psize)
static int ogg_read_packet(AVFormatContext *s, AVPacket *pkt)
static int64_t ogg_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *pos_arg, int64_t pos_limit)
static int ogg_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static int ogg_probe(AVProbeData *p)
AVInputFormat ff_ogg_demuxer = ;
