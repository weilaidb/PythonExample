#define XMV_MIN_HEADER_SIZE 36
#define XMV_AUDIO_ADPCM51_FRONTLEFTRIGHT 1
#define XMV_AUDIO_ADPCM51_FRONTCENTERLOW 2
#define XMV_AUDIO_ADPCM51_REARLEFTRIGHT  4
#define XMV_AUDIO_ADPCM51 (XMV_AUDIO_ADPCM51_FRONTLEFTRIGHT | \
XMV_AUDIO_ADPCM51_FRONTCENTERLOW | \
XMV_AUDIO_ADPCM51_REARLEFTRIGHT)
#define XMV_BLOCK_ALIGN_SIZE 36
typedef struct XMVVideoPacket  XMVVideoPacket;
typedef struct XMVAudioPacket  XMVAudioPacket;
typedef struct XMVDemuxContext  XMVDemuxContext;
xmv_probe
xmv_read_close
xmv_read_header
xmv_read_extradata
xmv_process_packet_header
xmv_fetch_new_packet
xmv_fetch_audio_packet
xmv_fetch_video_packet
xmv_read_packet
AVInputFormat ff_xmv_demuxer = ;
