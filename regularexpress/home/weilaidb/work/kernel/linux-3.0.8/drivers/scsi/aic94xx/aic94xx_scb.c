#define DL_PHY_MASK      7
#define BYTES_DMAED      0
#define PRIMITIVE_RECVD  0x08
#define PHY_EVENT        0x10
#define LINK_RESET_ERROR 0x18
#define TIMER_EVENT      0x20
#define REQ_TASK_ABORT   0xF0
#define REQ_DEVICE_RESET 0xF1
#define SIGNAL_NCQ_ERROR 0xF2
#define CLEAR_NCQ_ERROR  0xF3
#define PHY_EVENTS_STATUS (CURRENT_LOSS_OF_SIGNAL | CURRENT_OOB_DONE   \
| CURRENT_SPINUP_HOLD | CURRENT_GTO_TIMEOUT \
| CURRENT_OOB_ERROR)
static void get_lrate_mode(struct asd_phy *phy, u8 oob_mode)
static void asd_phy_event_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl)
static unsigned ord_phy(struct asd_ha_struct *asd_ha, struct asd_phy *phy)
static void asd_get_attached_sas_addr(struct asd_phy *phy, u8 *sas_addr)
static void asd_form_port(struct asd_ha_struct *asd_ha, struct asd_phy *phy)
static void asd_deform_port(struct asd_ha_struct *asd_ha, struct asd_phy *phy)
static void asd_bytes_dmaed_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl,
int edb_id, int phy_id)
static void asd_link_reset_err_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl,
int phy_id)
static void asd_primitive_rcvd_tasklet(struct asd_ascb *ascb,
struct done_list_struct *dl,
int phy_id)
void asd_invalidate_edb(struct asd_ascb *ascb, int edb_id)
static void escb_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
int asd_init_post_escbs(struct asd_ha_struct *asd_ha)
#define CONTROL_PHY_STATUS (CURRENT_DEVICE_PRESENT | CURRENT_OOB_DONE   \
| CURRENT_SPINUP_HOLD | CURRENT_GTO_TIMEOUT \
| CURRENT_OOB_ERROR)
static void control_phy_tasklet_complete(struct asd_ascb *ascb,
struct done_list_struct *dl)
static void set_speed_mask(u8 *speed_mask, struct asd_phy_desc *pd)
void asd_build_control_phy(struct asd_ascb *ascb, int phy_id, u8 subfunc)
void asd_ascb_timedout(unsigned long data)
static const int phy_func_table[] = ;
int asd_control_phy(struct asd_sas_phy *phy, enum phy_func func, void *arg)
