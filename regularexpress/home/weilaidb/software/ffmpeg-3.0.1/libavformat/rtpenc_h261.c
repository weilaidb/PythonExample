#define RTP_H261_HEADER_SIZE 4
static const uint8_t *find_resync_marker_reverse(const uint8_t *av_restrict start,
const uint8_t *av_restrict end)
void ff_rtp_send_h261(AVFormatContext *ctx, const uint8_t *frame_buf, int frame_size)
