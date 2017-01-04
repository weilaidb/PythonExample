#define AVFORMAT_RTPPROTO_H
int ff_rtp_set_remote_url(URLContext *h, const char *uri);
int ff_rtp_get_local_rtp_port(URLContext *h);
int ff_rtp_get_local_rtcp_port(URLContext *h);
