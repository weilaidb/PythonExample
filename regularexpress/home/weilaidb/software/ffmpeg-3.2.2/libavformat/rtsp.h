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
ff_rtsp_parse_line;
ff_rtsp_send_cmd_async;
ff_rtsp_send_cmd_with_content;
ff_rtsp_send_cmd;
ff_rtsp_read_reply;
ff_rtsp_skip_packet;
ff_rtsp_connect;
ff_rtsp_close_streams;
ff_rtsp_close_connections;
ff_rtsp_setup_input_streams;
ff_rtsp_setup_output_streams;
ff_rtsp_parse_streaming_commands;
ff_sdp_parse;
ff_rtsp_tcp_read_packet;
ff_rtsp_tcp_write_packet;
ff_rtsp_fetch_packet;
ff_rtsp_make_setup_request;
ff_rtsp_undo_setup;
ff_rtsp_open_transport_ctx;
extern const AVOption ff_rtsp_options[];
