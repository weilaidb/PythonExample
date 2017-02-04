#define AVCODEC_VLC_H
#define VLC_TYPE int16_t
typedef struct VLC  VLC;
typedef struct RL_VLC_ELEM  RL_VLC_ELEM;
init_vlc                                 \
ff_init_vlc_sparse(vlc, nb_bits, nb_codes,          \
bits, bits_wrap, bits_size,      \
codes, codes_wrap, codes_size,   \
NULL, 0, 0, flags)
ff_init_vlc_sparse;
ff_free_vlc;
#define INIT_VLC_LE             2
#define INIT_VLC_USE_NEW_STATIC 4
INIT_VLC_STATIC       \
do  while (0)
