#undef FUNC
#undef FSUF
#undef sample
#undef sample_type
#undef OUT
#undef S
#if SAMPLE_SIZE == 32
#   define sample_type  int32_t
#   define sample_type  int16_t
#if PLANAR
AV_JOIN
#   define sample sample_type *
OUT n
S (s[c][i])
#   define FSUF   SAMPLE_SIZE
#   define sample sample_type
OUT n[0]
S (*s++)
FUNC AV_JOIN(n ## _, FSUF)
FUNC(uint8_t **out, int32_t **in,
int channels, int len, int shift)
FUNC(uint8_t **out, int32_t **in,
int channels, int len, int shift)
FUNC(uint8_t **out, int32_t **in,
int channels, int len, int shift)
FUNC(uint8_t **out, int32_t **in,
int channels, int len, int shift)
