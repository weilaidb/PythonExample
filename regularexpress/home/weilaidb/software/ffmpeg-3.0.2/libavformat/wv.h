#define AVFORMAT_WV_H
#define WV_HEADER_SIZE 32
#define WV_FLAG_INITIAL_BLOCK (1 << 11)
#define WV_FLAG_FINAL_BLOCK   (1 << 12)
#define WV_BLOCK_LIMIT 1048576
typedef struct WvHeader  WvHeader;
int ff_wv_parse_header(WvHeader *wv, const uint8_t *data);
