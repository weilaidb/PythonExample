#define KMSG_COMPONENT "sclp_config"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct conf_mgm_data  __attribute__((packed));
#define EV_QUAL_CPU_CHANGE	1
#define EV_QUAL_CAP_CHANGE	3
static struct work_struct sclp_cpu_capability_work;
static struct work_struct sclp_cpu_change_work;
static void sclp_cpu_capability_notify(struct work_struct *work)
static void __ref sclp_cpu_change_notify(struct work_struct *work)
static void sclp_conf_receiver_fn(struct evbuf_header *evbuf)
static struct sclp_register sclp_conf_register =
;
static int __init sclp_conf_init(void)
__initcall(sclp_conf_init);
