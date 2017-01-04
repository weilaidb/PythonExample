#define AVFORMAT_RTSP_H
enum RTSPLowerTransport ;
enum RTSPTransport ;
enum RTSPControlTransport ;
#define RTSP_DEFAULT_PORT   554
#define RTSPS_DEFAULT_PORT  322
#define RTSP_MAX_TRANSPORTS 8
#define RTSP_TCP_MAX_PACKET_SIZE 1472
#define RTSP_DEFAULT_NB_AUDIO_CHANNELS 1
#define RTSP_DEFAULT_AUDIO_SAMPLERATE 44100
#define RTSP_RTP_PORT_MIN 5000
#define RTSP_RTP_PORT_MAX 65000
typedef struct RTSPTransportField  RTSPTransportField;
typedef struct RTSPMessageHeader  RTSPMessageHeader;
enum RTSPClientState ;
enum RTSPServerType ;
typedef struct RTSPState  RTSPState;
#define RTSP_FLAG_FILTER_SRC  0x1
#define RTSP_FLAG_LISTEN      0x2
#define RTSP_FLAG_CUSTOM_IO   0x4
#define RTSP_FLAG_RTCP_TO_SOURCE 0x8
#define RTSP_FLAG_PREFER_TCP  0x10
typedef struct RTSPSource  RTSPSource;
typedef struct RTSPStream  RTSPStream;
void ff_rtsp_parse_line(AVFormatContext *s,
RTSPMessageHeader *reply, const char *buf,
RTSPState *rt, const char *method);
int ff_rtsp_send_cmd_async(AVFormatContext *s, const char *method,
const char *url, const char *headers);
int ff_rtsp_send_cmd_with_content(AVFormatContext *s,
const char *method, const char *url,
const char *headers,
RTSPMessageHeader *reply,
unsigned char **content_ptr,
const unsigned char *send_content,
int send_content_length);
int ff_rtsp_send_cmd(AVFormatContext *s, const char *method,
const char *url, const char *headers,
RTSPMessageHeader *reply, unsigned char **content_ptr);
int ff_rtsp_read_reply(AVFormatContext *s, RTSPMessageHeader *reply,
unsigned char **content_ptr,
int return_on_interleaved_data, const char *method);
void ff_rtsp_skip_packet(AVFormatContext *s);
int ff_rtsp_connect(AVFormatContext *s);
void ff_rtsp_close_streams(AVFormatContext *s);
void ff_rtsp_close_connections(AVFormatContext *s);
int ff_rtsp_setup_input_streams(AVFormatContext *s, RTSPMessageHeader *reply);
int ff_rtsp_setup_output_streams(AVFormatContext *s, const char *addr);
int ff_rtsp_parse_streaming_commands(AVFormatContext *s);
int ff_sdp_parse(AVFormatContext *s, const char *content);
int ff_rtsp_tcp_read_packet(AVFormatContext *s, RTSPStream **prtsp_st,
uint8_t *buf, int buf_size);
int ff_rtsp_tcp_write_packet(AVFormatContext *s, RTSPStream *rtsp_st);
int ff_rtsp_fetch_packet(AVFormatContext *s, AVPacket *pkt);
int ff_rtsp_make_setup_request(AVFormatContext *s, const char *host, int port,
int lower_transport, const char *real_challenge);
void ff_rtsp_undo_setup(AVFormatContext *s, int send_packets);
int ff_rtsp_open_transport_ctx(AVFormatContext *s, RTSPStream *rtsp_st);
extern const AVOption ff_rtsp_options[];
