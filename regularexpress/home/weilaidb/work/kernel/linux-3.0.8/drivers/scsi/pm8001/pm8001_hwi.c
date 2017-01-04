static void __devinit read_main_config_table(struct pm8001_hba_info *pm8001_ha)
static void __devinit
read_general_status_table(struct pm8001_hba_info *pm8001_ha)
static void __devinit
read_inbnd_queue_table(struct pm8001_hba_info *pm8001_ha)
static void __devinit
read_outbnd_queue_table(struct pm8001_hba_info *pm8001_ha)
static void __devinit
init_default_table_values(struct pm8001_hba_info *pm8001_ha)
static void __devinit
update_main_config_table(struct pm8001_hba_info *pm8001_ha)
static void __devinit
update_inbnd_queue_table(struct pm8001_hba_info *pm8001_ha, int number)
static void __devinit
update_outbnd_queue_table(struct pm8001_hba_info *pm8001_ha, int number)
static int bar4_shift(struct pm8001_hba_info *pm8001_ha, u32 shiftValue)
static void __devinit
mpi_set_phys_g3_with_ssc(struct pm8001_hba_info *pm8001_ha, u32 SSCbit)
static void __devinit
mpi_set_open_retry_interval_reg(struct pm8001_hba_info *pm8001_ha,
u32 interval)
static int mpi_init_check(struct pm8001_hba_info *pm8001_ha)
static int check_fw_ready(struct pm8001_hba_info *pm8001_ha)
static void init_pci_device_addresses(struct pm8001_hba_info *pm8001_ha)
static int __devinit pm8001_chip_init(struct pm8001_hba_info *pm8001_ha)
static int mpi_uninit_check(struct pm8001_hba_info *pm8001_ha)
static u32 soft_reset_ready_check(struct pm8001_hba_info *pm8001_ha)
static int
pm8001_chip_soft_rst(struct pm8001_hba_info *pm8001_ha, u32 signature)
static void pm8001_hw_chip_rst(struct pm8001_hba_info *pm8001_ha)
static void pm8001_chip_iounmap(struct pm8001_hba_info *pm8001_ha)
static void
pm8001_chip_intx_interrupt_enable(struct pm8001_hba_info *pm8001_ha)
static void
pm8001_chip_intx_interrupt_disable(struct pm8001_hba_info *pm8001_ha)
static void
pm8001_chip_msix_interrupt_enable(struct pm8001_hba_info *pm8001_ha,
u32 int_vec_idx)
static void
pm8001_chip_msix_interrupt_disable(struct pm8001_hba_info *pm8001_ha,
u32 int_vec_idx)
static void
pm8001_chip_interrupt_enable(struct pm8001_hba_info *pm8001_ha)
static void
pm8001_chip_interrupt_disable(struct pm8001_hba_info *pm8001_ha)
static int mpi_msg_free_get(struct inbound_queue_table *circularQ,
u16 messageSize, void **messagePtr)
static int mpi_build_cmd(struct pm8001_hba_info *pm8001_ha,
struct inbound_queue_table *circularQ,
u32 opCode, void *payload)
static u32 mpi_msg_free_set(struct pm8001_hba_info *pm8001_ha, void *pMsg,
struct outbound_queue_table *circularQ, u8 bc)
static u32 mpi_msg_consume(struct pm8001_hba_info *pm8001_ha,
struct outbound_queue_table *circularQ,
void **messagePtr1, u8 *pBC)
static void pm8001_work_fn(struct work_struct *work)
static int pm8001_handle_event(struct pm8001_hba_info *pm8001_ha, void *data,
int handler)
static void
mpi_ssp_completion(struct pm8001_hba_info *pm8001_ha , void *piomb)
static void mpi_ssp_event(struct pm8001_hba_info *pm8001_ha , void *piomb)
static void
mpi_sata_completion(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void mpi_sata_event(struct pm8001_hba_info *pm8001_ha , void *piomb)
static void
mpi_smp_completion(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void
mpi_set_dev_state_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void
mpi_set_nvmd_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void
mpi_get_nvmd_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int mpi_local_phy_ctl(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void pm8001_bytes_dmaed(struct pm8001_hba_info *pm8001_ha, int i)
static void get_lrate_mode(struct pm8001_phy *phy, u8 link_rate)
static void pm8001_get_attached_sas_addr(struct pm8001_phy *phy,
u8 *sas_addr)
static void pm8001_hw_event_ack_req(struct pm8001_hba_info *pm8001_ha,
u32 Qnum, u32 SEA, u32 port_id, u32 phyId, u32 param0, u32 param1)
static int pm8001_chip_phy_ctl_req(struct pm8001_hba_info *pm8001_ha,
u32 phyId, u32 phy_op);
static void
hw_event_sas_phy_up(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void
hw_event_sata_phy_up(struct pm8001_hba_info *pm8001_ha, void *piomb)
static void
hw_event_phy_down(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int mpi_reg_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int mpi_dereg_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int
mpi_fw_flash_update_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int
mpi_general_event(struct pm8001_hba_info *pm8001_ha , void *piomb)
static int
mpi_task_abort_resp(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int mpi_hw_event(struct pm8001_hba_info *pm8001_ha, void* piomb)
static void process_one_iomb(struct pm8001_hba_info *pm8001_ha, void *piomb)
static int process_oq(struct pm8001_hba_info *pm8001_ha)
static const u8 data_dir_flags[] = ;
static void
pm8001_chip_make_sg(struct scatterlist *scatter, int nr, void *prd)
static void build_smp_cmd(u32 deviceID, u32 hTag, struct smp_req *psmp_cmd)
static int pm8001_chip_smp_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
static int pm8001_chip_ssp_io_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
static int pm8001_chip_sata_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
static int
pm8001_chip_phy_start_req(struct pm8001_hba_info *pm8001_ha, u8 phy_id)
static int pm8001_chip_phy_stop_req(struct pm8001_hba_info *pm8001_ha,
u8 phy_id)
static int pm8001_chip_reg_dev_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_device *pm8001_dev, u32 flag)
static int pm8001_chip_dereg_dev_req(struct pm8001_hba_info *pm8001_ha,
u32 device_id)
static int pm8001_chip_phy_ctl_req(struct pm8001_hba_info *pm8001_ha,
u32 phyId, u32 phy_op)
static u32 pm8001_chip_is_our_interupt(struct pm8001_hba_info *pm8001_ha)
static irqreturn_t
pm8001_chip_isr(struct pm8001_hba_info *pm8001_ha)
static int send_task_abort(struct pm8001_hba_info *pm8001_ha, u32 opc,
u32 dev_id, u8 flag, u32 task_tag, u32 cmd_tag)
static int pm8001_chip_abort_task(struct pm8001_hba_info *pm8001_ha,
struct pm8001_device *pm8001_dev, u8 flag, u32 task_tag, u32 cmd_tag)
static int pm8001_chip_ssp_tm_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb, struct pm8001_tmf_task *tmf)
static int pm8001_chip_get_nvmd_req(struct pm8001_hba_info *pm8001_ha,
void *payload)
static int pm8001_chip_set_nvmd_req(struct pm8001_hba_info *pm8001_ha,
void *payload)
static int
pm8001_chip_fw_flash_update_build(struct pm8001_hba_info *pm8001_ha,
void *fw_flash_updata_info, u32 tag)
static int
pm8001_chip_fw_flash_update_req(struct pm8001_hba_info *pm8001_ha,
void *payload)
static int
pm8001_chip_set_dev_state_req(struct pm8001_hba_info *pm8001_ha,
struct pm8001_device *pm8001_dev, u32 state)
static int
pm8001_chip_sas_re_initialization(struct pm8001_hba_info *pm8001_ha)
const struct pm8001_dispatch pm8001_8001_dispatch = ;
