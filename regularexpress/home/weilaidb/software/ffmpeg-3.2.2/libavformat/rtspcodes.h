#define AVFORMAT_RTSPCODES_H
enum RTSPStatusCode ;
static const av_unused char * const rtsp_status_strings[] = ;
RTSP_STATUS_CODE2STRING (\
x >= 100 && x < FF_ARRAY_ELEMS(rtsp_status_strings) && rtsp_status_strings[x] \
)? rtsp_status_strings[x] : NULL
enum RTSPMethod ;
ff_rtsp_averror
