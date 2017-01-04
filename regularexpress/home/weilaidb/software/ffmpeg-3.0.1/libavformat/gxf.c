struct gxf_stream_info ;
static int add_timecode_metadata(AVDictionary **pm, const char *key, uint32_t timecode, int fields_per_frame)
static int parse_packet_header(AVIOContext *pb, GXFPktType *type, int *length)
static int gxf_probe(AVProbeData *p)
static int get_sindex(AVFormatContext *s, int id, int format)
static void gxf_material_tags(AVIOContext *pb, int *len, struct gxf_stream_info *si)
static const AVRational frame_rate_tab[] = ;
static AVRational fps_tag2avr(int32_t fps)
static AVRational fps_umf2avr(uint32_t flags)
static void gxf_track_tags(AVIOContext *pb, int *len, struct gxf_stream_info *si)
static void gxf_read_index(AVFormatContext *s, int pkt_len)
static int gxf_header(AVFormatContext *s)
#define READ_ONE() \
static int64_t gxf_resync_media(AVFormatContext *s, uint64_t max_interval, int track, int timestamp)
static int gxf_packet(AVFormatContext *s, AVPacket *pkt)
static int gxf_seek(AVFormatContext *s, int stream_index, int64_t timestamp, int flags)
static int64_t gxf_read_timestamp(AVFormatContext *s, int stream_index,
int64_t *pos, int64_t pos_limit)
AVInputFormat ff_gxf_demuxer = ;
