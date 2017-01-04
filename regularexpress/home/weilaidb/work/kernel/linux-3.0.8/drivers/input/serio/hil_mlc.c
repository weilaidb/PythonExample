MODULE_AUTHOR("Brian S. Julin <bri@calyx.com>");
MODULE_DESCRIPTION("HIL MLC serio");
MODULE_LICENSE("Dual BSD/GPL");
EXPORT_SYMBOL(hil_mlc_register);
EXPORT_SYMBOL(hil_mlc_unregister);
#define PREFIX "HIL MLC: "
static LIST_HEAD(hil_mlcs);
static DEFINE_RWLOCK(hil_mlcs_lock);
static struct timer_list	hil_mlcs_kicker;
static int			hil_mlcs_probe;
static void hil_mlcs_process(unsigned long unused);
static DECLARE_TASKLET_DISABLED(hil_mlcs_tasklet, hil_mlcs_process, 0);
static void hil_mlc_clear_di_map(hil_mlc *mlc, int val)
static void hil_mlc_clear_di_scratch(hil_mlc *mlc)
static void hil_mlc_copy_di_scratch(hil_mlc *mlc, int idx)
static int hil_mlc_match_di_scratch(hil_mlc *mlc)
static int hil_mlc_find_free_di(hil_mlc *mlc)
static inline void hil_mlc_clean_serio_map(hil_mlc *mlc)
static void hil_mlc_send_polls(hil_mlc *mlc)
#define HILSEN_SCHED	0x000100
#define HILSEN_BREAK	0x000200
#define HILSEN_UP	0x000400
#define HILSEN_DOWN	0x000800
#define HILSEN_FOLLOW	0x001000
#define HILSEN_MASK	0x0000ff
#define HILSEN_START	0
#define HILSEN_RESTART	1
#define HILSEN_DHR	9
#define HILSEN_DHR2	10
#define HILSEN_IFC	14
#define HILSEN_HEAL0	16
#define HILSEN_HEAL	18
#define HILSEN_ACF      21
#define HILSEN_ACF2	22
#define HILSEN_DISC0	25
#define HILSEN_DISC	27
#define HILSEN_MATCH	40
#define HILSEN_OPERATE	41
#define HILSEN_PROBE	44
#define HILSEN_DSR	52
#define HILSEN_REPOLL	55
#define HILSEN_IFCACF	58
#define HILSEN_END	60
#define HILSEN_NEXT	(HILSEN_DOWN | 1)
#define HILSEN_SAME	(HILSEN_DOWN | 0)
#define HILSEN_LAST	(HILSEN_UP | 1)
#define HILSEN_DOZE	(HILSEN_SAME | HILSEN_SCHED | HILSEN_BREAK)
#define HILSEN_SLEEP	(HILSEN_SAME | HILSEN_BREAK)
static int hilse_match(hil_mlc *mlc, int unused)
static int hilse_init_lcv(hil_mlc *mlc, int unused)
static int hilse_inc_lcv(hil_mlc *mlc, int lim)
static int hilse_set_ddi(hil_mlc *mlc, int val)
static int hilse_dec_ddi(hil_mlc *mlc, int unused)
static int hilse_inc_ddi(hil_mlc *mlc, int unused)
static int hilse_take_idd(hil_mlc *mlc, int unused)
static int hilse_take_rsc(hil_mlc *mlc, int unused)
static int hilse_take_exd(hil_mlc *mlc, int unused)
static int hilse_take_rnm(hil_mlc *mlc, int unused)
static int hilse_operate(hil_mlc *mlc, int repoll)
#define FUNC(funct, funct_arg, zero_rc, neg_rc, pos_rc) \
,
#define OUT(pack) \
,
#define CTS \
,
#define EXPECT(comp, to, got, got_wrong, timed_out) \
,
#define EXPECT_LAST(comp, to, got, got_wrong, timed_out) \
,
#define EXPECT_DISC(comp, to, got, got_wrong, timed_out) \
,
#define IN(to, got, got_error, timed_out) \
,
#define OUT_DISC(pack) \
,
#define OUT_LAST(pack) \
,
static const struct hilse_node hil_mlc_se[HILSEN_END] = ;
static inline void hilse_setup_input(hil_mlc *mlc, const struct hilse_node *node)
static int doze;
static int seidx;
static int hilse_donode(hil_mlc *mlc)
static void hil_mlcs_process(unsigned long unused)
static void hil_mlcs_timer(unsigned long data)
static int hil_mlc_serio_write(struct serio *serio, unsigned char c)
static int hil_mlc_serio_open(struct serio *serio)
static void hil_mlc_serio_close(struct serio *serio)
static const struct serio_device_id hil_mlc_serio_id = ;
int hil_mlc_register(hil_mlc *mlc)
int hil_mlc_unregister(hil_mlc *mlc)
static int __init hil_mlc_init(void)
static void __exit hil_mlc_exit(void)
module_init(hil_mlc_init);
module_exit(hil_mlc_exit);
