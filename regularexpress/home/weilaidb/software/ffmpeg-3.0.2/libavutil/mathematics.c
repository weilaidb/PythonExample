/* Stein's binary GCD algorithm:
* https:
int64_t av_gcd(int64_t a, int64_t b)
int64_t av_rescale_rnd(int64_t a, int64_t b, int64_t c, enum AVRounding rnd)
}
int64_t av_rescale(int64_t a, int64_t b, int64_t c)
int64_t av_rescale_q_rnd(int64_t a, AVRational bq, AVRational cq,
enum AVRounding rnd)
int64_t av_rescale_q(int64_t a, AVRational bq, AVRational cq)
int av_compare_ts(int64_t ts_a, AVRational tb_a, int64_t ts_b, AVRational tb_b)
int64_t av_compare_mod(uint64_t a, uint64_t b, uint64_t mod)
int64_t av_rescale_delta(AVRational in_tb, int64_t in_ts,  AVRational fs_tb, int duration, int64_t *last, AVRational out_tb)
int64_t av_add_stable(AVRational ts_tb, int64_t ts, AVRational inc_tb, int64_t inc)
