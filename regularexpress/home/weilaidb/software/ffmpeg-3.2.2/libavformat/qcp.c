typedef struct QCPContext  QCPContext;
static const uint8_t guid_qcelp_13k_part[15] = ;
static const uint8_t guid_evrc[16] = ;
static const uint8_t guid_4gv[16] = ;
static const uint8_t guid_smv[16] = ;
static int is_qcelp_13k_guid(const uint8_t *guid)
static int qcp_probe(AVProbeData *pd)
static int qcp_read_header(AVFormatContext *s)
static int qcp_read_packet(AVFormatContext *s, AVPacket *pkt)
AVInputFormat ff_qcp_demuxer = ;
