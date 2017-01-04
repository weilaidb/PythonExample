#if 1
#undef KERN_DEBUG
#define KERN_DEBUG KERN_WARNING
MODULE_AUTHOR("Paul Mackerras (paulus@samba.org)");
MODULE_DESCRIPTION("PowerMac MESH SCSI driver");
MODULE_LICENSE("GPL");
static int sync_rate = CONFIG_SCSI_MESH_SYNC_RATE;
static int sync_targets = 0xff;
static int resel_targets = 0xff;
static int debug_targets = 0;
static int init_reset_delay = CONFIG_SCSI_MESH_RESET_DELAY_MS;
module_param(sync_rate, int, 0);
MODULE_PARM_DESC(sync_rate, "Synchronous rate (0..10, 0=async)");
module_param(sync_targets, int, 0);
MODULE_PARM_DESC(sync_targets, "Bitmask of targets allowed to set synchronous");
module_param(resel_targets, int, 0);
MODULE_PARM_DESC(resel_targets, "Bitmask of targets allowed to set disconnect");
module_param(debug_targets, int, 0644);
MODULE_PARM_DESC(debug_targets, "Bitmask of debugged targets");
module_param(init_reset_delay, int, 0);
MODULE_PARM_DESC(init_reset_delay, "Initial bus reset delay (0=no reset)");
static int mesh_sync_period = 100;
static int mesh_sync_offset = 0;
static unsigned char use_active_neg = 0;
#define ALLOW_SYNC(tgt)		((sync_targets >> (tgt)) & 1)
#define ALLOW_RESEL(tgt)	((resel_targets >> (tgt)) & 1)
#define ALLOW_DEBUG(tgt)	((debug_targets >> (tgt)) & 1)
#define DEBUG_TARGET(cmd)	((cmd) && ALLOW_DEBUG((cmd)->device->id))
#undef MESH_DBG
#define N_DBG_LOG	50
#define N_DBG_SLOG	20
#define NUM_DBG_EVENTS	13
#undef	DBG_USE_TB
struct dbglog ;
enum mesh_phase ;
enum msg_phase ;
enum sdtr_phase ;
struct mesh_target ;
struct mesh_state ;
static void mesh_done(struct mesh_state *ms, int start_next);
static void mesh_interrupt(struct mesh_state *ms);
static void cmd_complete(struct mesh_state *ms);
static void set_dma_cmds(struct mesh_state *ms, struct scsi_cmnd *cmd);
static void halt_dma(struct mesh_state *ms);
static void phase_mismatch(struct mesh_state *ms);
static inline u32 readtb(void)
static void dlog(struct mesh_state *ms, char *fmt, int a)
static void dumplog(struct mesh_state *ms, int t)
static void dumpslog(struct mesh_state *ms)
static inline void dlog(struct mesh_state *ms, char *fmt, int a)
static inline void dumplog(struct mesh_state *ms, int tgt)
static inline void dumpslog(struct mesh_state *ms)
#define MKWORD(a, b, c, d)	(((a) << 24) + ((b) << 16) + ((c) << 8) + (d))
static void
mesh_dump_regs(struct mesh_state *ms)
static inline void mesh_flush_io(volatile struct mesh_regs __iomem *mr)
static void mesh_completed(struct mesh_state *ms, struct scsi_cmnd *cmd)
static void mesh_init(struct mesh_state *ms)
static void mesh_start_cmd(struct mesh_state *ms, struct scsi_cmnd *cmd)
static void mesh_start(struct mesh_state *ms)
static void mesh_done(struct mesh_state *ms, int start_next)
static inline void add_sdtr_msg(struct mesh_state *ms)
static void set_sdtr(struct mesh_state *ms, int period, int offset)
static void start_phase(struct mesh_state *ms)
static inline void get_msgin(struct mesh_state *ms)
static inline int msgin_length(struct mesh_state *ms)
static void reselected(struct mesh_state *ms)
static void do_abort(struct mesh_state *ms)
static void handle_reset(struct mesh_state *ms)
static irqreturn_t do_mesh_interrupt(int irq, void *dev_id)
static void handle_error(struct mesh_state *ms)
static void handle_exception(struct mesh_state *ms)
static void handle_msgin(struct mesh_state *ms)
static void set_dma_cmds(struct mesh_state *ms, struct scsi_cmnd *cmd)
static void halt_dma(struct mesh_state *ms)
static void phase_mismatch(struct mesh_state *ms)
static void cmd_complete(struct mesh_state *ms)
static int mesh_queue_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(mesh_queue)
static void mesh_interrupt(struct mesh_state *ms)
static int mesh_abort(struct scsi_cmnd *cmd)
static int mesh_host_reset(struct scsi_cmnd *cmd)
static void set_mesh_power(struct mesh_state *ms, int state)
static int mesh_suspend(struct macio_dev *mdev, pm_message_t mesg)
static int mesh_resume(struct macio_dev *mdev)
static int mesh_shutdown(struct macio_dev *mdev)
static struct scsi_host_template mesh_template = ;
static int mesh_probe(struct macio_dev *mdev, const struct of_device_id *match)
static int mesh_remove(struct macio_dev *mdev)
static struct of_device_id mesh_match[] =
;
MODULE_DEVICE_TABLE (of, mesh_match);
static struct macio_driver mesh_driver =
;
static int __init init_mesh(void)
static void __exit exit_mesh(void)
module_init(init_mesh);
module_exit(exit_mesh);
