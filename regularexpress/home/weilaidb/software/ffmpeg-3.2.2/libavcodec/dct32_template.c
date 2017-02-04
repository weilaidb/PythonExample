#if DCT32_FLOAT
#   define dct32 ff_dct32_float
FIXHR       ((float)(x))
MULH3 ((s)*(y)*(x))
#   define INTFLOAT float
#   define dct32 ff_dct32_fixed
FIXHR       ((int)((a) * (1LL<<32) + 0.5))
MULH3 MULH((s)*(x), y)
#   define INTFLOAT int
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
FIXHR
BF\
BF0\
BF1\
BF2\
ADD val##a += val##b
dct32
