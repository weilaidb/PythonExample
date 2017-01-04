#define S390_CHP_H S390_CHP_H
#define CHP_STATUS_STANDBY		0
#define CHP_STATUS_CONFIGURED		1
#define CHP_STATUS_RESERVED		2
#define CHP_STATUS_NOT_RECOGNIZED	3
#define CHP_ONLINE 0
#define CHP_OFFLINE 1
#define CHP_VARY_ON 2
#define CHP_VARY_OFF 3
struct chp_link ;
static inline int chp_test_bit(u8 *bitmap, int num)
struct channel_path ;
static inline struct channel_path *chpid_to_chp(struct chp_id chpid)
int chp_get_status(struct chp_id chpid);
u8 chp_get_sch_opm(struct subchannel *sch);
int chp_is_registered(struct chp_id chpid);
void *chp_get_chp_desc(struct chp_id chpid);
void chp_remove_cmg_attr(struct channel_path *chp);
int chp_add_cmg_attr(struct channel_path *chp);
int chp_new(struct chp_id chpid);
void chp_cfg_schedule(struct chp_id chpid, int configure);
void chp_cfg_cancel_deconfigure(struct chp_id chpid);
int chp_info_get_status(struct chp_id chpid);
int chp_ssd_get_mask(struct chsc_ssd_info *, struct chp_link *);
