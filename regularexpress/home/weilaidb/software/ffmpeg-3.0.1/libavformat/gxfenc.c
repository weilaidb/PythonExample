#define GXF_AUDIO_PACKET_SIZE 65536
#define GXF_TIMECODE(c, d, h, m, s, f) \
((c) << 30 | (d) << 29 | (h) << 24 | (m) << 16 | (s) << 8 | (f))
typedef struct GXFTimecode GXFTimecode;
typedef struct GXFStreamContext  GXFStreamContext;
typedef struct GXFContext  GXFContext;
static const struct  gxf_lines_tab[] = ;
static const AVCodecTag gxf_media_types[] = ;
#define SERVER_PATH "EXT:/PDR/default/"
#define ES_NAME_PATTERN "EXT:/PDR/default/ES."
static int gxf_find_lines_index(AVStream *st)
static void gxf_write_padding(AVIOContext *pb, int64_t to_pad)
static int64_t updatePacketSize(AVIOContext *pb, int64_t pos)
static int64_t updateSize(AVIOContext *pb, int64_t pos)
static void gxf_write_packet_header(AVIOContext *pb, GXFPktType type)
static int gxf_write_mpeg_auxiliary(AVIOContext *pb, AVStream *st)
static int gxf_write_dv_auxiliary(AVIOContext *pb, AVStream *st)
static int gxf_write_timecode_auxiliary(AVIOContext *pb, GXFContext *gxf)
static int gxf_write_track_description(AVFormatContext *s, GXFStreamContext *sc, int index)
static int gxf_write_material_data_section(AVFormatContext *s)
static int gxf_write_track_description_section(AVFormatContext *s)
static int gxf_write_map_packet(AVFormatContext *s, int rewrite)
static int gxf_write_flt_packet(AVFormatContext *s)
static int gxf_write_umf_material_description(AVFormatContext *s)
static int gxf_write_umf_payload(AVFormatContext *s)
static int gxf_write_umf_track_description(AVFormatContext *s)
static int gxf_write_umf_media_mpeg(AVIOContext *pb, AVStream *st)
static int gxf_write_umf_media_timecode(AVIOContext *pb, int drop)
static int gxf_write_umf_media_dv(AVIOContext *pb, GXFStreamContext *sc, AVStream *st)
static int gxf_write_umf_media_audio(AVIOContext *pb, GXFStreamContext *sc)
static int gxf_write_umf_media_description(AVFormatContext *s)
static int gxf_write_umf_packet(AVFormatContext *s)
static const int GXF_samples_per_frame[] = ;
static void gxf_init_timecode_track(GXFStreamContext *sc, GXFStreamContext *vsc)
static int gxf_init_timecode(AVFormatContext *s, GXFTimecode *tc, const char *tcstr, int fields)
static int gxf_write_header(AVFormatContext *s)
static int gxf_write_eos_packet(AVIOContext *pb)
static int gxf_write_trailer(AVFormatContext *s)
static int gxf_parse_mpeg_frame(GXFStreamContext *sc, const uint8_t *buf, int size)
static int gxf_write_media_preamble(AVFormatContext *s, AVPacket *pkt, int size)
static int gxf_write_packet(AVFormatContext *s, AVPacket *pkt)
static int gxf_compare_field_nb(AVFormatContext *s, AVPacket *next, AVPacket *cur)
static int gxf_interleave_packet(AVFormatContext *s, AVPacket *out, AVPacket *pkt, int flush)
AVOutputFormat ff_gxf_muxer = ;
