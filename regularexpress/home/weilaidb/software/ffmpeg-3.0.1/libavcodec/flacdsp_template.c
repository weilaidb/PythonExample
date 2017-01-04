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
#   define FSUF   AV_JOIN(SAMPLE_SIZE, p)
#   define sample sample_type *
#   define OUT(n) n
#   define S(s, c, i) (s[c][i])
#   define FSUF   SAMPLE_SIZE
#   define sample sample_type
#   define OUT(n) n[0]
#   define S(s, c, i) (*s++)
#define FUNC(n) AV_JOIN(n ## _, FSUF)
static void FUNC(flac_decorrelate_indep_c)(uint8_t **out, int32_t **in,
int channels, int len, int shift)
static void FUNC(flac_decorrelate_ls_c)(uint8_t **out, int32_t **in,
int channels, int len, int shift)
static void FUNC(flac_decorrelate_rs_c)(uint8_t **out, int32_t **in,
int channels, int len, int shift)
static void FUNC(flac_decorrelate_ms_c)(uint8_t **out, int32_t **in,
int channels, int len, int shift)
