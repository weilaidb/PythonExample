#define pr_fmt(fmt) "cn_test: " fmt
static struct cb_id cn_test_id = ;
static char cn_test_name[] = "cn_test";
static struct sock *nls;
static struct timer_list cn_test_timer;
static void cn_test_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
static u32 cn_test_timer_counter;
static void cn_test_timer_func(unsigned long __data)
static int cn_test_init(void)
static void cn_test_fini(void)
module_init(cn_test_init);
module_exit(cn_test_fini);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <zbr@ioremap.net>");
MODULE_DESCRIPTION("Connector's test module");
