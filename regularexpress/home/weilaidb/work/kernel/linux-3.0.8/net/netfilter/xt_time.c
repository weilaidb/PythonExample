struct xtm ;
extern struct timezone sys_tz;
static const u_int16_t days_since_year[] = ;
static const u_int16_t days_since_leapyear[] = ;
enum ;
static const u_int16_t days_since_epoch[] = ;
static inline bool is_leap(unsigned int y)
static inline unsigned int localtime_1(struct xtm *r, time_t time)
static inline void localtime_2(struct xtm *r, time_t time)
static void localtime_3(struct xtm *r, time_t time)
static bool
time_mt(const struct sk_buff *skb, struct xt_action_param *par)
static int time_mt_check(const struct xt_mtchk_param *par)
static struct xt_match xt_time_mt_reg __read_mostly = ;
static int __init time_mt_init(void)
static void __exit time_mt_exit(void)
module_init(time_mt_init);
module_exit(time_mt_exit);
MODULE_AUTHOR("Jan Engelhardt <jengelh@medozas.de>");
MODULE_DESCRIPTION("Xtables: time-based matching");
MODULE_LICENSE("GPL");
MODULE_ALIAS("ipt_time");
MODULE_ALIAS("ip6t_time");
