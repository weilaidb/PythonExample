#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Adam Nielsen <a.nielsen@shikadi.net>");
MODULE_DESCRIPTION("Xtables: trigger LED devices on packet match");
MODULE_ALIAS("ipt_LED");
MODULE_ALIAS("ip6t_LED");
static LIST_HEAD(xt_led_triggers);
static DEFINE_MUTEX(xt_led_mutex);
struct xt_led_info_internal ;
static unsigned int
led_tg(struct sk_buff *skb, const struct xt_action_param *par)
static void led_timeout_callback(unsigned long data)
static struct xt_led_info_internal *led_trigger_lookup(const char *name)
static int led_tg_check(const struct xt_tgchk_param *par)
static void led_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target led_tg_reg __read_mostly = ;
static int __init led_tg_init(void)
static void __exit led_tg_exit(void)
module_init(led_tg_init);
module_exit(led_tg_exit);
