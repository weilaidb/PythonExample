struct H263Info ;
struct H263State ;
static void send_mode_a(AVFormatContext *s1, const struct H263Info *info,
const uint8_t *buf, int len, int ebits, int m)
static void send_mode_b(AVFormatContext *s1, const struct H263Info *info,
const struct H263State *state, const uint8_t *buf,
int len, int sbits, int ebits, int m)
void ff_rtp_send_h263_rfc2190(AVFormatContext *s1, const uint8_t *buf, int size,
const uint8_t *mb_info, int mb_info_size)
