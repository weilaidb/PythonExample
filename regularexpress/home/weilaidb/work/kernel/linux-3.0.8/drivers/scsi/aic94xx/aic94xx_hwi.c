u32 MBAR0_SWB_SIZE;
static int asd_get_user_sas_addr(struct asd_ha_struct *asd_ha)
static void asd_propagate_sas_addr(struct asd_ha_struct *asd_ha)
static void asd_init_phy_identify(struct asd_phy *phy)
static int asd_init_phy(struct asd_phy *phy)
static void asd_init_ports(struct asd_ha_struct *asd_ha)
static int asd_init_phys(struct asd_ha_struct *asd_ha)
static int asd_init_sw(struct asd_ha_struct *asd_ha)
static int asd_init_scbs(struct asd_ha_struct *asd_ha)
static void asd_get_max_scb_ddb(struct asd_ha_struct *asd_ha)
static void asd_dl_tasklet_handler(unsigned long);
static int asd_init_dl(struct asd_ha_struct *asd_ha)
static int asd_alloc_edbs(struct asd_ha_struct *asd_ha, gfp_t gfp_flags)
static int asd_alloc_escbs(struct asd_ha_struct *asd_ha,
gfp_t gfp_flags)
static void asd_assign_edbs2escbs(struct asd_ha_struct *asd_ha)
static int asd_init_escbs(struct asd_ha_struct *asd_ha)
int asd_chip_hardrst(struct asd_ha_struct *asd_ha)
static int asd_init_chip(struct asd_ha_struct *asd_ha)
#define MAX_DEVS ((OCM_MAX_SIZE) / (ASD_DDB_SIZE))
static int max_devs = 0;
module_param_named(max_devs, max_devs, int, S_IRUGO);
MODULE_PARM_DESC(max_devs, "\n"
"\tMaximum number of SAS devices to support (not LUs).\n"
"\tDefault: 2176, Maximum: 65663.\n");
static int max_cmnds = 0;
module_param_named(max_cmnds, max_cmnds, int, S_IRUGO);
MODULE_PARM_DESC(max_cmnds, "\n"
"\tMaximum number of commands queuable.\n"
"\tDefault: 512, Maximum: 66047.\n");
static void asd_extend_devctx_ocm(struct asd_ha_struct *asd_ha)
static int asd_extend_devctx(struct asd_ha_struct *asd_ha)
static int asd_extend_cmdctx(struct asd_ha_struct *asd_ha)
static int asd_init_ctxmem(struct asd_ha_struct *asd_ha)
int asd_init_hw(struct asd_ha_struct *asd_ha)
static void asd_chip_reset(struct asd_ha_struct *asd_ha)
static void asd_dl_tasklet_handler(unsigned long data)
static void asd_process_donelist_isr(struct asd_ha_struct *asd_ha)
static void asd_com_sas_isr(struct asd_ha_struct *asd_ha)
static void asd_arp2_err(struct asd_ha_struct *asd_ha, u32 dchstatus)
static void asd_dch_sas_isr(struct asd_ha_struct *asd_ha)
static void asd_rbi_exsi_isr(struct asd_ha_struct *asd_ha)
static void asd_hst_pcix_isr(struct asd_ha_struct *asd_ha)
irqreturn_t asd_hw_isr(int irq, void *dev_id)
static struct asd_ascb *asd_ascb_alloc(struct asd_ha_struct *asd_ha,
gfp_t gfp_flags)
struct asd_ascb *asd_ascb_alloc_list(struct asd_ha_struct
*asd_ha, int *num,
gfp_t gfp_flags)
static void asd_swap_head_scb(struct asd_ha_struct *asd_ha,
struct asd_ascb *ascb)
static void asd_start_scb_timers(struct list_head *list)
int asd_post_ascb_list(struct asd_ha_struct *asd_ha, struct asd_ascb *ascb,
int num)
int asd_post_escb_list(struct asd_ha_struct *asd_ha, struct asd_ascb *ascb,
int num)
void asd_turn_led(struct asd_ha_struct *asd_ha, int phy_id, int op)
void asd_control_led(struct asd_ha_struct *asd_ha, int phy_id, int op)
static int asd_enable_phy(struct asd_ha_struct *asd_ha, int phy_id)
int asd_enable_phys(struct asd_ha_struct *asd_ha, const u8 phy_mask)
