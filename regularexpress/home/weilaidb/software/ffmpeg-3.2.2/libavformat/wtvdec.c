#define PRI_PRETTY_GUID \
"%08"PRIx32"-%04"PRIx16"-%04"PRIx16"-%02x%02x%02x%02x%02x%02x%02x%02x"
#define ARG_PRETTY_GUID(g) \
AV_RL32(g),AV_RL16(g+4),AV_RL16(g+6),g[8],g[9],g[10],g[11],g[12],g[13],g[14],g[15]
#define LEN_PRETTY_GUID 34
typedef struct WtvFile  WtvFile;
static int64_t seek_by_sector(AVIOContext *pb, int64_t sector, int64_t offset)
static int wtvfile_read_packet(void *opaque, uint8_t *buf, int buf_size)
static int64_t wtvfile_seek(void *opaque, int64_t offset, int whence)
static int read_ints(AVIOContext *pb, uint32_t *data, int count)
static AVIOContext * wtvfile_open_sector(int first_sector, uint64_t length, int depth, AVFormatContext *s)
static AVIOContext * wtvfile_open2(AVFormatContext *s, const uint8_t *buf, int buf_size, const uint8_t *filename, int filename_size)
#define wtvfile_open(s, buf, buf_size, filename) \
wtvfile_open2(s, buf, buf_size, filename, sizeof(filename))
static void wtvfile_close(AVIOContext *pb)
typedef struct WtvStream  WtvStream;
typedef struct WtvContext  WtvContext;
static const ff_asf_guid EVENTID_SubtitleSpanningEvent =
;
static const ff_asf_guid EVENTID_LanguageSpanningEvent =
;
static const ff_asf_guid EVENTID_AudioDescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_CtxADescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_CSDescriptorSpanningEvent =
;
static const ff_asf_guid EVENTID_DVBScramblingControlSpanningEvent =
;
static const ff_asf_guid EVENTID_StreamIDSpanningEvent =
;
static const ff_asf_guid EVENTID_TeletextSpanningEvent =
;
static const ff_asf_guid EVENTID_AudioTypeSpanningEvent =
;
static const ff_asf_guid mediasubtype_mpeg1payload =
;
static const ff_asf_guid mediatype_mpeg2_sections =
;
static const ff_asf_guid mediatype_mpeg2_pes =
;
static const ff_asf_guid mediatype_mstvcaption =
;
static const ff_asf_guid mediasubtype_dvb_subtitle =
;
static const ff_asf_guid mediasubtype_teletext =
;
static const ff_asf_guid mediasubtype_dtvccdata =
;
static const ff_asf_guid mediasubtype_mpeg2_sections =
;
static int read_probe(AVProbeData *p)
static int filetime_to_iso8601(char *buf, int buf_size, int64_t value)
static int crazytime_to_iso8601(char *buf, int buf_size, int64_t value)
static int oledate_to_iso8601(char *buf, int buf_size, int64_t value)
static void get_attachment(AVFormatContext *s, AVIOContext *pb, int length)
static void get_tag(AVFormatContext *s, AVIOContext *pb, const char *key, int type, int length)
static void parse_legacy_attrib(AVFormatContext *s, AVIOContext *pb)
static int parse_videoinfoheader2(AVFormatContext *s, AVStream *st)
static void parse_mpeg1waveformatex(AVStream *st)
static AVStream * new_stream(AVFormatContext *s, AVStream *st, int sid, int codec_type)
static AVStream * parse_media_type(AVFormatContext *s, AVStream *st, int sid,
ff_asf_guid mediatype, ff_asf_guid subtype,
ff_asf_guid formattype, uint64_t size)
enum ;
static int recover(WtvContext *wtv, uint64_t broken_pos)
static int parse_chunks(AVFormatContext *s, int mode, int64_t seekts, int *len_ptr)
static int read_header(AVFormatContext *s)
static int read_packet(AVFormatContext *s, AVPacket *pkt)
static int read_seek(AVFormatContext *s, int stream_index,
int64_t ts, int flags)
static int read_close(AVFormatContext *s)
AVInputFormat ff_wtv_demuxer = ;
