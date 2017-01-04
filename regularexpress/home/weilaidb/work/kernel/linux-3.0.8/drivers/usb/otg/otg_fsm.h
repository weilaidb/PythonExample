#undef DEBUG
#undef VERBOSE
#define DBG(fmt, args...) printk(KERN_DEBUG "[%s]  " fmt , \
__func__, ## args)
#define DBG(fmt, args...)	do  while (0)
#define VDBG		DBG
#define VDBG(stuff...)	do  while (0)
#define MPC_LOC printk("Current Location [%s]:[%d]\n", __FILE__, __LINE__)
#define MPC_LOC do  while (0)
#define PROTO_UNDEF	(0)
#define PROTO_HOST	(1)
#define PROTO_GADGET	(2)
struct otg_fsm ;
struct otg_fsm_ops ;
static inline void otg_chrg_vbus(struct otg_fsm *fsm, int on)
static inline void otg_drv_vbus(struct otg_fsm *fsm, int on)
static inline void otg_loc_conn(struct otg_fsm *fsm, int on)
static inline void otg_loc_sof(struct otg_fsm *fsm, int on)
static inline void otg_start_pulse(struct otg_fsm *fsm)
static inline void otg_add_timer(struct otg_fsm *fsm, void *timer)
static inline void otg_del_timer(struct otg_fsm *fsm, void *timer)
int otg_statemachine(struct otg_fsm *fsm);
extern struct fsl_otg_timer *a_wait_vrise_tmr, *a_wait_bcon_tmr,
*a_aidl_bdis_tmr, *b_ase0_brst_tmr, *b_se0_srp_tmr, *b_srp_fail_tmr,
*a_wait_enum_tmr;
