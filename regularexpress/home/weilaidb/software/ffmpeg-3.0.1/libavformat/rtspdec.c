static const struct RTSPStatusMessage  status_messages[] = ;
static int rtsp_read_close(AVFormatContext *s)
static inline int read_line(AVFormatContext *s, char *rbuf, const int rbufsize,
int *rbuflen)
static int rtsp_send_reply(AVFormatContext *s, enum RTSPStatusCode code,
const char *extracontent, uint16_t seq)
static inline int check_sessionid(AVFormatContext *s,
RTSPMessageHeader *request)
static inline int rtsp_read_request(AVFormatContext *s,
RTSPMessageHeader *request,
const char *method)
static int rtsp_read_announce(AVFormatContext *s)
static int rtsp_read_options(AVFormatContext *s)
static int rtsp_read_setup(AVFormatContext *s, char* host, char *controlurl)
static int rtsp_read_record(AVFormatContext *s)
static inline int parse_command_line(AVFormatContext *s, const char *line,
int linelen, char *uri, int urisize,
char *method, int methodsize,
enum RTSPMethod *methodcode)
int ff_rtsp_parse_streaming_commands(AVFormatContext *s)
static int rtsp_read_play(AVFormatContext *s)
static int rtsp_read_pause(AVFormatContext *s)
int ff_rtsp_setup_input_streams(AVFormatContext *s, RTSPMessageHeader *reply)
static int rtsp_listen(AVFormatContext *s)
static int rtsp_probe(AVProbeData *p)
static int rtsp_read_header(AVFormatContext *s)
int ff_rtsp_tcp_read_packet(AVFormatContext *s, RTSPStream **prtsp_st,
uint8_t *buf, int buf_size)
static int resetup_tcp(AVFormatContext *s)
static int rtsp_read_packet(AVFormatContext *s, AVPacket *pkt)
static int rtsp_read_seek(AVFormatContext *s, int stream_index,
int64_t timestamp, int flags)
static const AVClass rtsp_demuxer_class = ;
AVInputFormat ff_rtsp_demuxer = ;
