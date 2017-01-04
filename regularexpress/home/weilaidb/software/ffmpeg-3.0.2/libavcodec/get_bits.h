#define AVCODEC_GET_BITS_H
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
typedef struct GetBitContext  GetBitContext;
#define VLC_TYPE int16_t
typedef struct VLC  VLC;
typedef struct RL_VLC_ELEM  RL_VLC_ELEM;
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
static inline int check_marker(GetBitContext *s, const char *msg)
static inline int init_get_bits(GetBitContext *s, const uint8_t *buffer,
int bit_size)
static inline int init_get_bits8(GetBitContext *s, const uint8_t *buffer,
int byte_size)
static inline const uint8_t *align_get_bits(GetBitContext *s)
#define init_vlc(vlc, nb_bits, nb_codes,                \
bits, bits_wrap, bits_size,            \
codes, codes_wrap, codes_size,         \
flags)                                 \
ff_init_vlc_sparse(vlc, nb_bits, nb_codes,          \
bits, bits_wrap, bits_size,      \
codes, codes_wrap, codes_size,   \
NULL, 0, 0, flags)
int ff_init_vlc_sparse(VLC *vlc, int nb_bits, int nb_codes,
const void *bits, int bits_wrap, int bits_size,
const void *codes, int codes_wrap, int codes_size,
const void *symbols, int symbols_wrap, int symbols_size,
int flags);
void ff_free_vlc(VLC *vlc);
#define INIT_VLC_LE             2
#define INIT_VLC_USE_NEW_STATIC 4
#define INIT_VLC_STATIC(vlc, bits, a, b, c, d, e, f, g, static_size)       \
do  while (0)
#define GET_VLC(code, name, gb, table, bits, max_depth)         \
do  while (0)
#define GET_RL_VLC_INTERNAL(level, run, name, gb, table, bits,  \
max_depth, need_update)                      \
do  while (0)
static av_always_inline int get_vlc2(GetBitContext *s, VLC_TYPE (*table)[2],
int bits, int max_depth)
static inline int decode012(GetBitContext *gb)
static inline int decode210(GetBitContext *gb)
static inline int get_bits_left(GetBitContext *gb)
static inline int skip_1stop_8data_bits(GetBitContext *gb)
static inline void print_bin(int bits, int n)
static inline int get_bits_trace(GetBitContext *s, int n, const char *file,
const char *func, int line)
static inline int get_vlc_trace(GetBitContext *s, VLC_TYPE (*table)[2],
int bits, int max_depth, const char *file,
const char *func, int line)
#define GET_RL_VLC(level, run, name, gb, table, bits,           \
max_depth, need_update)                      \
do  while (0)                                                 \
static inline int get_xbits_trace(GetBitContext *s, int n, const char *file,
const char *func, int line)
#define get_bits(s, n)  get_bits_trace(s , n, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_bits1(s)    get_bits_trace(s,  1, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_xbits(s, n) get_xbits_trace(s, n, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_vlc(s, vlc)             get_vlc_trace(s, (vlc)->table, (vlc)->bits,   3, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define get_vlc2(s, tab, bits, max) get_vlc_trace(s,          tab,        bits, max, __FILE__, __PRETTY_FUNCTION__, __LINE__)
#define GET_RL_VLC GET_RL_VLC_INTERNAL
