#define FLAC_MAX_SEQUENTIAL_HEADERS 3
#define FLAC_MIN_HEADERS 10
#define FLAC_AVG_FRAME_SIZE 8192
#define FLAC_HEADER_BASE_SCORE        10
#define FLAC_HEADER_CHANGED_PENALTY   7
#define FLAC_HEADER_CRC_FAIL_PENALTY  50
#define FLAC_HEADER_NOT_PENALIZED_YET 100000
#define FLAC_HEADER_NOT_SCORED_YET    -100000
#define MAX_FRAME_HEADER_SIZE 16
typedef struct FLACHeaderMarker  FLACHeaderMarker;
typedef struct FLACParseContext  FLACParseContext;
static int frame_header_is_valid(AVCodecContext *avctx, const uint8_t *buf,
FLACFrameInfo *fi)
static uint8_t* flac_fifo_read_wrap(FLACParseContext *fpc, int offset, int len,
uint8_t** wrap_buf, int* allocated_size)
static uint8_t* flac_fifo_read(FLACParseContext *fpc, int offset, int *len)
static int find_headers_search_validate(FLACParseContext *fpc, int offset)
static int find_headers_search(FLACParseContext *fpc, uint8_t *buf, int buf_size,
int search_start)
static int find_new_headers(FLACParseContext *fpc, int search_start)
static int check_header_fi_mismatch(FLACParseContext  *fpc,
FLACFrameInfo     *header_fi,
FLACFrameInfo     *child_fi,
int                log_level_offset)
static int check_header_mismatch(FLACParseContext  *fpc,
FLACHeaderMarker  *header,
FLACHeaderMarker  *child,
int                log_level_offset)
static int score_header(FLACParseContext *fpc, FLACHeaderMarker *header)
static void score_sequences(FLACParseContext *fpc)
static int get_best_header(FLACParseContext* fpc, const uint8_t **poutbuf,
int *poutbuf_size)
static int flac_parse(AVCodecParserContext *s, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
static av_cold int flac_parse_init(AVCodecParserContext *c)
static void flac_parse_close(AVCodecParserContext *c)
AVCodecParser ff_flac_parser = ;
