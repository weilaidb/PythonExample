#define AVFORMAT_RTMP_H
#define RTMP_DEFAULT_PORT 1935
#define RTMPS_DEFAULT_PORT 443
#define RTMP_HANDSHAKE_PACKET_SIZE 1536
#define RTMP_CLIENT_PLATFORM "LNX"
#define RTMP_CLIENT_VER1    9
#define RTMP_CLIENT_VER2    0
#define RTMP_CLIENT_VER3  124
#define RTMP_CLIENT_VER4    2
int ff_rtmp_calc_digest(const uint8_t *src, int len, int gap,
const uint8_t *key, int keylen, uint8_t *dst);
int ff_rtmp_calc_digest_pos(const uint8_t *buf, int off, int mod_val,
int add_val);
