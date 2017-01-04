const char deflate_copyright[] =
" deflate 1.2.8 Copyright 1995-2013 Jean-loup Gailly and Mark Adler ";
typedef enum  block_state;
typedef block_state (*compress_func) OF((deflate_state *s, int flush));
local void fill_window    OF((deflate_state *s));
local block_state deflate_stored OF((deflate_state *s, int flush));
local block_state deflate_fast   OF((deflate_state *s, int flush));
local block_state deflate_slow   OF((deflate_state *s, int flush));
local block_state deflate_rle    OF((deflate_state *s, int flush));
local block_state deflate_huff   OF((deflate_state *s, int flush));
local void lm_init        OF((deflate_state *s));
local void putShortMSB    OF((deflate_state *s, uInt b));
local void flush_pending  OF((z_streamp strm));
local int read_buf        OF((z_streamp strm, Bytef *buf, unsigned size));
void match_init OF((void));
uInt longest_match  OF((deflate_state *s, IPos cur_match));
local uInt longest_match  OF((deflate_state *s, IPos cur_match));
local  void check_match OF((deflate_state *s, IPos start, IPos match,
int length));
#define NIL 0
#  define TOO_FAR 4096
typedef struct config_s  config;
local const config configuration_table[2] = ;
local const config configuration_table[10] = ;
#define EQUAL 0
struct static_tree_desc_s ;
#define RANK(f) (((f) << 1) - ((f) > 4 ? 9 : 0))
#define UPDATE_HASH(s,h,c) (h = (((h)<<s->hash_shift) ^ (c)) & s->hash_mask)
#define INSERT_STRING(s, str, match_head) \
(UPDATE_HASH(s, s->ins_h, s->window[(str) + (MIN_MATCH-1)]), \
match_head = s->head[s->ins_h], \
s->head[s->ins_h] = (Pos)(str))
#define INSERT_STRING(s, str, match_head) \
(UPDATE_HASH(s, s->ins_h, s->window[(str) + (MIN_MATCH-1)]), \
match_head = s->prev[(str) & s->w_mask] = s->head[s->ins_h], \
s->head[s->ins_h] = (Pos)(str))
#define CLEAR_HASH(s) \
s->head[s->hash_size-1] = NIL; \
zmemzero((Bytef *)s->head, (unsigned)(s->hash_size-1)*sizeof(*s->head));
int ZEXPORT deflateInit_(strm, level, version, stream_size)
z_streamp strm;
int level;
const char *version;
int stream_size;
int ZEXPORT deflateInit2_(strm, level, method, windowBits, memLevel, strategy,
version, stream_size)
z_streamp strm;
int  level;
int  method;
int  windowBits;
int  memLevel;
int  strategy;
const char *version;
int stream_size;
int ZEXPORT deflateSetDictionary (strm, dictionary, dictLength)
z_streamp strm;
const Bytef *dictionary;
uInt  dictLength;
int ZEXPORT deflateResetKeep (strm)
z_streamp strm;
int ZEXPORT deflateReset (strm)
z_streamp strm;
int ZEXPORT deflateSetHeader (strm, head)
z_streamp strm;
gz_headerp head;
int ZEXPORT deflatePending (strm, pending, bits)
unsigned *pending;
int *bits;
z_streamp strm;
int ZEXPORT deflatePrime (strm, bits, value)
z_streamp strm;
int bits;
int value;
int ZEXPORT deflateParams(strm, level, strategy)
z_streamp strm;
int level;
int strategy;
int ZEXPORT deflateTune(strm, good_length, max_lazy, nice_length, max_chain)
z_streamp strm;
int good_length;
int max_lazy;
int nice_length;
int max_chain;
uLong ZEXPORT deflateBound(strm, sourceLen)
z_streamp strm;
uLong sourceLen;
local void putShortMSB (s, b)
deflate_state *s;
uInt b;
local void flush_pending(strm)
z_streamp strm;
int ZEXPORT deflate (strm, flush)
z_streamp strm;
int flush;
int ZEXPORT deflateEnd (strm)
z_streamp strm;
int ZEXPORT deflateCopy (dest, source)
z_streamp dest;
z_streamp source;
local int read_buf(strm, buf, size)
z_streamp strm;
Bytef *buf;
unsigned size;
local void lm_init (s)
deflate_state *s;
local uInt longest_match(s, cur_match)
deflate_state *s;
IPos cur_match;
local uInt longest_match(s, cur_match)
deflate_state *s;
IPos cur_match;
local void check_match(s, start, match, length)
deflate_state *s;
IPos start, match;
int length;
#  define check_match(s, start, match, length)
local void fill_window(s)
deflate_state *s;
#define FLUSH_BLOCK_ONLY(s, last)
#define FLUSH_BLOCK(s, last)
local block_state deflate_stored(s, flush)
deflate_state *s;
int flush;
local block_state deflate_fast(s, flush)
deflate_state *s;
int flush;
local block_state deflate_slow(s, flush)
deflate_state *s;
int flush;
local block_state deflate_rle(s, flush)
deflate_state *s;
int flush;
local block_state deflate_huff(s, flush)
deflate_state *s;
int flush;
