static struct crystalhd_user *bc_cproc_get_uid(struct crystalhd_cmd *ctx)
static int bc_cproc_get_user_count(struct crystalhd_cmd *ctx)
static void bc_cproc_mark_pwr_state(struct crystalhd_cmd *ctx)
static enum BC_STATUS bc_cproc_notify_mode(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_get_version(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_get_hwtype(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_reg_rd(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_reg_wr(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_link_reg_rd(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_link_reg_wr(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_mem_rd(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_mem_wr(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_cfg_rd(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_cfg_wr(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_download_fw(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_do_fw_cmd(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static void bc_proc_in_completion(struct crystalhd_dio_req *dio_hnd,
wait_queue_head_t *event, enum BC_STATUS sts)
static enum BC_STATUS bc_cproc_codein_sleep(struct crystalhd_cmd *ctx)
static enum BC_STATUS bc_cproc_hw_txdma(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata,
struct crystalhd_dio_req *dio)
static enum BC_STATUS bc_cproc_check_inbuffs(bool pin, void *ubuff, uint32_t ub_sz,
uint32_t uv_off, bool en_422)
static enum BC_STATUS bc_cproc_proc_input(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_add_cap_buff(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_fmt_change(struct crystalhd_cmd *ctx,
struct crystalhd_dio_req *dio)
static enum BC_STATUS bc_cproc_fetch_frame(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_start_capture(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_flush_cap_buffs(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_get_stats(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_reset_stats(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static enum BC_STATUS bc_cproc_chg_clk(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
static const struct crystalhd_cmd_tbl	g_crystalhd_cproc_tbl[] = ;
enum BC_STATUS crystalhd_suspend(struct crystalhd_cmd *ctx,
struct crystalhd_ioctl_data *idata)
enum BC_STATUS crystalhd_resume(struct crystalhd_cmd *ctx)
enum BC_STATUS crystalhd_user_open(struct crystalhd_cmd *ctx,
struct crystalhd_user **user_ctx)
enum BC_STATUS crystalhd_user_close(struct crystalhd_cmd *ctx, struct crystalhd_user *uc)
enum BC_STATUS __devinit crystalhd_setup_cmd_context(struct crystalhd_cmd *ctx,
struct crystalhd_adp *adp)
enum BC_STATUS __devexit crystalhd_delete_cmd_context(struct crystalhd_cmd *ctx)
crystalhd_cmd_proc crystalhd_get_cmd_proc(struct crystalhd_cmd *ctx, uint32_t cmd,
struct crystalhd_user *uc)
bool crystalhd_cmd_interrupt(struct crystalhd_cmd *ctx)
