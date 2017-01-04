#define KMSG_COMPONENT		"hvc_iucv"
#define pr_fmt(fmt)		KMSG_COMPONENT ": " fmt
#define HVC_IUCV_MAGIC		0xc9e4c3e5
#define MAX_HVC_IUCV_LINES	HVC_ALLOC_TTY_ADAPTERS
#define MEMPOOL_MIN_NR		(PAGE_SIZE / sizeof(struct iucv_tty_buffer)/4)
#define MSG_VERSION		0x02
#define MSG_TYPE_ERROR		0x01
#define MSG_TYPE_TERMENV	0x02
#define MSG_TYPE_TERMIOS	0x04
#define MSG_TYPE_WINSIZE	0x08
#define MSG_TYPE_DATA		0x10
struct iucv_tty_msg  __attribute__((packed));
#define MSG_SIZE(s)		((s) + offsetof(struct iucv_tty_msg, data))
enum iucv_state_t ;
enum tty_state_t ;
struct hvc_iucv_private ;
struct iucv_tty_buffer ;
static	int hvc_iucv_path_pending(struct iucv_path *, u8[8], u8[16]);
static void hvc_iucv_path_severed(struct iucv_path *, u8[16]);
static void hvc_iucv_msg_pending(struct iucv_path *, struct iucv_message *);
static void hvc_iucv_msg_complete(struct iucv_path *, struct iucv_message *);
static unsigned long hvc_iucv_devices = 1;
static struct hvc_iucv_private *hvc_iucv_table[MAX_HVC_IUCV_LINES];
#define IUCV_HVC_CON_IDX	(0)
#define MAX_VMID_FILTER		(500)
static size_t hvc_iucv_filter_size;
static void *hvc_iucv_filter;
static const char *hvc_iucv_filter_string;
static DEFINE_RWLOCK(hvc_iucv_filter_lock);
static struct kmem_cache *hvc_iucv_buffer_cache;
static mempool_t *hvc_iucv_mempool;
static struct iucv_handler hvc_iucv_handler = ;
struct hvc_iucv_private *hvc_iucv_get_private(uint32_t num)
static struct iucv_tty_buffer *alloc_tty_buffer(size_t size, gfp_t flags)
static void destroy_tty_buffer(struct iucv_tty_buffer *bufp)
static void destroy_tty_buffer_list(struct list_head *list)
static int hvc_iucv_write(struct hvc_iucv_private *priv,
char *buf, int count, int *has_more_data)
static int hvc_iucv_get_chars(uint32_t vtermno, char *buf, int count)
static int hvc_iucv_queue(struct hvc_iucv_private *priv, const char *buf,
int count)
static int hvc_iucv_send(struct hvc_iucv_private *priv)
static void hvc_iucv_sndbuf_work(struct work_struct *work)
static int hvc_iucv_put_chars(uint32_t vtermno, const char *buf, int count)
static int hvc_iucv_notifier_add(struct hvc_struct *hp, int id)
static void hvc_iucv_cleanup(struct hvc_iucv_private *priv)
static inline int tty_outqueue_empty(struct hvc_iucv_private *priv)
static void flush_sndbuf_sync(struct hvc_iucv_private *priv)
static void hvc_iucv_hangup(struct hvc_iucv_private *priv)
static void hvc_iucv_notifier_hangup(struct hvc_struct *hp, int id)
static void hvc_iucv_notifier_del(struct hvc_struct *hp, int id)
static int hvc_iucv_filter_connreq(u8 ipvmid[8])
static	int hvc_iucv_path_pending(struct iucv_path *path,
u8 ipvmid[8], u8 ipuser[16])
static void hvc_iucv_path_severed(struct iucv_path *path, u8 ipuser[16])
static void hvc_iucv_msg_pending(struct iucv_path *path,
struct iucv_message *msg)
static void hvc_iucv_msg_complete(struct iucv_path *path,
struct iucv_message *msg)
static int hvc_iucv_pm_freeze(struct device *dev)
static int hvc_iucv_pm_restore_thaw(struct device *dev)
static const struct hv_ops hvc_iucv_ops = ;
static const struct dev_pm_ops hvc_iucv_pm_ops = ;
static struct device_driver hvc_iucv_driver = ;
static int __init hvc_iucv_alloc(int id, unsigned int is_console)
static void __init hvc_iucv_destroy(struct hvc_iucv_private *priv)
static const char *hvc_iucv_parse_filter(const char *filter, char *dest)
static int hvc_iucv_setup_filter(const char *val)
static int param_set_vmidfilter(const char *val, const struct kernel_param *kp)
static int param_get_vmidfilter(char *buffer, const struct kernel_param *kp)
#define param_check_vmidfilter(name, p) __param_check(name, p, void)
static struct kernel_param_ops param_ops_vmidfilter = ;
static int __init hvc_iucv_init(void)
static	int __init hvc_iucv_config(char *val)
device_initcall(hvc_iucv_init);
__setup("hvc_iucv=", hvc_iucv_config);
core_param(hvc_iucv_allow, hvc_iucv_filter, vmidfilter, 0640);
