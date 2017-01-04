#if HAVE_POLL_H
struct SAPState ;
static int sap_probe(AVProbeData *p)
static int sap_read_close(AVFormatContext *s)
static int sap_read_header(AVFormatContext *s)
static int sap_fetch_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_sap_demuxer = ;
