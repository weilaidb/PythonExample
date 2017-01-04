#define AVMB1_COMPAT
static int showcapimsgs = 0;
static struct workqueue_struct *kcapi_wq;
MODULE_DESCRIPTION("CAPI4Linux: kernel CAPI layer");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
module_param(showcapimsgs, uint, 0);
struct capictr_event ;
static struct capi_version driver_version = ;
static char driver_serial[CAPI_SERIAL_LEN] = "0004711";
static char capi_manufakturer[64] = "AVM Berlin";
#define NCCI2CTRL(ncci)    (((ncci) >> 24) & 0x7f)
LIST_HEAD(capi_drivers);
DEFINE_MUTEX(capi_drivers_lock);
struct capi_ctr *capi_controller[CAPI_MAXCONTR];
DEFINE_MUTEX(capi_controller_lock);
struct capi20_appl *capi_applications[CAPI_MAXAPPL];
static int ncontrollers;
static BLOCKING_NOTIFIER_HEAD(ctr_notifier_list);
static inline struct capi_ctr *
capi_ctr_get(struct capi_ctr *ctr)
static inline void
capi_ctr_put(struct capi_ctr *ctr)
static inline struct capi_ctr *get_capi_ctr_by_nr(u16 contr)
static inline struct capi20_appl *__get_capi_appl_by_nr(u16 applid)
static inline struct capi20_appl *get_capi_appl_by_nr(u16 applid)
static inline int capi_cmd_valid(u8 cmd)
static inline int capi_subcmd_valid(u8 subcmd)
static void
register_appl(struct capi_ctr *ctr, u16 applid, capi_register_params *rparam)
static void release_appl(struct capi_ctr *ctr, u16 applid)
static void notify_up(u32 contr)
static void ctr_down(struct capi_ctr *ctr, int new_state)
static void notify_down(u32 contr)
static int
notify_handler(struct notifier_block *nb, unsigned long val, void *v)
static void do_notify_work(struct work_struct *work)
static int notify_push(unsigned int event_type, u32 controller)
int register_capictr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_capictr_notifier);
int unregister_capictr_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_capictr_notifier);
static void recv_handler(struct work_struct *work)
void capi_ctr_handle_message(struct capi_ctr *ctr, u16 appl,
struct sk_buff *skb)
EXPORT_SYMBOL(capi_ctr_handle_message);
void capi_ctr_ready(struct capi_ctr *ctr)
EXPORT_SYMBOL(capi_ctr_ready);
void capi_ctr_down(struct capi_ctr *ctr)
EXPORT_SYMBOL(capi_ctr_down);
void capi_ctr_suspend_output(struct capi_ctr *ctr)
EXPORT_SYMBOL(capi_ctr_suspend_output);
void capi_ctr_resume_output(struct capi_ctr *ctr)
EXPORT_SYMBOL(capi_ctr_resume_output);
int attach_capi_ctr(struct capi_ctr *ctr)
EXPORT_SYMBOL(attach_capi_ctr);
int detach_capi_ctr(struct capi_ctr *ctr)
EXPORT_SYMBOL(detach_capi_ctr);
void register_capi_driver(struct capi_driver *driver)
EXPORT_SYMBOL(register_capi_driver);
void unregister_capi_driver(struct capi_driver *driver)
EXPORT_SYMBOL(unregister_capi_driver);
u16 capi20_isinstalled(void)
EXPORT_SYMBOL(capi20_isinstalled);
u16 capi20_register(struct capi20_appl *ap)
EXPORT_SYMBOL(capi20_register);
u16 capi20_release(struct capi20_appl *ap)
EXPORT_SYMBOL(capi20_release);
u16 capi20_put_message(struct capi20_appl *ap, struct sk_buff *skb)
EXPORT_SYMBOL(capi20_put_message);
u16 capi20_get_manufacturer(u32 contr, u8 *buf)
EXPORT_SYMBOL(capi20_get_manufacturer);
u16 capi20_get_version(u32 contr, struct capi_version *verp)
EXPORT_SYMBOL(capi20_get_version);
u16 capi20_get_serial(u32 contr, u8 *serial)
EXPORT_SYMBOL(capi20_get_serial);
u16 capi20_get_profile(u32 contr, struct capi_profile *profp)
EXPORT_SYMBOL(capi20_get_profile);
static int wait_on_ctr_state(struct capi_ctr *ctr, unsigned int state)
static int old_capi_manufacturer(unsigned int cmd, void __user *data)
int capi20_manufacturer(unsigned int cmd, void __user *data)
EXPORT_SYMBOL(capi20_manufacturer);
static struct notifier_block capictr_nb = ;
static int __init kcapi_init(void)
static void __exit kcapi_exit(void)
module_init(kcapi_init);
module_exit(kcapi_exit);
