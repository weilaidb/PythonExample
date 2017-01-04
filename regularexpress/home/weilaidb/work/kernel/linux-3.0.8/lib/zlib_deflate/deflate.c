typedef enum  block_state;
typedef block_state (*compress_func) (deflate_state *s, int flush);
static void fill_window    (deflate_state *s);
static block_state deflate_stored (deflate_state *s, int flush);
static block_state deflate_fast   (deflate_state *s, int flush);
static block_state deflate_slow   (deflate_state *s, int flush);
static void lm_init        (deflate_state *s);
static void putShortMSB    (deflate_state *s, uInt b);
static void flush_pending  (z_streamp strm);
static int read_buf        (z_streamp strm, Byte *buf, unsigned size);
static uInt longest_match  (deflate_state *s, IPos cur_match);
static  void check_match (deflate_state *s, IPos start, IPos match,
int length);
#define NIL 0
#  define TOO_FAR 4096
#define MIN_LOOKAHEAD (MAX_MATCH+MIN_MATCH+1)
typedef struct config_s  config;
static const config configuration_table[10] = ;
#define EQUAL 0
#define UPDATE_HASH(s,h,c) (h = (((h)<<s->hash_shift) ^ (c)) & s->hash_mask)
#define INSERT_STRING(s, str, match_head) \
(UPDATE_HASH(s, s->ins_h, s->window[(str) + (MIN_MATCH-1)]), \
s->prev[(str) & s->w_mask] = match_head = s->head[s->ins_h], \
s->head[s->ins_h] = (Pos)(str))
#define CLEAR_HASH(s) \
s->head[s->hash_size-1] = NIL; \
memset((char *)s->head, 0, (unsigned)(s->hash_size-1)*sizeof(*s->head));
int zlib_deflateInit2(
z_streamp strm,
int  level,
int  method,
int  windowBits,
int  memLevel,
int  strategy
)
}
memcpy((char *)s->window, dictionary, length);
s->strstart = length;
s->block_start = (long)length;
s->ins_h = s->window[0];
UPDATE_HASH(s, s->ins_h, s->window[1]);
for (n = 0; n <= length - MIN_MATCH; n++)
if (hash_head) hash_head = 0;
return Z_OK;
}
int zlib_deflateReset(
z_streamp strm
)
static void putShortMSB(
deflate_state *s,
uInt b
)
static void flush_pending(
z_streamp strm
)
int zlib_deflate(
z_streamp strm,
int flush
)
int zlib_deflateEnd(
z_streamp strm
)
}
static int read_buf(
z_streamp strm,
Byte *buf,
unsigned size
)
static void lm_init(
deflate_state *s
)
static uInt longest_match(
deflate_state *s,
IPos cur_match
)
static void check_match(
deflate_state *s,
IPos start,
IPos match,
int length
)
#  define check_match(s, start, match, length)
static void fill_window(
deflate_state *s
)
#define FLUSH_BLOCK_ONLY(s, eof)
#define FLUSH_BLOCK(s, eof)
static block_state deflate_stored(
deflate_state *s,
int flush
)
static block_state deflate_fast(
deflate_state *s,
int flush
)
static block_state deflate_slow(
deflate_state *s,
int flush
)
int zlib_deflate_workspacesize(int windowBits, int memLevel)
