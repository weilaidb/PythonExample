typedef struct DCAParseContext  DCAParseContext;
#define IS_CORE_MARKER(state) \
(((state & 0xFFFFFFFFF0FF) == (((uint64_t)DCA_SYNCWORD_CORE_14B_LE << 16) | 0xF007)) || \
((state & 0xFFFFFFFFFFF0) == (((uint64_t)DCA_SYNCWORD_CORE_14B_BE << 16) | 0x07F0)) || \
((state & 0xFFFFFFFF00FC) == (((uint64_t)DCA_SYNCWORD_CORE_LE     << 16) | 0x00FC)) || \
((state & 0xFFFFFFFFFC00) == (((uint64_t)DCA_SYNCWORD_CORE_BE     << 16) | 0xFC00)))
#define IS_EXSS_MARKER(state)   ((state & 0xFFFFFFFF) == DCA_SYNCWORD_SUBSTREAM)
#define IS_MARKER(state)        (IS_CORE_MARKER(state) || IS_EXSS_MARKER(state))
#define CORE_MARKER(state)      ((state >> 16) & 0xFFFFFFFF)
#define EXSS_MARKER(state)      (state & 0xFFFFFFFF)
static int dca_find_frame_end(DCAParseContext *pc1, const uint8_t *buf,
int buf_size)
static av_cold int dca_parse_init(AVCodecParserContext *s)
static int dca_parse_params(const uint8_t *buf, int buf_size, int *duration,
int *sample_rate, int *framesize)
static int dca_parse(AVCodecParserContext *s, AVCodecContext *avctx,
const uint8_t **poutbuf, int *poutbuf_size,
const uint8_t *buf, int buf_size)
AVCodecParser ff_dca_parser = ;
