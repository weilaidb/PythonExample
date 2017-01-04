static int ilbc_parse_fmtp(AVFormatContext *s,
AVStream *stream, PayloadContext *data,
const char *attr, const char *value)
static int ilbc_parse_sdp_line(AVFormatContext *s, int st_index,
PayloadContext *data, const char *line)
RTPDynamicProtocolHandler ff_ilbc_dynamic_handler = ;
