#define AVCODEC_GET_BITS_H
#define UNCHECKED_BITSTREAM_READER !CONFIG_SAFE_BITSTREAM_READER
typedef struct GetBitContext  GetBitContext;
#   define MIN_CACHE_BITS 32
#   define MIN_CACHE_BITS 25
OPEN_READER_NOSIZE            \
unsigned int name ## _index = (gb)->index;  \
unsigned int av_unused name ## _cache
#if UNCHECKED_BITSTREAM_READER
OPEN_READER OPEN_READER_NOSIZE(name, gb)
BITS_AVAILABLE 1
OPEN_READER                   \
OPEN_READER_NOSIZE(name, gb);               \
unsigned int name ## _size_plus8 = (gb)->size_in_bits_plus8
BITS_AVAILABLE name ## _index < name ## _size_plus8
CLOSE_READER (gb)->index = name ## _index
# ifdef LONG_BITSTREAM_READER
UPDATE_CACHE_LE name ## _cache = \
AV_RL64((gb)->buffer + (name ## _index >> 3)) >> (name ## _index & 7)
UPDATE_CACHE_BE name ## _cache = \
AV_RB64((gb)->buffer + (name ## _index >> 3)) >> (32 - (name ## _index & 7))
UPDATE_CACHE_LE name ## _cache = \
AV_RL32((gb)->buffer + (name ## _index >> 3)) >> (name ## _index & 7)
UPDATE_CACHE_BE name ## _cache = \
AV_RB32((gb)->buffer + (name ## _index >> 3)) << (name ## _index & 7)
UPDATE_CACHE UPDATE_CACHE_LE(name, gb)
SKIP_CACHE name ## _cache >>= (num)
UPDATE_CACHE UPDATE_CACHE_BE(name, gb)
SKIP_CACHE name ## _cache <<= (num)
#if UNCHECKED_BITSTREAM_READER
SKIP_COUNTER name ## _index += (num)
SKIP_COUNTER \
name ## _index = FFMIN(name ## _size_plus8, name ## _index + (num))
BITS_LEFT ((int)((gb)->size_in_bits - name ## _index))
SKIP_BITS                \
do  while (0)
LAST_SKIP_BITS SKIP_COUNTER(name, gb, num)
SHOW_UBITS_LE zero_extend(name ## _cache, num)
SHOW_SBITS_LE sign_extend(name ## _cache, num)
SHOW_UBITS_BE NEG_USR32(name ## _cache, num)
SHOW_SBITS_BE NEG_SSR32(name ## _cache, num)
SHOW_UBITS SHOW_UBITS_LE(name, gb, num)
SHOW_SBITS SHOW_SBITS_LE(name, gb, num)
SHOW_UBITS SHOW_UBITS_BE(name, gb, num)
SHOW_SBITS SHOW_SBITS_BE(name, gb, num)
GET_CACHE ((uint32_t) name ## _cache)
get_bits_count
skip_bits_long
get_xbits
get_sbits
get_bits
get_bitsz
get_bits_le
show_bits
skip_bits
get_bits1
show_bits1
skip_bits1
get_bits_long
get_bits64
get_sbits_long
show_bits_long
check_marker
init_get_bits
init_get_bits8
*align_get_bits
GET_VLC         \
do  while (0)
GET_RL_VLC                      \
do  while (0)
get_vlc2[2],
int bits, int max_depth)
decode012
decode210
get_bits_left
skip_1stop_8data_bits
