#define DRV_MODULE_NAME		"ds"
#define PFX DRV_MODULE_NAME	": "
#define DRV_MODULE_VERSION	"1.0"
#define DRV_MODULE_RELDATE	"Jul 11, 2007"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("Sun LDOM domain services driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
struct ds_msg_tag ;
#define DS_OK			0x00
#define DS_REG_VER_NACK		0x01
#define DS_REG_DUP		0x02
#define DS_INV_HDL		0x03
#define DS_TYPE_UNKNOWN		0x04
struct ds_version ;
struct ds_ver_req ;
struct ds_ver_ack ;
struct ds_ver_nack ;
struct ds_reg_req ;
struct ds_reg_ack ;
struct ds_reg_nack ;
struct ds_unreg_req ;
struct ds_unreg_ack ;
struct ds_unreg_nack ;
struct ds_data ;
struct ds_data_nack ;
struct ds_info;
struct ds_cap_state ;
static void md_update_data(struct ds_info *dp, struct ds_cap_state *cp,
void *buf, int len);
static void domain_shutdown_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len);
static void domain_panic_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len);
static void dr_cpu_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len);
static void ds_pri_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len);
static void ds_var_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len);
static struct ds_cap_state ds_states_template[] = ;
static DEFINE_SPINLOCK(ds_lock);
struct ds_info ;
static struct ds_info *ds_info_list;
static struct ds_cap_state *find_cap(struct ds_info *dp, u64 handle)
static struct ds_cap_state *find_cap_by_string(struct ds_info *dp,
const char *name)
static int __ds_send(struct ldc_channel *lp, void *data, int len)
static int ds_send(struct ldc_channel *lp, void *data, int len)
struct ds_md_update_req ;
struct ds_md_update_res ;
static void md_update_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
struct ds_shutdown_req ;
struct ds_shutdown_res ;
static void domain_shutdown_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
struct ds_panic_req ;
struct ds_panic_res ;
static void domain_panic_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
struct dr_cpu_tag ;
struct dr_cpu_resp_entry ;
static void __dr_cpu_send_error(struct ds_info *dp,
struct ds_cap_state *cp,
struct ds_data *data)
static void dr_cpu_send_error(struct ds_info *dp,
struct ds_cap_state *cp,
struct ds_data *data)
#define CPU_SENTINEL	0xffffffff
static void purge_dups(u32 *list, u32 num_ents)
static int dr_cpu_size_response(int ncpus)
static void dr_cpu_init_response(struct ds_data *resp, u64 req_num,
u64 handle, int resp_len, int ncpus,
cpumask_t *mask, u32 default_stat)
static void dr_cpu_mark(struct ds_data *resp, int cpu, int ncpus,
u32 res, u32 stat)
static int __cpuinit dr_cpu_configure(struct ds_info *dp,
struct ds_cap_state *cp,
u64 req_num,
cpumask_t *mask)
static int dr_cpu_unconfigure(struct ds_info *dp,
struct ds_cap_state *cp,
u64 req_num,
cpumask_t *mask)
static void __cpuinit dr_cpu_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
struct ds_pri_msg ;
static void ds_pri_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
struct ds_var_hdr ;
struct ds_var_set_msg ;
struct ds_var_delete_msg ;
struct ds_var_resp ;
static DEFINE_MUTEX(ds_var_mutex);
static int ds_var_doorbell;
static int ds_var_response;
static void ds_var_data(struct ds_info *dp,
struct ds_cap_state *cp,
void *buf, int len)
void ldom_set_var(const char *var, const char *value)
static char full_boot_str[256] __attribute__((aligned(32)));
static int reboot_data_supported;
void ldom_reboot(const char *boot_command)
void ldom_power_off(void)
static void ds_conn_reset(struct ds_info *dp)
static int register_services(struct ds_info *dp)
static int ds_handshake(struct ds_info *dp, struct ds_msg_tag *pkt)
static void __send_ds_nack(struct ds_info *dp, u64 handle)
static LIST_HEAD(ds_work_list);
static DECLARE_WAIT_QUEUE_HEAD(ds_wait);
struct ds_queue_entry ;
static void process_ds_work(void)
static int ds_thread(void *__unused)
static int ds_data(struct ds_info *dp, struct ds_msg_tag *pkt, int len)
static void ds_up(struct ds_info *dp)
static void ds_reset(struct ds_info *dp)
static void ds_event(void *arg, int event)
static int __devinit ds_probe(struct vio_dev *vdev,
const struct vio_device_id *id)
static int ds_remove(struct vio_dev *vdev)
static const struct vio_device_id ds_match[] = ;
static struct vio_driver ds_driver = ;
static int __init ds_init(void)
subsys_initcall(ds_init);
