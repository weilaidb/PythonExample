static int ffm_is_avail_data(AVFormatContext *s, int size)
static int ffm_resync(AVFormatContext *s, uint32_t state)
static int ffm_read_data(AVFormatContext *s,
uint8_t *buf, int size, int header)
static int64_t ffm_seek1(AVFormatContext *s, int64_t pos1)
static int64_t get_dts(AVFormatContext *s, int64_t pos)
static void adjust_write_index(AVFormatContext *s)
static int ffm_close(AVFormatContext *s)
static int ffm_append_recommended_configuration(AVStream *st, char **conf)
#define VALIDATE_PARAMETER(parameter, name, check)
static int ffm2_read_header(AVFormatContext *s)
static int ffm_read_header(AVFormatContext *s)
static int ffm_read_packet(AVFormatContext *s, AVPacket *pkt)
static int ffm_seek(AVFormatContext *s, int stream_index, int64_t wanted_pts, int flags)
static int ffm_probe(AVProbeData *p)
static const AVOption options[] = ;
static const AVClass ffm_class = ;
AVInputFormat ff_ffm_demuxer = ;
