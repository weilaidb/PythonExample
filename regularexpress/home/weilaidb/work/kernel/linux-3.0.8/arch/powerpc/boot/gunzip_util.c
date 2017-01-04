#define HEAD_CRC	2
#define EXTRA_FIELD	4
#define ORIG_NAME	8
#define COMMENT		0x10
#define RESERVED	0xe0
void gunzip_start(struct gunzip_state *state, void *src, int srclen)
int gunzip_partial(struct gunzip_state *state, void *dst, int dstlen)
void gunzip_exactly(struct gunzip_state *state, void *dst, int dstlen)
void gunzip_discard(struct gunzip_state *state, int len)
int gunzip_finish(struct gunzip_state *state, void *dst, int dstlen)
