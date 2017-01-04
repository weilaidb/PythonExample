#define KMSG_COMPONENT "sclp_ocf"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define OCF_LENGTH_HMC_NETWORK 8UL
#define OCF_LENGTH_CPC_NAME 8UL
static char hmc_network[OCF_LENGTH_HMC_NETWORK + 1];
static char cpc_name[OCF_LENGTH_CPC_NAME + 1];
static DEFINE_SPINLOCK(sclp_ocf_lock);
static struct work_struct sclp_ocf_change_work;
static struct kset *ocf_kset;
static void sclp_ocf_change_notify(struct work_struct *work)
static void sclp_ocf_handler(struct evbuf_header *evbuf)
static struct sclp_register sclp_ocf_event = ;
static ssize_t cpc_name_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static struct kobj_attribute cpc_name_attr =
__ATTR(cpc_name, 0444, cpc_name_show, NULL);
static ssize_t hmc_network_show(struct kobject *kobj,
struct kobj_attribute *attr, char *page)
static struct kobj_attribute hmc_network_attr =
__ATTR(hmc_network, 0444, hmc_network_show, NULL);
static struct attribute *ocf_attrs[] = ;
static struct attribute_group ocf_attr_group = ;
static int __init ocf_init(void)
device_initcall(ocf_init);
