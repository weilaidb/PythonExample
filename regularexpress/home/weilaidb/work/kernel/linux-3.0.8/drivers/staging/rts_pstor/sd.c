#define SD_MAX_RETRY_COUNT	3
static u16 REG_SD_CFG1;
static u16 REG_SD_CFG2;
static u16 REG_SD_CFG3;
static u16 REG_SD_STAT1;
static u16 REG_SD_STAT2;
static u16 REG_SD_BUS_STAT;
static u16 REG_SD_PAD_CTL;
static u16 REG_SD_SAMPLE_POINT_CTL;
static u16 REG_SD_PUSH_POINT_CTL;
static u16 REG_SD_CMD0;
static u16 REG_SD_CMD1;
static u16 REG_SD_CMD2;
static u16 REG_SD_CMD3;
static u16 REG_SD_CMD4;
static u16 REG_SD_CMD5;
static u16 REG_SD_BYTE_CNT_L;
static u16 REG_SD_BYTE_CNT_H;
static u16 REG_SD_BLOCK_CNT_L;
static u16 REG_SD_BLOCK_CNT_H;
static u16 REG_SD_TRANSFER;
static u16 REG_SD_VPCLK0_CTL;
static u16 REG_SD_VPCLK1_CTL;
static u16 REG_SD_DCMPS0_CTL;
static u16 REG_SD_DCMPS1_CTL;
static inline void sd_set_err_code(struct rtsx_chip *chip, u8 err_code)
static inline void sd_clr_err_code(struct rtsx_chip *chip)
static inline int sd_check_err_code(struct rtsx_chip *chip, u8 err_code)
static void sd_init_reg_addr(struct rtsx_chip *chip)
static int sd_check_data0_status(struct rtsx_chip *chip)
static int sd_send_cmd_get_rsp(struct rtsx_chip *chip, u8 cmd_idx,
u32 arg, u8 rsp_type, u8 *rsp, int rsp_len)
static int sd_read_data(struct rtsx_chip *chip,
u8 trans_mode, u8 *cmd, int cmd_len, u16 byte_cnt,
u16 blk_cnt, u8 bus_width, u8 *buf, int buf_len,
int timeout)
static int sd_write_data(struct rtsx_chip *chip, u8 trans_mode,
u8 *cmd, int cmd_len, u16 byte_cnt, u16 blk_cnt, u8 bus_width,
u8 *buf, int buf_len, int timeout)
static int sd_check_csd(struct rtsx_chip *chip, char check_wp)
static int sd_set_sample_push_timing(struct rtsx_chip *chip)
static void sd_choose_proper_clock(struct rtsx_chip *chip)
static int sd_set_clock_divider(struct rtsx_chip *chip, u8 clk_div)
static int sd_set_init_para(struct rtsx_chip *chip)
int sd_select_card(struct rtsx_chip *chip, int select)
static int sd_update_lock_status(struct rtsx_chip *chip)
static int sd_wait_state_data_ready(struct rtsx_chip *chip, u8 state, u8 data_ready, int polling_cnt)
static int sd_change_bank_voltage(struct rtsx_chip *chip, u8 voltage)
static int sd_voltage_switch(struct rtsx_chip *chip)
static int sd_reset_dcm(struct rtsx_chip *chip, u8 tune_dir)
static int sd_change_phase(struct rtsx_chip *chip, u8 sample_point, u8 tune_dir)
static int sd_check_spec(struct rtsx_chip *chip, u8 bus_width)
static int sd_query_switch_result(struct rtsx_chip *chip, u8 func_group, u8 func_to_switch,
u8 *buf, int buf_len)
static int sd_check_switch_mode(struct rtsx_chip *chip, u8 mode,
u8 func_group, u8 func_to_switch, u8 bus_width)
static u8 downgrade_switch_mode(u8 func_group, u8 func_to_switch)
static int sd_check_switch(struct rtsx_chip *chip,
u8 func_group, u8 func_to_switch, u8 bus_width)
static int sd_switch_function(struct rtsx_chip *chip, u8 bus_width)
static int sd_wait_data_idle(struct rtsx_chip *chip)
static int sd_sdr_tuning_rx_cmd(struct rtsx_chip *chip, u8 sample_point)
static int sd_ddr_tuning_rx_cmd(struct rtsx_chip *chip, u8 sample_point)
static int mmc_ddr_tunning_rx_cmd(struct rtsx_chip *chip, u8 sample_point)
static int sd_sdr_tuning_tx_cmd(struct rtsx_chip *chip, u8 sample_point)
static int sd_ddr_tuning_tx_cmd(struct rtsx_chip *chip, u8 sample_point)
static u8 sd_search_final_phase(struct rtsx_chip *chip, u32 phase_map, u8 tune_dir)
static int sd_tuning_rx(struct rtsx_chip *chip)
static int sd_ddr_pre_tuning_tx(struct rtsx_chip *chip)
static int sd_tuning_tx(struct rtsx_chip *chip)
static int sd_sdr_tuning(struct rtsx_chip *chip)
static int sd_ddr_tuning(struct rtsx_chip *chip)
static int mmc_ddr_tuning(struct rtsx_chip *chip)
int sd_switch_clock(struct rtsx_chip *chip)
static int sd_prepare_reset(struct rtsx_chip *chip)
static int sd_pull_ctl_disable(struct rtsx_chip *chip)
int sd_pull_ctl_enable(struct rtsx_chip *chip)
static int sd_init_power(struct rtsx_chip *chip)
static int sd_dummy_clock(struct rtsx_chip *chip)
static int sd_read_lba0(struct rtsx_chip *chip)
static int sd_check_wp_state(struct rtsx_chip *chip)
static int reset_sd(struct rtsx_chip *chip)
static int mmc_test_switch_bus(struct rtsx_chip *chip, u8 width)
static int mmc_switch_timing_bus(struct rtsx_chip *chip, int switch_ddr)
static int reset_mmc(struct rtsx_chip *chip)
int reset_sd_card(struct rtsx_chip *chip)
static int reset_mmc_only(struct rtsx_chip *chip)
#define WAIT_DATA_READY_RTY_CNT		255
static int wait_data_buf_ready(struct rtsx_chip *chip)
void sd_stop_seq_mode(struct rtsx_chip *chip)
static inline int sd_auto_tune_clock(struct rtsx_chip *chip)
int sd_rw(struct scsi_cmnd *srb, struct rtsx_chip *chip, u32 start_sector, u16 sector_cnt)
int soft_reset_sd_card(struct rtsx_chip *chip)
int ext_sd_send_cmd_get_rsp(struct rtsx_chip *chip, u8 cmd_idx,
u32 arg, u8 rsp_type, u8 *rsp, int rsp_len, int special_check)
int ext_sd_get_rsp(struct rtsx_chip *chip, int len, u8 *rsp, u8 rsp_type)
int sd_pass_thru_mode(struct scsi_cmnd *srb, struct rtsx_chip *chip)
static inline int get_rsp_type(struct scsi_cmnd *srb, u8 *rsp_type, int *rsp_len)
int sd_execute_no_data(struct scsi_cmnd *srb, struct rtsx_chip *chip)
int sd_execute_read_data(struct scsi_cmnd *srb, struct rtsx_chip *chip)
int sd_execute_write_data(struct scsi_cmnd *srb, struct rtsx_chip *chip)
int sd_get_cmd_rsp(struct scsi_cmnd *srb, struct rtsx_chip *chip)
int sd_hw_rst(struct scsi_cmnd *srb, struct rtsx_chip *chip)
void sd_cleanup_work(struct rtsx_chip *chip)
int sd_power_off_card3v3(struct rtsx_chip *chip)
int release_sd_card(struct rtsx_chip *chip)
