#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
debug_info_t *cio_debug_msg_id;
debug_info_t *cio_debug_trace_id;
debug_info_t *cio_debug_crw_id;
static int __init cio_debug_init(void)
arch_initcall (cio_debug_init);
int cio_set_options(struct subchannel *sch, int flags)
static int
cio_start_handle_notoper(struct subchannel *sch, __u8 lpm)
int
cio_start_key (struct subchannel *sch,
struct ccw1 * cpa,
__u8 lpm,
__u8 key)
int
cio_start (struct subchannel *sch, struct ccw1 *cpa, __u8 lpm)
int
cio_resume (struct subchannel *sch)
int
cio_halt(struct subchannel *sch)
int
cio_clear(struct subchannel *sch)
int
cio_cancel (struct subchannel *sch)
static void cio_apply_config(struct subchannel *sch, struct schib *schib)
static int cio_check_config(struct subchannel *sch, struct schib *schib)
int cio_commit_config(struct subchannel *sch)
int cio_update_schib(struct subchannel *sch)
EXPORT_SYMBOL_GPL(cio_update_schib);
int cio_enable_subchannel(struct subchannel *sch, u32 intparm)
EXPORT_SYMBOL_GPL(cio_enable_subchannel);
int cio_disable_subchannel(struct subchannel *sch)
EXPORT_SYMBOL_GPL(cio_disable_subchannel);
int cio_create_sch_lock(struct subchannel *sch)
static int cio_check_devno_blacklisted(struct subchannel *sch)
static int cio_validate_io_subchannel(struct subchannel *sch)
static int cio_validate_msg_subchannel(struct subchannel *sch)
int cio_validate_subchannel(struct subchannel *sch, struct subchannel_id schid)
void __irq_entry do_IRQ(struct pt_regs *regs)
static struct subchannel console_subchannel;
static struct io_subchannel_private console_priv;
static int console_subchannel_in_use;
static int cio_tpi(void)
void *cio_get_console_priv(void)
void wait_cons_dev(void)
__releases(console_subchannel.lock)
__acquires(console_subchannel.lock)
static int
cio_test_for_console(struct subchannel_id schid, void *data)
static int
cio_get_console_sch_no(void)
struct subchannel *
cio_probe_console(void)
void
cio_release_console(void)
int
cio_is_console(struct subchannel_id schid)
struct subchannel *
cio_get_console_subchannel(void)
static int
__disable_subchannel_easy(struct subchannel_id schid, struct schib *schib)
static int
__clear_io_subchannel_easy(struct subchannel_id schid)
static void __clear_chsc_subchannel_easy(void)
static int pgm_check_occured;
static void cio_reset_pgm_check_handler(void)
static int stsch_reset(struct subchannel_id schid, struct schib *addr)
static int __shutdown_subchannel_easy(struct subchannel_id schid, void *data)
static atomic_t chpid_reset_count;
static void s390_reset_chpids_mcck_handler(void)
#define RCHP_TIMEOUT (30 * USEC_PER_SEC)
static void css_reset(void)
static struct reset_call css_reset_call = ;
static int __init init_css_reset_call(void)
arch_initcall(init_css_reset_call);
struct sch_match_id ;
static int __reipl_subchannel_match(struct subchannel_id schid, void *data)
static int reipl_find_schid(struct ccw_dev_id *devid,
struct subchannel_id *schid)
extern void do_reipl_asm(__u32 schid);
void reipl_ccw_dev(struct ccw_dev_id *devid)
int __init cio_get_iplinfo(struct cio_iplinfo *iplinfo)
int cio_tm_start_key(struct subchannel *sch, struct tcw *tcw, u8 lpm, u8 key)
int cio_tm_intrg(struct subchannel *sch)
