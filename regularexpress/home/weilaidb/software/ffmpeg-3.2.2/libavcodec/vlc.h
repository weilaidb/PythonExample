#define AVCODEC_VLC_H
#define VLC_TYPE int16_t
typedef struct VLC  VLC;
typedef struct RL_VLC_ELEM  RL_VLC_ELEM;
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
