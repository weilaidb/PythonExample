typedef struct R3DContext  R3DContext;
typedef struct Atom  Atom;
static int read_atom(AVFormatContext *s, Atom *atom)
static int r3d_read_red1(AVFormatContext *s)
static int r3d_read_rdvo(AVFormatContext *s, Atom *atom)
static void r3d_read_reos(AVFormatContext *s)
static int r3d_read_header(AVFormatContext *s)
static int r3d_read_redv(AVFormatContext *s, AVPacket *pkt, Atom *atom)
static int r3d_read_reda(AVFormatContext *s, AVPacket *pkt, Atom *atom)
static int r3d_read_packet(AVFormatContext *s, AVPacket *pkt)
static int r3d_probe(AVProbeData *p)
static int r3d_seek(AVFormatContext *s, int stream_index, int64_t sample_time, int flags)
static int r3d_close(AVFormatContext *s)
AVInputFormat ff_r3d_demuxer = ;
