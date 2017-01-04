#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct idletimer_tg_attr ;
struct idletimer_tg ;
static LIST_HEAD(idletimer_tg_list);
static DEFINE_MUTEX(list_mutex);
static struct kobject *idletimer_tg_kobj;
static
struct idletimer_tg *__idletimer_tg_find_by_label(const char *label)
static ssize_t idletimer_tg_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static void idletimer_tg_work(struct work_struct *work)
static void idletimer_tg_expired(unsigned long data)
static int idletimer_tg_create(struct idletimer_tg_info *info)
static unsigned int idletimer_tg_target(struct sk_buff *skb,
const struct xt_action_param *par)
static int idletimer_tg_checkentry(const struct xt_tgchk_param *par)
static void idletimer_tg_destroy(const struct xt_tgdtor_param *par)
static struct xt_target idletimer_tg __read_mostly = ;
static struct class *idletimer_tg_class;
static struct device *idletimer_tg_device;
static int __init idletimer_tg_init(void)
static void __exit idletimer_tg_exit(void)
module_init(idletimer_tg_init);
module_exit(idletimer_tg_exit);
MODULE_AUTHOR("Timo Teras <ext-timo.teras@nokia.com>");
MODULE_AUTHOR("Luciano Coelho <luciano.coelho@nokia.com>");
MODULE_DESCRIPTION("Xtables: idle time monitor");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("ipt_IDLETIMER");
MODULE_ALIAS("ip6t_IDLETIMER");
