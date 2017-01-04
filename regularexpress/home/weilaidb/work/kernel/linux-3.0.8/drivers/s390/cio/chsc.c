#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static void *sei_page;
static void *chsc_page;
static DEFINE_SPINLOCK(chsc_page_lock);
int chsc_error_from_response(int response)
EXPORT_SYMBOL_GPL(chsc_error_from_response);
struct chsc_ssd_area  __attribute__ ((packed));
int chsc_get_ssd_info(struct subchannel_id schid, struct chsc_ssd_info *ssd)
static int s390_subchannel_remove_chpid(struct subchannel *sch, void *data)
void chsc_chp_offline(struct chp_id chpid)
static int s390_process_res_acc_new_sch(struct subchannel_id schid, void *data)
static int __s390_process_res_acc(struct subchannel *sch, void *data)
static void s390_process_res_acc(struct chp_link *link)
static int
__get_chpid_from_lir(void *data)
struct chsc_sei_area  __attribute__ ((packed));
static void chsc_process_sei_link_incident(struct chsc_sei_area *sei_area)
static void chsc_process_sei_res_acc(struct chsc_sei_area *sei_area)
static void chsc_process_sei_chp_avail(struct chsc_sei_area *sei_area)
struct chp_config_data ;
static void chsc_process_sei_chp_config(struct chsc_sei_area *sei_area)
static void chsc_process_sei(struct chsc_sei_area *sei_area)
static void chsc_process_crw(struct crw *crw0, struct crw *crw1, int overflow)
void chsc_chp_online(struct chp_id chpid)
static void __s390_subchannel_vary_chpid(struct subchannel *sch,
struct chp_id chpid, int on)
static int s390_subchannel_vary_chpid_off(struct subchannel *sch, void *data)
static int s390_subchannel_vary_chpid_on(struct subchannel *sch, void *data)
static int
__s390_vary_chpid_on(struct subchannel_id schid, void *data)
int chsc_chp_vary(struct chp_id chpid, int on)
static void
chsc_remove_cmg_attr(struct channel_subsystem *css)
static int
chsc_add_cmg_attr(struct channel_subsystem *css)
int __chsc_do_secm(struct channel_subsystem *css, int enable)
int
chsc_secm(struct channel_subsystem *css, int enable)
int chsc_determine_channel_path_desc(struct chp_id chpid, int fmt, int rfmt,
int c, int m, void *page)
EXPORT_SYMBOL_GPL(chsc_determine_channel_path_desc);
int chsc_determine_base_channel_path_desc(struct chp_id chpid,
struct channel_path_desc *desc)
int chsc_determine_fmt1_channel_path_desc(struct chp_id chpid,
struct channel_path_desc_fmt1 *desc)
static void
chsc_initialize_cmg_chars(struct channel_path *chp, u8 cmcv,
struct cmg_chars *chars)
int chsc_get_channel_measurement_chars(struct channel_path *chp)
int __init chsc_init(void)
void __init chsc_init_cleanup(void)
int chsc_enable_facility(int operation_code)
struct css_general_char css_general_characteristics;
struct css_chsc_char css_chsc_characteristics;
int __init
chsc_determine_css_characteristics(void)
EXPORT_SYMBOL_GPL(css_general_characteristics);
EXPORT_SYMBOL_GPL(css_chsc_characteristics);
int chsc_sstpc(void *page, unsigned int op, u16 ctrl)
int chsc_sstpi(void *page, void *result, size_t size)
int chsc_siosl(struct subchannel_id schid)
EXPORT_SYMBOL_GPL(chsc_siosl);
