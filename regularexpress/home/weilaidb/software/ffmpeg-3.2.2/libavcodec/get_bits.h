#define AVCODEC_GET_BITS_H
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
typedef struct GetBitContext  GetBitContext;
#   define MIN_CACHE_BITS 32
#   define MIN_CACHE_BITS 25
#define OPEN_READER_NOSIZE(name, gb)            \
unsigned int name ## _index = (gb)->index;  \
unsigned int av_unused name ## _cache
#if UNCHECKED_BITSTREAM_READER
#define OPEN_READER(name, gb) OPEN_READER_NOSIZE(name, gb)
#define BITS_AVAILABLE(name, gb) 1
#define OPEN_READER(name, gb)                   \
OPEN_READER_NOSIZE(name, gb);               \
unsigned int name ## _size_plus8 = (gb)->size_in_bits_plus8
#define BITS_AVAILABLE(name, gb) name ## _index < name ## _size_plus8
#define CLOSE_READER(name, gb) (gb)->index = name ## _index
# ifdef LONG_BITSTREAM_READER
# define UPDATE_CACHE_LE(name, gb) name ## _cache = \
AV_RL64((gb)->buffer + (name ## _index >> 3)) >> (name ## _index & 7)
# define UPDATE_CACHE_BE(name, gb) name ## _cache = \
AV_RB64((gb)->buffer + (name ## _index >> 3)) >> (32 - (name ## _index & 7))
# define UPDATE_CACHE_LE(name, gb) name ## _cache = \
AV_RL32((gb)->buffer + (name ## _index >> 3)) >> (name ## _index & 7)
# define UPDATE_CACHE_BE(name, gb) name ## _cache = \
AV_RB32((gb)->buffer + (name ## _index >> 3)) << (name ## _index & 7)
# define UPDATE_CACHE(name, gb) UPDATE_CACHE_LE(name, gb)
# define SKIP_CACHE(name, gb, num) name ## _cache >>= (num)
# define UPDATE_CACHE(name, gb) UPDATE_CACHE_BE(name, gb)
# define SKIP_CACHE(name, gb, num) name ## _cache <<= (num)
#if UNCHECKED_BITSTREAM_READER
#   define SKIP_COUNTER(name, gb, num) name ## _index += (num)
#   define SKIP_COUNTER(name, gb, num) \
name ## _index = FFMIN(name ## _size_plus8, name ## _index + (num))
#define BITS_LEFT(name, gb) ((int)((gb)->size_in_bits - name ## _index))
#define SKIP_BITS(name, gb, num)                \
do  while (0)
#define LAST_SKIP_BITS(name, gb, num) SKIP_COUNTER(name, gb, num)
#define SHOW_UBITS_LE(name, gb, num) zero_extend(name ## _cache, num)
#define SHOW_SBITS_LE(name, gb, num) sign_extend(name ## _cache, num)
#define SHOW_UBITS_BE(name, gb, num) NEG_USR32(name ## _cache, num)
#define SHOW_SBITS_BE(name, gb, num) NEG_SSR32(name ## _cache, num)
#   define SHOW_UBITS(name, gb, num) SHOW_UBITS_LE(name, gb, num)
#   define SHOW_SBITS(name, gb, num) SHOW_SBITS_LE(name, gb, num)
#   define SHOW_UBITS(name, gb, num) SHOW_UBITS_BE(name, gb, num)
#   define SHOW_SBITS(name, gb, num) SHOW_SBITS_BE(name, gb, num)
#define GET_CACHE(name, gb) ((uint32_t) name ## _cache)
static inline int get_bits_count(const GetBitContext *s)
static inline void skip_bits_long(GetBitContext *s, int n)
static inline int get_xbits(GetBitContext *s, int n)
static inline int get_sbits(GetBitContext *s, int n)
static inline unsigned int get_bits(GetBitContext *s, int n)
static av_always_inline int get_bitsz(GetBitContext *s, int n)
static inline unsigned int get_bits_le(GetBitContext *s, int n)
static inline unsigned int show_bits(GetBitContext *s, int n)
static inline void skip_bits(GetBitContext *s, int n)
static inline unsigned int get_bits1(GetBitContext *s)
static inline unsigned int show_bits1(GetBitContext *s)
static inline void skip_bits1(GetBitContext *s)
static inline unsigned int get_bits_long(GetBitContext *s, int n)
static inline uint64_t get_bits64(GetBitContext *s, int n)
static inline int get_sbits_long(GetBitContext *s, int n)
static inline unsigned int show_bits_long(GetBitContext *s, int n)
static inline int check_marker(void *logctx, GetBitContext *s, const char *msg)
static inline int init_get_bits(GetBitContext *s, const uint8_t *buffer,
int bit_size)
static inline int init_get_bits8(GetBitContext *s, const uint8_t *buffer,
int byte_size)
static inline const uint8_t *align_get_bits(GetBitContext *s)
#define GET_VLC(code, name, gb, table, bits, max_depth)         \
do  while (0)
#define GET_RL_VLC(level, run, name, gb, table, bits,  \
max_depth, need_update)                      \
do  while (0)
static av_always_inline int get_vlc2(GetBitContext *s, VLC_TYPE (*table)[2],
int bits, int max_depth)
static inline int decode012(GetBitContext *gb)
static inline int decode210(GetBitContext *gb)
static inline int get_bits_left(GetBitContext *gb)
static inline int skip_1stop_8data_bits(GetBitContext *gb)
