static struct region_info region_configs[] = ;
static u8 default_radio_region;
module_param(default_radio_region, byte, 0);
MODULE_PARM_DESC(default_radio_region, "Region: 0=Europe/US, 1=Japan");
static u32 default_rds_buf = 300;
module_param(default_rds_buf, uint, 0444);
MODULE_PARM_DESC(rds_buf, "RDS buffer entries");
static u32 radio_nr = -1;
module_param(radio_nr, int, 0444);
MODULE_PARM_DESC(radio_nr, "Radio Nr");
static void fm_irq_send_flag_getcmd(struct fmdev *);
static void fm_irq_handle_flag_getcmd_resp(struct fmdev *);
static void fm_irq_handle_hw_malfunction(struct fmdev *);
static void fm_irq_handle_rds_start(struct fmdev *);
static void fm_irq_send_rdsdata_getcmd(struct fmdev *);
static void fm_irq_handle_rdsdata_getcmd_resp(struct fmdev *);
static void fm_irq_handle_rds_finish(struct fmdev *);
static void fm_irq_handle_tune_op_ended(struct fmdev *);
static void fm_irq_handle_power_enb(struct fmdev *);
static void fm_irq_handle_low_rssi_start(struct fmdev *);
static void fm_irq_afjump_set_pi(struct fmdev *);
static void fm_irq_handle_set_pi_resp(struct fmdev *);
static void fm_irq_afjump_set_pimask(struct fmdev *);
static void fm_irq_handle_set_pimask_resp(struct fmdev *);
static void fm_irq_afjump_setfreq(struct fmdev *);
static void fm_irq_handle_setfreq_resp(struct fmdev *);
static void fm_irq_afjump_enableint(struct fmdev *);
static void fm_irq_afjump_enableint_resp(struct fmdev *);
static void fm_irq_start_afjump(struct fmdev *);
static void fm_irq_handle_start_afjump_resp(struct fmdev *);
static void fm_irq_afjump_rd_freq(struct fmdev *);
static void fm_irq_afjump_rd_freq_resp(struct fmdev *);
static void fm_irq_handle_low_rssi_finish(struct fmdev *);
static void fm_irq_send_intmsk_cmd(struct fmdev *);
static void fm_irq_handle_intmsk_cmd_resp(struct fmdev *);
enum fmc_irq_handler_index ;
static int_handler_prototype int_handler_table[] = ;
long (*g_st_write) (struct sk_buff *skb);
static struct completion wait_for_fmdrv_reg_comp;
static inline void fm_irq_call(struct fmdev *fmdev)
static inline void fm_irq_call_stage(struct fmdev *fmdev, u8 stage)
static inline void fm_irq_timeout_stage(struct fmdev *fmdev, u8 stage)
inline void dump_tx_skb_data(struct sk_buff *skb)
inline void dump_rx_skb_data(struct sk_buff *skb)
void fmc_update_region_info(struct fmdev *fmdev, u8 region_to_set)
static void recv_tasklet(unsigned long arg)
static void send_tasklet(unsigned long arg)
static u32 fm_send_cmd(struct fmdev *fmdev, u8 fm_op, u16 type,	void *payload,
int payload_len, struct completion *wait_completion)
u32 fmc_send_cmd(struct fmdev *fmdev, u8 fm_op, u16 type, void *payload,
unsigned int payload_len, void *response, int *response_len)
static inline u32 check_cmdresp_status(struct fmdev *fmdev,
struct sk_buff **skb)
static inline void fm_irq_common_cmd_resp_helper(struct fmdev *fmdev, u8 stage)
static void int_timeout_handler(unsigned long data)
static void fm_irq_send_flag_getcmd(struct fmdev *fmdev)
static void fm_irq_handle_flag_getcmd_resp(struct fmdev *fmdev)
static void fm_irq_handle_hw_malfunction(struct fmdev *fmdev)
static void fm_irq_handle_rds_start(struct fmdev *fmdev)
static void fm_irq_send_rdsdata_getcmd(struct fmdev *fmdev)
static void fm_rx_update_af_cache(struct fmdev *fmdev, u8 af)
static void fm_rdsparse_swapbytes(struct fmdev *fmdev,
struct fm_rdsdata_format *rds_format)
static void fm_irq_handle_rdsdata_getcmd_resp(struct fmdev *fmdev)
static void fm_irq_handle_rds_finish(struct fmdev *fmdev)
static void fm_irq_handle_tune_op_ended(struct fmdev *fmdev)
static void fm_irq_handle_power_enb(struct fmdev *fmdev)
static void fm_irq_handle_low_rssi_start(struct fmdev *fmdev)
static void fm_irq_afjump_set_pi(struct fmdev *fmdev)
static void fm_irq_handle_set_pi_resp(struct fmdev *fmdev)
static void fm_irq_afjump_set_pimask(struct fmdev *fmdev)
static void fm_irq_handle_set_pimask_resp(struct fmdev *fmdev)
static void fm_irq_afjump_setfreq(struct fmdev *fmdev)
static void fm_irq_handle_setfreq_resp(struct fmdev *fmdev)
static void fm_irq_afjump_enableint(struct fmdev *fmdev)
static void fm_irq_afjump_enableint_resp(struct fmdev *fmdev)
static void fm_irq_start_afjump(struct fmdev *fmdev)
static void fm_irq_handle_start_afjump_resp(struct fmdev *fmdev)
static void fm_irq_afjump_rd_freq(struct fmdev *fmdev)
static void fm_irq_afjump_rd_freq_resp(struct fmdev *fmdev)
static void fm_irq_handle_low_rssi_finish(struct fmdev *fmdev)
static void fm_irq_send_intmsk_cmd(struct fmdev *fmdev)
static void fm_irq_handle_intmsk_cmd_resp(struct fmdev *fmdev)
u32 fmc_is_rds_data_available(struct fmdev *fmdev, struct file *file,
struct poll_table_struct *pts)
u32 fmc_transfer_rds_from_internal_buff(struct fmdev *fmdev, struct file *file,
u8 __user *buf, size_t count)
u32 fmc_set_freq(struct fmdev *fmdev, u32 freq_to_set)
u32 fmc_get_freq(struct fmdev *fmdev, u32 *cur_tuned_frq)
u32 fmc_set_region(struct fmdev *fmdev, u8 region_to_set)
u32 fmc_set_mute_mode(struct fmdev *fmdev, u8 mute_mode_toset)
u32 fmc_set_stereo_mono(struct fmdev *fmdev, u16 mode)
u32 fmc_set_rds_mode(struct fmdev *fmdev, u8 rds_en_dis)
static u32 fm_power_down(struct fmdev *fmdev)
static u32 fm_download_firmware(struct fmdev *fmdev, const u8 *fw_name)
static u32 load_default_rx_configuration(struct fmdev *fmdev)
static u32 fm_power_up(struct fmdev *fmdev, u8 mode)
u32 fmc_set_mode(struct fmdev *fmdev, u8 fm_mode)
u32 fmc_get_mode(struct fmdev *fmdev, u8 *fmmode)
static long fm_st_receive(void *arg, struct sk_buff *skb)
static void fm_st_reg_comp_cb(void *arg, char data)
u32 fmc_prepare(struct fmdev *fmdev)
u32 fmc_release(struct fmdev *fmdev)
static int __init fm_drv_init(void)
static void __exit fm_drv_exit(void)
module_init(fm_drv_init);
module_exit(fm_drv_exit);
MODULE_AUTHOR("Manjunatha Halli <manjunatha_halli@ti.com>");
MODULE_DESCRIPTION("FM Driver for TI's Connectivity chip. " FM_DRV_VERSION);
MODULE_VERSION(FM_DRV_VERSION);
MODULE_LICENSE("GPL");
