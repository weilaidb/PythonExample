#define KMSG_COMPONENT		"smsgiucv_app"
#define pr_fmt(fmt)		KMSG_COMPONENT ": " fmt
#define SMSG_PREFIX		"APP"
#define ENV_SENDER_STR		"SMSG_SENDER="
#define ENV_SENDER_LEN		(strlen(ENV_SENDER_STR) + 8 + 1)
#define ENV_PREFIX_STR		"SMSG_ID="
#define ENV_PREFIX_LEN		(strlen(ENV_PREFIX_STR) + \
strlen(SMSG_PREFIX) + 1)
#define ENV_TEXT_STR		"SMSG_TEXT="
#define ENV_TEXT_LEN(msg)	(strlen(ENV_TEXT_STR) + strlen((msg)) + 1)
static char *sender;
module_param(sender, charp, 0400);
MODULE_PARM_DESC(sender, "z/VM user ID from which CP SMSGs are accepted");
static struct device *smsg_app_dev;
struct smsg_app_event ;
static LIST_HEAD(smsg_event_queue);
static DEFINE_SPINLOCK(smsg_event_queue_lock);
static void smsg_app_event_free(struct smsg_app_event *ev)
static struct smsg_app_event *smsg_app_event_alloc(const char *from,
const char *msg)
static void smsg_event_work_fn(struct work_struct *work)
static DECLARE_WORK(smsg_event_work, smsg_event_work_fn);
static void smsg_app_callback(const char *from, char *msg)
static int __init smsgiucv_app_init(void)
module_init(smsgiucv_app_init);
static void __exit smsgiucv_app_exit(void)
module_exit(smsgiucv_app_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Deliver z/VM CP SMSG as uevents");
MODULE_AUTHOR("Hendrik Brueckner <brueckner@linux.vnet.ibm.com>");
