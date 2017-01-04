#define AVUTIL_RATIONAL_H
typedef struct AVRational AVRational;
static inline AVRational av_make_q(int num, int den)
static inline int av_cmp_q(AVRational a, AVRational b)
static inline double av_q2d(AVRational a)
int av_reduce(int *dst_num, int *dst_den, int64_t num, int64_t den, int64_t max);
AVRational av_mul_q(AVRational b, AVRational c) av_const;
AVRational av_div_q(AVRational b, AVRational c) av_const;
AVRational av_add_q(AVRational b, AVRational c) av_const;
AVRational av_sub_q(AVRational b, AVRational c) av_const;
static av_always_inline AVRational av_inv_q(AVRational q)
AVRational av_d2q(double d, int max) av_const;
int av_nearer_q(AVRational q, AVRational q1, AVRational q2);
int av_find_nearest_q_idx(AVRational q, const AVRational* q_list);
uint32_t av_q2intfloat(AVRational q);
