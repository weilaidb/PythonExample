#define OUTBUF_PADDED 1
#define INBUF_PADDED 1
typedef struct LZOContext  LZOContext;
static inline int get_byte(LZOContext *c)
#define GETB(c) (*(c).in++)
#define GETB(c) get_byte(&(c))
static inline int get_len(LZOContext *c, int x, int mask)
static inline void copy(LZOContext *c, int cnt)
static inline void copy_backptr(LZOContext *c, int back, int cnt)
int av_lzo1x_decode(void *out, int *outlen, const void *in, int *inlen)
#define MAXSZ (10*1024*1024)
#define BENCHMARK_LIBLZO_SAFE   0
#define BENCHMARK_LIBLZO_UNSAFE 0
int main(int argc, char *argv[])
