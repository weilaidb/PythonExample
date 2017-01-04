#define AVUTIL_MATHEMATICS_H
#define M_E            2.7182818284590452354
#define M_LN2          0.69314718055994530942
#define M_LN10         2.30258509299404568402
#define M_LOG2_10      3.32192809488736234787
#define M_PHI          1.61803398874989484820
#define M_PI           3.14159265358979323846
#define M_PI_2         1.57079632679489661923
#define M_SQRT1_2      0.70710678118654752440
#define M_SQRT2        1.41421356237309504880
#define NAN            av_int2float(0x7fc00000)
#define INFINITY       av_int2float(0x7f800000)
enum AVRounding ;
int64_t av_const av_gcd(int64_t a, int64_t b);
int64_t av_rescale(int64_t a, int64_t b, int64_t c) av_const;
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding) av_const;
int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq) av_const;
int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
enum AVRounding) av_const;
int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b);
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod);
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts,  AVRational fs_tb, int duration, int64_t *last, AVRational out_tb);
int64_t av_add_stable(AVRational ts_tb, int64_t ts, AVRational inc_tb, int64_t inc);
