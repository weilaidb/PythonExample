static void sym_int_ma (struct sym_hcb *np);
static void sym_int_sir(struct sym_hcb *);
static struct sym_ccb *sym_alloc_ccb(struct sym_hcb *np);
static struct sym_ccb *sym_ccb_from_dsa(struct sym_hcb *np, u32 dsa);
static void sym_alloc_lcb_tags (struct sym_hcb *np, u_char tn, u_char ln);
static void sym_complete_error (struct sym_hcb *np, struct sym_ccb *cp);
static void sym_complete_ok (struct sym_hcb *np, struct sym_ccb *cp);
static int sym_compute_residual(struct sym_hcb *np, struct sym_ccb *cp);
static void sym_printl_hex(u_char *p, int n)
static void sym_print_msg(struct sym_ccb *cp, char *label, u_char *msg)
static void sym_print_nego_msg(struct sym_hcb *np, int target, char *label, u_char *msg)
void sym_print_xerr(struct scsi_cmnd *cmd, int x_status)
static char *sym_scsi_bus_mode(int mode)
static void sym_chip_reset (struct sym_hcb *np)
static void sym_soft_reset (struct sym_hcb *np)
static void sym_start_reset(struct sym_hcb *np)
int sym_reset_scsi_bus(struct sym_hcb *np, int enab_int)
static void sym_selectclock(struct sym_hcb *np, u_char scntl3)
static unsigned getfreq (struct sym_hcb *np, int gen)
static unsigned sym_getfreq (struct sym_hcb *np)
static void sym_getclock (struct sym_hcb *np, int mult)
static int sym_getpciclock (struct sym_hcb *np)
{
int f = 0;
#if 1
if (np->features & FE_66MHZ)
#define _5M 5000000
static const u32 div_10M[] = ;
static int
sym_getsync(struct sym_hcb *np, u_char dt, u_char sfac, u_char *divp, u_char *fakp)
#define burst_length(bc) (!(bc))? 0 : 1 << (bc)
#define burst_code(dmode, ctest4, ctest5) \
(ctest4) & 0x80? 0 : (((dmode) & 0xc0) >> 6) + ((ctest5) & 0x04) + 1
static inline void sym_init_burst(struct sym_hcb *np, u_char bc)
static void sym_save_initial_setting (struct sym_hcb *np)
static void sym_set_bus_mode(struct sym_hcb *np, struct sym_nvram *nvram)
static int sym_prepare_setting(struct Scsi_Host *shost, struct sym_hcb *np, struct sym_nvram *nvram)
static int sym_regtest(struct sym_hcb *np)
{
register volatile u32 data;
data = 0xffffffff;
OUTL(np, nc_dstat, data);
data = INL(np, nc_dstat);
#if 1
if (data == 0xffffffff)
static inline int sym_regtest(struct sym_hcb *np)
static int sym_snooptest(struct sym_hcb *np)
static void sym_log_hard_error(struct Scsi_Host *shost, u_short sist, u_char dstat)
void sym_dump_registers(struct Scsi_Host *shost)
static struct sym_chip sym_dev_table[] = ;
#define sym_num_devs (ARRAY_SIZE(sym_dev_table))
struct sym_chip *
sym_lookup_chip_table (u_short device_id, u_char revision)
#if SYM_CONF_DMA_ADDRESSING_MODE == 2
int sym_lookup_dmap(struct sym_hcb *np, u32 h, int s)
static void sym_update_dmap_regs(struct sym_hcb *np)
static void sym_check_goals(struct sym_hcb *np, struct scsi_target *starget,
struct sym_trans *goal)
static int sym_prepare_nego(struct sym_hcb *np, struct sym_ccb *cp, u_char *msgptr)
void sym_put_start_queue(struct sym_hcb *np, struct sym_ccb *cp)
void sym_start_next_ccbs(struct sym_hcb *np, struct sym_lcb *lp, int maxn)
static int sym_wakeup_done (struct sym_hcb *np)
static void sym_flush_comp_queue(struct sym_hcb *np, int cam_status)
static void sym_flush_busy_queue (struct sym_hcb *np, int cam_status)
void sym_start_up(struct Scsi_Host *shost, int reason)
static void sym_settrans(struct sym_hcb *np, int target, u_char opts, u_char ofs,
u_char per, u_char wide, u_char div, u_char fak)
static void sym_announce_transfer_rate(struct sym_tcb *tp)
static void sym_setwide(struct sym_hcb *np, int target, u_char wide)
static void
sym_setsync(struct sym_hcb *np, int target,
u_char ofs, u_char per, u_char div, u_char fak)
static void
sym_setpprot(struct sym_hcb *np, int target, u_char opts, u_char ofs,
u_char per, u_char wide, u_char div, u_char fak)
static void sym_recover_scsi_int (struct sym_hcb *np, u_char hsts)
static void sym_int_sto (struct sym_hcb *np)
static void sym_int_udc (struct sym_hcb *np)
static void sym_int_sbmc(struct Scsi_Host *shost)
static void sym_int_par (struct sym_hcb *np, u_short sist)
static void sym_int_ma (struct sym_hcb *np)
irqreturn_t sym_interrupt(struct Scsi_Host *shost)
static int
sym_dequeue_from_squeue(struct sym_hcb *np, int i, int target, int lun, int task)
static void sym_sir_bad_scsi_status(struct sym_hcb *np, int num, struct sym_ccb *cp)
int sym_clear_tasks(struct sym_hcb *np, int cam_status, int target, int lun, int task)
static void sym_sir_task_recovery(struct sym_hcb *np, int num)
static int sym_evaluate_dp(struct sym_hcb *np, struct sym_ccb *cp, u32 scr, int *ofs)
static void sym_modify_dp(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp, int ofs)
int sym_compute_residual(struct sym_hcb *np, struct sym_ccb *cp)
static int
sym_sync_nego_check(struct sym_hcb *np, int req, struct sym_ccb *cp)
static void sym_sync_nego(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp)
static int
sym_ppr_nego_check(struct sym_hcb *np, int req, int target)
static void sym_ppr_nego(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp)
static int
sym_wide_nego_check(struct sym_hcb *np, int req, struct sym_ccb *cp)
static void sym_wide_nego(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp)
static void sym_nego_default(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp)
static void sym_nego_rejected(struct sym_hcb *np, struct sym_tcb *tp, struct sym_ccb *cp)
static void sym_int_sir(struct sym_hcb *np)
struct sym_ccb *sym_get_ccb (struct sym_hcb *np, struct scsi_cmnd *cmd, u_char tag_order)
void sym_free_ccb (struct sym_hcb *np, struct sym_ccb *cp)
static struct sym_ccb *sym_alloc_ccb(struct sym_hcb *np)
static struct sym_ccb *sym_ccb_from_dsa(struct sym_hcb *np, u32 dsa)
static void sym_init_tcb (struct sym_hcb *np, u_char tn)
struct sym_lcb *sym_alloc_lcb (struct sym_hcb *np, u_char tn, u_char ln)
static void sym_alloc_lcb_tags (struct sym_hcb *np, u_char tn, u_char ln)
int sym_free_lcb(struct sym_hcb *np, u_char tn, u_char ln)
int sym_queue_scsiio(struct sym_hcb *np, struct scsi_cmnd *cmd, struct sym_ccb *cp)
int sym_reset_scsi_target(struct sym_hcb *np, int target)
static int sym_abort_ccb(struct sym_hcb *np, struct sym_ccb *cp, int timed_out)
int sym_abort_scsiio(struct sym_hcb *np, struct scsi_cmnd *cmd, int timed_out)
void sym_complete_error(struct sym_hcb *np, struct sym_ccb *cp)
void sym_complete_ok (struct sym_hcb *np, struct sym_ccb *cp)
int sym_hcb_attach(struct Scsi_Host *shost, struct sym_fw *fw, struct sym_nvram *nvram)
void sym_hcb_free(struct sym_hcb *np)
