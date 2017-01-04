#define AVFORMAT_APETAG_H
#define APE_TAG_PREAMBLE        "APETAGEX"
#define APE_TAG_VERSION         2000
#define APE_TAG_FOOTER_BYTES    32
int64_t ff_ape_parse_tag(AVFormatContext *s);
int ff_ape_write_tag(AVFormatContext *s);
