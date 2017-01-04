#define SCSI2_SYNC
#undef  SCSI2_TAG
#undef DEBUG_CONNECT
#undef DEBUG_MESSAGES
#undef CHECK_STRUCTURE
#define LOG_CONNECT		(1 << 0)
#define LOG_BUSSERVICE		(1 << 1)
#define LOG_FUNCTIONDONE	(1 << 2)
#define LOG_MESSAGES		(1 << 3)
#define LOG_BUFFER		(1 << 4)
#define LOG_ERROR		(1 << 8)
static int level_mask = LOG_ERROR;
module_param(level_mask, int, 0644);
static int __init fas216_log_setup(char *str)
__setup("fas216_logging=", fas216_log_setup);
static inline unsigned char fas216_readb(FAS216_Info *info, unsigned int reg)
static inline void fas216_writeb(FAS216_Info *info, unsigned int reg, unsigned int val)
static void fas216_dumpstate(FAS216_Info *info)
static void print_SCp(struct scsi_pointer *SCp, const char *prefix, const char *suffix)
static void fas216_dumpinfo(FAS216_Info *info)
static void __fas216_checkmagic(FAS216_Info *info, const char *func)
#define fas216_checkmagic(info) __fas216_checkmagic((info), __func__)
#define fas216_checkmagic(info)
static const char *fas216_bus_phase(int stat)
static const char *fas216_drv_phase(FAS216_Info *info)
static char fas216_target(FAS216_Info *info)
static void
fas216_do_log(FAS216_Info *info, char target, char *fmt, va_list ap)
static void fas216_log_command(FAS216_Info *info, int level,
struct scsi_cmnd *SCpnt, char *fmt, ...)
static void
fas216_log_target(FAS216_Info *info, int level, int target, char *fmt, ...)
static void fas216_log(FAS216_Info *info, int level, char *fmt, ...)
#define PH_SIZE	32
static struct  ph_list[PH_SIZE];
static int ph_ptr;
static void add_debug_list(int stat, int ssr, int isr, int ph)
static struct  cmd_list[8];
static int cmd_ptr;
static void fas216_cmd(FAS216_Info *info, unsigned int command)
static void print_debug_list(void)
static void fas216_done(FAS216_Info *info, unsigned int result);
static inline unsigned short
fas216_get_last_msg(FAS216_Info *info, int pos)
static int fas216_syncperiod(FAS216_Info *info, int ns)
static void fas216_set_sync(FAS216_Info *info, int target)
static void fas216_handlesync(FAS216_Info *info, char *msg)
static void fas216_updateptrs(FAS216_Info *info, int bytes_transferred)
static void fas216_pio(FAS216_Info *info, fasdmadir_t direction)
static void fas216_set_stc(FAS216_Info *info, unsigned int length)
static unsigned int fas216_get_ctc(FAS216_Info *info)
static void fas216_cleanuptransfer(FAS216_Info *info)
static void fas216_transfer(FAS216_Info *info)
static void fas216_stoptransfer(FAS216_Info *info)
static void fas216_aborttransfer(FAS216_Info *info)
static void fas216_kick(FAS216_Info *info);
static void fas216_disconnect_intr(FAS216_Info *info)
static void
fas216_reselected_intr(FAS216_Info *info)
static void fas216_parse_message(FAS216_Info *info, unsigned char *message, int msglen)
static int fas216_wait_cmd(FAS216_Info *info, int cmd)
static int fas216_get_msg_byte(FAS216_Info *info)
static void fas216_message(FAS216_Info *info)
static void fas216_send_command(FAS216_Info *info)
static void fas216_send_messageout(FAS216_Info *info, int start)
static void fas216_busservice_intr(FAS216_Info *info, unsigned int stat, unsigned int is)
static void fas216_funcdone_intr(FAS216_Info *info, unsigned int stat, unsigned int is)
static void fas216_bus_reset(FAS216_Info *info)
irqreturn_t fas216_intr(FAS216_Info *info)
static void __fas216_start_command(FAS216_Info *info, struct scsi_cmnd *SCpnt)
static int parity_test(FAS216_Info *info, int target)
static void fas216_start_command(FAS216_Info *info, struct scsi_cmnd *SCpnt)
static void fas216_allocate_tag(FAS216_Info *info, struct scsi_cmnd *SCpnt)
static void fas216_do_bus_device_reset(FAS216_Info *info,
struct scsi_cmnd *SCpnt)
static void fas216_kick(FAS216_Info *info)
static void fas216_devicereset_done(FAS216_Info *info, struct scsi_cmnd *SCpnt,
unsigned int result)
static void fas216_rq_sns_done(FAS216_Info *info, struct scsi_cmnd *SCpnt,
unsigned int result)
static void
fas216_std_done(FAS216_Info *info, struct scsi_cmnd *SCpnt, unsigned int result)
static void fas216_done(FAS216_Info *info, unsigned int result)
static int fas216_queue_command_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
DEF_SCSI_QCMD(fas216_queue_command)
static void fas216_internal_done(struct scsi_cmnd *SCpnt)
static int fas216_noqueue_command_lck(struct scsi_cmnd *SCpnt,
void (*done)(struct scsi_cmnd *))
DEF_SCSI_QCMD(fas216_noqueue_command)
static void fas216_eh_timer(unsigned long data)
enum res_find ;
static enum res_find fas216_find_command(FAS216_Info *info,
struct scsi_cmnd *SCpnt)
int fas216_eh_abort(struct scsi_cmnd *SCpnt)
int fas216_eh_device_reset(struct scsi_cmnd *SCpnt)
int fas216_eh_bus_reset(struct scsi_cmnd *SCpnt)
static void fas216_init_chip(FAS216_Info *info)
int fas216_eh_host_reset(struct scsi_cmnd *SCpnt)
#define TYPE_UNKNOWN	0
#define TYPE_NCR53C90	1
#define TYPE_NCR53C90A	2
#define TYPE_NCR53C9x	3
#define TYPE_Am53CF94	4
#define TYPE_EmFAS216	5
#define TYPE_QLFAS216	6
static char *chip_types[] = ;
static int fas216_detect_type(FAS216_Info *info)
static void fas216_reset_state(FAS216_Info *info)
int fas216_init(struct Scsi_Host *host)
int fas216_add(struct Scsi_Host *host, struct device *dev)
void fas216_remove(struct Scsi_Host *host)
void fas216_release(struct Scsi_Host *host)
int fas216_print_host(FAS216_Info *info, char *buffer)
int fas216_print_stats(FAS216_Info *info, char *buffer)
int fas216_print_devices(FAS216_Info *info, char *buffer)
EXPORT_SYMBOL(fas216_init);
EXPORT_SYMBOL(fas216_add);
EXPORT_SYMBOL(fas216_queue_command);
EXPORT_SYMBOL(fas216_noqueue_command);
EXPORT_SYMBOL(fas216_intr);
EXPORT_SYMBOL(fas216_remove);
EXPORT_SYMBOL(fas216_release);
EXPORT_SYMBOL(fas216_eh_abort);
EXPORT_SYMBOL(fas216_eh_device_reset);
EXPORT_SYMBOL(fas216_eh_bus_reset);
EXPORT_SYMBOL(fas216_eh_host_reset);
EXPORT_SYMBOL(fas216_print_host);
EXPORT_SYMBOL(fas216_print_stats);
EXPORT_SYMBOL(fas216_print_devices);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("Generic FAS216/NCR53C9x driver core");
MODULE_LICENSE("GPL");
