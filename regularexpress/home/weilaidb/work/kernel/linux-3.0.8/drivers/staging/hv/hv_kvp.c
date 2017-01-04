#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct  kvp_transaction;
static int kvp_send_key(int index);
static void kvp_respond_to_host(char *key, char *value, int error);
static void kvp_work_func(struct work_struct *dummy);
static void kvp_register(void);
static DECLARE_DELAYED_WORK(kvp_work, kvp_work_func);
static struct cb_id kvp_id = ;
static const char kvp_name[] = "kvp_kernel_module";
static int timeout_fired;
static u8 *recv_buffer;
static void
kvp_register(void)
static void
kvp_work_func(struct work_struct *dummy)
static void
kvp_cn_callback(struct cn_msg *msg, struct netlink_skb_parms *nsp)
static int
kvp_send_key(int index)
static void
kvp_respond_to_host(char *key, char *value, int error)
void hv_kvp_onchannelcallback(void *context)
int
hv_kvp_init(void)
void hv_kvp_deinit(void)
